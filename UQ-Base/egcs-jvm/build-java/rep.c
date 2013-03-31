/*
    Little utility program that really should be done with a script.
*/

int main(int argc,char **argv) {
int i;
char s[1024];
  while (scanf("%x %*s %*s %*s %s",&i,s)==2) 
    printf("sed 's/symref%send/sipush\\ %i/' < %s > %s.tmp\nmv -f %s.tmp %s\n",s,i+4096,argv[1],argv[1],argv[1],argv[1]);
  return 0;
}
