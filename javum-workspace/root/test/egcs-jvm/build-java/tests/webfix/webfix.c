/*
Title:         WEBFIX
Author:        Philip J. Erdelsky, pje@acm.org
Platform:      alumni.caltech.edu or alumnae.caltech.edu
Language:      Old-Fashioned C
Portability:   Most UNIX-type systems, with slight changes
Restrictions:  Public domain, no restrictions on use
Date:          03-15-1996
After files are uploaded to a user's .public_html subdirectory, WEBFIX does the
file cleanup generally required to make them acceptable to the Web server. It
is especially useful when files are uploaded from a DOS/Windows system, in
which file names and extensions are case-insensitive, and extensions are
limited to three characters.
It is tacitly assumed that all files to be posted on the World Wide Web are in
the same directory, since WEBFIX works on only a single directory. Given the
storage limitations on alumni.caltech.edu and alumnae.caltech.edu, this is a
reasonable assumption.
It is also assumed that all letters in all file names and extensions (and in
the names of any subdirectories) are intended to be lower-case. This is not a
foregone conclusion, but it is a reasonable convention to follow, and it seems
to be a very widespread practice.
To process a directory, simply compile this source file to an executable file
called webfix, and execute the following command line:
     webfix [directory path]
If the directory path is omitted, then the current working directory (./) is
presumed.
WEBFIX then processes every file in the specified directory (but not in its
subdirectories), in the following manner.
WEBFIX changes .htm extensions to .html, and it changes the permission bits
for every file to rwxr-xr-x. These are its principal jobs.
You can easily add the code to change other extensions, if necessary.
If all letters in all file names and extensions are lower-case, WEBFIX's job
is finished. However, when new files are uploaded from a DOS/Windows system,
the letters in their names and extensions are often converted to upper case.
They will not automatically replace the old files that they were intended to
replace. To handle this situation, when a file contains at least one
upper-case letter in its name or extension, WEBFIX searches for another file
that matches it in all respects except for case. Then it deletes that file.
Then all letters in the file name and extension of the former file are changed
to lower-case.
WEBFIX displays a log of its activities on the standard output device.
WEBFIX uses a rather primitive sorting method (insertion), which may cause
unacceptable delays when it is used on extremely large directories.
WEBFIX has been written in old-fashioned C, without function prototypes, so it
can be compiled even with the old-fashioned C compiler available on some
systems.
*/
#include <stdio.h>
#include <dirent.h>
#include <ctype.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#ifdef __MSDOS__
#define S_ISUID   04000
#define S_ISGID   02000
#define S_ISVTX   01000
#define S_IRWXU   00700
#define S_IRUSR   00400
#define S_IWUSR   00200
#define S_IXUSR   00100
#define S_IRWXG   00070
#define S_IRGRP   00040
#define S_IWGRP   00020
#define S_IXGRP   00010
#define S_IRWXO   00007
#define S_IROTH   00004
#define S_IWOTH   00002
#define S_IXOTH   00001
#endif
#define PERMISSIONS (S_IRWXU + S_IRGRP + S_IXGRP + S_IROTH + S_IXOTH)
#define PERMASK (S_IRWXU + S_IRWXG + S_IRWXO)
#define S_ISMASK (S_ISUID + S_ISGID + S_ISVTX)
/*-----------------------------------------------------------------------------
This function is similar to strcmp(), but it compares two strings in a
case-insensitive manner, as though all letters in both strings had been
converted to upper-case.
-----------------------------------------------------------------------------*/
static int strcmpci(s, t)
  char *s;
  char *t;
{
  int n;
  while ((n = toupper(*s) - toupper(*t)) == 0 && *s != 0)
  {
    s++;
    t++;
  }
  return n;
}
/*-----------------------------------------------------------------------------
This function scans a function name and returns a pointer to its extension,
which it presumed to begin right after the first period. If there is no
extension, it returns a pointer to the terminating nul character.
-----------------------------------------------------------------------------*/
static char *getext(s)
  char *s;
{
  for (; *s != 0; s++)
  {
    if (*s == '.')
      return s + 1;
  }
  return s;
}
/*-----------------------------------------------------------------------------
This function is similar of strcpy(), but it changes all upper-case letters to
the corresponding lower-case letters before writing them to the destination
string.
-----------------------------------------------------------------------------*/
static void strcpylc(s, t)
  char *s;
  char *t;
{
  do *s++ = tolower(*t); while (*t++ != 0);
}
/*-----------------------------------------------------------------------------
This function edits the permission bits to a string of the standard form used
by the ls utility and returns a pointer to the first character. It uses two
buffers alternately, so any two consecutive calls on it will use different
buffers.
-----------------------------------------------------------------------------*/
static char *permissions(p)
  int p;
{
  static char buffer[2][10];
  static int i = 0;
  char *s = buffer[i];
  i = 1 - i;
  s[0] = p & S_IRUSR ? 'r' : '-';
  s[1] = p & S_IWUSR ? 'w' : '-';
  s[2] = p & S_IXUSR ? 'x' : '-';
  s[3] = p & S_IRGRP ? 'r' : '-';
  s[4] = p & S_IWGRP ? 'w' : '-';
  s[5] = p & S_IXGRP ? 'x' : '-';
  s[6] = p & S_IROTH ? 'r' : '-';
  s[7] = p & S_IWOTH ? 'w' : '-';
  s[8] = p & S_IXOTH ? 'x' : '-';
  s[9] = 0;
  return s;
}
/*-----------------------------------------------------------------------------
Program execution starts here.
-----------------------------------------------------------------------------*/
void main(argc, argv)
  int argc;
  char **argv;
{
  static char path[1024];
  char *endpath;
  DIR *d;
  struct dirent *p;
  struct file
  {
    struct file *next;
    int permissions;
    char name[1];
  } *first = NULL;
  strcpy(path, argc < 2 || argv[1][0] == 0 ? "." : argv[1]);
  endpath = path + strlen(path);
  if (path[strlen(path)-1] != '/')
  {
    *endpath++ = '/';
    *endpath = 0;
  }
  d = opendir(path);
  if (d == NULL)
  {
    fprintf(stderr, "WEBFIX: Can't open directory %s\n", path);
    exit(1);
  }
  /* This loop reads the directory and creats a sorted linked list of   */
  /* files to be processed. */
  while ((p = readdir(d)) != NULL)
  {
    if (strcmp(p->d_name , ".") != 0 && strcmp(p->d_name , "..") != 0)
    {
      struct file *f;
      struct stat s;
      f = (struct file *) malloc(sizeof(struct file) + strlen(p->d_name));
      if (f == NULL)
      {
        fprintf(stderr, "WEBFIX: Insufficient memory\n");
        return 1;
      }
      strcpy(endpath, p->d_name);
      stat(path, &s);
      if ((s.st_mode & S_IFMT) == S_IFREG)
      {
        strcpy(f->name, p->d_name);
        f->permissions = s.st_mode & S_ISMASK + PERMASK;
        if (first == NULL)
        {
          first = f;
          f->next = NULL;
        }
        else if (strcmp(f->name, first->name) < 0)
        {
          f->next = first;
          first = f;
        }
        else
        {
          struct file *l;
          for (l = first; l->next != NULL; l = l->next)
            if (strcmp(f->name, l->next->name) < 0)
              break;
          f->next = l->next;
          l->next = f;
        }
      }
    }
  }
  closedir(d);
  /* This loop processes the files in sorted order. */
  while (first != NULL)
  {
    static char new_path[1024];
    struct file *next;
    char *extension;
    char *t;
    strcpy(endpath, first->name);
    printf("Processing %s\n", path);
    /* The array path[] contains the old file specifications. */
    strcpylc(new_path, path);
    /* The array new_path[] contains the new file specifications. */
    extension = getext(endpath);
    /* This statement changes .htm to .html. */
    if (strcmpci(extension, "htm") == 0)
      strcpy(new_path + (extension - path), "html");
    /* This loop searches for an upper-case letter in the file name and */
    /* extension. If it finds one, it deletes any conflicting file.     */
    for (t = first->name; *t != 0; t++)
    {
      if (isupper(*t))
      {
        struct file *previous = first;
        struct file *duplicate = first->next;
        while (duplicate != NULL)
        {
          if (strcmpci(new_path + (endpath - path), duplicate->name) == 0)
          {
            previous->next = duplicate->next;
            strcpy(endpath, duplicate->name);
            printf("  Deleting %s\n", path);
            if (unlink(path) != 0)
            {
              fprintf(stderr, "WEBFIX: Can't delete file %s\n", path);
              return 1;
            }
            strcpy(endpath, first->name);
            free(duplicate);
            break;
          }
          previous = duplicate;
          duplicate = duplicate->next;
        }
        break;
      }
    }
    /* This section renames the file, if the new file specifications differ */
    /* in any way from the old file specifications.                         */
    if (strcmp(new_path, path) != 0)
    {
      printf("  Renaming %s to %s\n", path, new_path);
      if (rename(path, new_path) != 0)
      {
        fprintf(stderr, "WEBFIX Can't rename file %s to %s\n", path, new_path);
        exit(1);
      }
    }
    /* This file sets the permissions to rwxr-xr-x, if the old permissions */
    /* followed a different pattern.                                       */
    if ((first->permissions & PERMASK) != PERMISSIONS)
    {
      printf("  Changing permissions from %s to %s\n",
        permissions(first->permissions), permissions(PERMISSIONS));
      if (chmod(new_path, first->permissions & S_ISMASK | PERMISSIONS) != 0)
      {
        fprintf(stderr, "Can't change permissions for file %s\n", new_path);
        exit(1);
      }
    }
    next = first->next;
    free(first);
    first = next;
  }
}
