# Makefile for GNU C++ compiler.
#   Copyright (C) 1987, 88, 90-5, 1998 Free Software Foundation, Inc.

#This file is part of GNU CC.

#GNU CC is free software; you can redistribute it and/or modify
#it under the terms of the GNU General Public License as published by
#the Free Software Foundation; either version 2, or (at your option)
#any later version.

#GNU CC is distributed in the hope that it will be useful,
#but WITHOUT ANY WARRANTY; without even the implied warranty of
#MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#GNU General Public License for more details.

#You should have received a copy of the GNU General Public License
#along with GNU CC; see the file COPYING.  If not, write to
#the Free Software Foundation, 59 Temple Place - Suite 330,
#Boston, MA 02111-1307, USA.

# The makefile built from this file lives in the language subdirectory.
# Its purpose is to provide support for:
#
# 1) recursion where necessary, and only then (building .o's), and
# 2) building and debugging cc1 from the language subdirectory, and
# 3) nothing else.
#
# The parent makefile handles all other chores, with help from the
# language makefile fragment, of course.
#
# The targets for external use are:
# all, TAGS, ???mostlyclean, ???clean.

# Suppress smart makes who think they know how to automake Yacc files
.y.c:

# Variables that exist for you to override.
# See below for how to change them for certain systems.

ALLOCA =

# Various ways of specifying flags for compilations:  
# CFLAGS is for the user to override to, e.g., do a bootstrap with -O2.
# BOOT_CFLAGS is the value of CFLAGS to pass
# to the stage2 and stage3 compilations
# XCFLAGS is used for most compilations but not when using the GCC just built.
XCFLAGS =
CFLAGS = -g
BOOT_CFLAGS = -O $(CFLAGS)
# These exists to be overridden by the x-* and t-* files, respectively.
X_CFLAGS =
T_CFLAGS =

X_CPPFLAGS =
T_CPPFLAGS =

CC = gcc
BBISON = `if [ -f ../../bison/bison ] ; then echo ../../bison/bison -L $(srcdir)/../../bison/ ;  else echo bison ; fi`
BISONFLAGS =
LEX = `if [ -f ../../flex/flex ] ; then echo ../../flex/flex ;  else echo flex ; fi`
LEXFLAGS =
AR = ar
AR_FLAGS = rc
SHELL = /bin/sh
MAKEINFO = makeinfo
TEXI2DVI = texi2dvi

# Define this as & to perform parallel make on a Sequent.
# Note that this has some bugs, and it seems currently necessary 
# to compile all the gen* files first by hand to avoid erroneous results.
P =

# This is used in the definition of SUBDIR_USE_ALLOCA.
# ??? Perhaps it would be better if it just looked for *gcc*.
OLDCC = cc

# This is used instead of ALL_CFLAGS when compiling with GCC_FOR_TARGET.
# It omits XCFLAGS, and specifies -B./.
# It also specifies -B$(tooldir)/ to find as and ld for a cross compiler.
GCC_CFLAGS=$(INTERNAL_CFLAGS) $(X_CFLAGS) $(T_CFLAGS) $(CFLAGS)

# Tools to use when building a cross-compiler.
# These are used because `configure' appends `cross-make'
# to the makefile when making a cross-compiler.

# We don't use cross-make.  Instead we use the tools
# from the build tree, if they are available.
# program_transform_name and objdir are set by configure.in.
program_transform_name =
objdir = .

target=jvm-unknown-none
xmake_file=
tmake_file= ../../egcs-1.1.2/gcc/config/jvm/t-jvm
#version=`sed -e 's/.*\"\([^ \"]*\)[ \"].*/\1/' < $(srcdir)/version.c`
#mainversion=`sed -e 's/.*\"\([0-9]*\.[0-9]*\).*/\1/' < $(srcdir)/version.c`

# Directory where sources are, from where we are.
srcdir = ../../../egcs-1.1.2/gcc/cp
VPATH = ../../../egcs-1.1.2/gcc/cp

# Additional system libraries to link with.
CLIB=

# Change this to a null string if obstacks are installed in the
# system library.
OBSTACK=obstack.o

# Choose the real default target.
ALL=all

# End of variables for you to override.

# Definition of `all' is here so that new rules inserted by sed
# do not specify the default target.
all: all.indirect

# This tells GNU Make version 3 not to put all variables in the environment.
.NOEXPORT:

# sed inserts variable overrides after the following line.
####target overrides
#
# t-jvm
#
# The Makefile fragment to include when compiling gcc et al for JVM
#
#
# The makefile macros etc. are included in the order found in the
# section "Target Fragment" in the gcc info-files or the paper copy of
# "Using and Porting GNU CC"
#
# Don't run fixproto
STMP_FIXPROTO =

# CROSS_LIBGCC1 is not defined, to make sure we use our own routines.
#
CROSS_LIBGCC1=

# Do not test the nonexistent/empty libgcc1
LIBGCC1_TEST=

#
# Since we need to pass 64-bit entities BY VALUE, we have to bypass
# the normal calling scheme when we make the internal functions in
# libgcc2.a 
#
# Also, there is no DF-mode.  Just hope the word 'DF' is only used as
# in mode(DF) in libgcc2 (seems reasonable)
#
LIBGCC2_CFLAGS = -mlibfunc -g -DDF=SF -Dinhibit_libc

#
# When compiling libgcc2 into an archive, it would be handy to have an
# archive-program.  Exclude the guess about where to find it, and call
# it by its name.  There is no ranlib here (it may be lost).
#
AR_FOR_TARGET=ar-jvm
RANLIB_TEST_FOR_TARGET=false

#
# We dont want the gcc-supplied headers.
#
USER_H = $(LANG_EXTRA_HEADERS)

#
# End of documented makefile fragment.  Over to hacking.
#

# This is where we want the C++ header files.  Experience shows that they are
# compiler-version-specific, also, as other include-files are here, they should be
# here as well (and not in $(libdir)/g++-include)
gxx_include_dir=$(libsubdir)/g++-include

# These two known to work.  Others attached by configure.  Use at own risk.
#
LANGUAGES=c c++

#
# Like install-cross, but without common-headers which are just a
# pain. 
#
INSTALL_TARGET= install-jvm-common install-man install-cross-tools \
 install-libgcc # install-jvm-misc

#
# We create a directory called jvm_c_support, and have to depend on a
# few files in there.
#
# Not any more
# VPATH+=:jvm_c_support

#
# install-jvm-common is like install-common, except it doesnt install
# any stupid scripts called 'c++' and 'g++' in /usr/local/bin.
#  Will also never overwrite /usr/local/bin/gcc.
#
install-jvm-common: native install-dir gcc-cross g++-cross specs
	for file in $(COMPILERS); do \
	  if [ -f $$file ] ; then \
	    rm -f $(libsubdir)/$$file; \
	    $(INSTALL_PROGRAM) $$file $(libsubdir)/$$file; \
	  else \
            true; \
	  fi; \
	done
	for file in $(EXTRA_PASSES) $(EXTRA_PARTS) $(EXTRA_PROGRAMS) ..; do \
	  if [ x"$$file" != x.. ]; then \
	    rm -f $(libsubdir)/$$file; \
	    $(INSTALL_PROGRAM) $$file $(libsubdir)/$$file; \
	  else \
	    true; \
	  fi; \
	done
	-rm -f $(libsubdir)/specs
	$(INSTALL_DATA) specs $(libsubdir)/specs
#
# Install the gcc driver program as gcc-<first word in target>
# Install the g++ driver program as g++-<first word in target>
#  The canonical cross-compiler name has changed for some reason, but we keep
# the "old" name.
#
	-if [ -f gcc-cross ] ; then \
	  target_name=`echo $(target) | sed 's/-.*//'`; \
	  rm -f $(bindir)/gcc-$$target_name; \
	  rm -f $(bindir)/$$target_name-gcc; \
	  $(INSTALL_PROGRAM) gcc-cross $(bindir)/gcc-$$target_name; \
	  $(HARDLINK) $(bindir)/gcc-$$target_name $(bindir)/$$target_name-gcc; \
	fi
	if [ -f g++-cross ] ; then \
	  target_name=`echo $(target) | sed 's/-.*//'`; \
	  rm -f $(bindir)/g++-$$target_name; \
	  rm -f $(bindir)/$$target_name-g++; \
	  $(INSTALL_PROGRAM) g++-cross $(bindir)/g++-$$target_name; \
	  $(HARDLINK) $(bindir)/g++-$$target_name $(bindir)/$$target_name-g++; \
	fi
	-rm -f $(libsubdir)/cpp
	$(INSTALL_PROGRAM) cpp $(libsubdir)/cpp
#
# End of jvm makefile fragment 
#
####host overrides
####cross overrides

####build overrides
# We have to use the cross-compiler we just built to compile it.
CC = gcc -b $(host)

# Need those to compile binaries running on host machine.
# It is configured by
#
# configure --host=target_cpu-target_os \
#	--target=host=target_cpu-target_os --build=host_cpu-host_os
#
# That HOST stuff has to be taken care of very carefully.
HOST_PREFIX=l-
HOST_PREFIX_1=$(HOST_PREFIX)
HOST_CC=$(CC) -b $(build)
HOST_CFLAGS=$(INTERNAL_CFLAGS) $(T_CFLAGS) $(CFLAGS) $(XCFLAGS)
HOST_CLIB=
HOST_LDFLAGS=$(LDFLAGS)
HOST_CPPFLAGS=$(ALL_CPPFLAGS)
HOST_ALLOCA=$(ALLOCA)
HOST_MALLOC=$(MALLOC)
HOST_OBSTACK=$(OBSTACK)

# To build the native compiler with the cross compiler, the headers 
# for the target are already fixed. And /usr/include is for host, not
# target.
FIXINCLUDES=Makefile.in

# Don't run fixproto either
STMP_FIXPROTO =

# Cause installation using install-build. We do nothing here.
#INSTALL_TARGET = install-build

# Don't try to compile the things we can't compile or we have made
# while making gcc with the cross-compiler.
#ALL = all.build
#
# Now figure out from those variables how to compile and link.

all.indirect: Makefile ../cc1plus$(exeext)

# IN_GCC tells obstack.h that we are using gcc's <stddef.h> file.
INTERNAL_CFLAGS = $(CROSS) -DIN_GCC 

# This is the variable actually used when we compile.
ALL_CFLAGS = $(INTERNAL_CFLAGS) $(X_CFLAGS) $(T_CFLAGS) $(CFLAGS) $(XCFLAGS)

# Likewise.
ALL_CPPFLAGS = $(CPPFLAGS) $(X_CPPFLAGS) $(T_CPPFLAGS)

# Even if ALLOCA is set, don't use it if compiling with GCC.

SUBDIR_OBSTACK = `if [ x$(OBSTACK) != x ]; then echo ../$(OBSTACK); else true; fi`
SUBDIR_USE_ALLOCA = `case "${CC}" in "${OLDCC}") if [ x$(ALLOCA) != x ]; then echo ../$(ALLOCA); else true; fi ;; esac`
SUBDIR_MALLOC = `if [ x$(MALLOC) != x ]; then echo ../$(MALLOC); else true; fi`

# How to link with both our special library facilities
# and the system's installed libraries.
LIBS = $(SUBDIR_OBSTACK) $(SUBDIR_USE_ALLOCA) $(SUBDIR_MALLOC) $(CLIB)

# Specify the directories to be searched for header files.
# Both . and srcdir are used, in that order,
# so that tm.h and config.h will be found in the compilation
# subdirectory rather than in the source directory.
INCLUDES = -I. -I.. -I$(srcdir) -I$(srcdir)/.. -I$(srcdir)/../config

# Always use -I$(srcdir)/config when compiling.
.c.o:
	$(CC) -c $(ALL_CFLAGS) $(ALL_CPPFLAGS) $(INCLUDES) $<

# The only suffixes we want for implicit rules are .c and .o.
.SUFFIXES:
.SUFFIXES: .c .o

# This tells GNU make version 3 not to export all the variables
# defined in this file into the environment.
.NOEXPORT:
#
# Lists of files for various purposes.

# Language-specific object files for g++

CXX_OBJS = call.o decl.o errfn.o expr.o pt.o sig.o typeck2.o \
 class.o decl2.o error.o lex.o parse.o ptree.o rtti.o spew.o typeck.o cvt.o \
 except.o friend.o init.o method.o search.o semantics.o tree.o xref.o \
 repo.o 

# Language-independent object files.
OBJS = `cat ../stamp-objlist` ../c-common.o ../c-pragma.o
OBJDEPS = ../stamp-objlist ../c-common.o ../c-pragma.o

compiler: ../cc1plus$(exeext)
../cc1plus$(exeext): $(P) $(CXX_OBJS) $(OBJDEPS) $(LIBDEPS)
	$(CC) $(ALL_CFLAGS) $(LDFLAGS) -o $@ \
	      $(CXX_OBJS) $(OBJS) $(LIBS)

Makefile: $(srcdir)/Makefile.in $(srcdir)/../configure
	cd ..; $(SHELL) config.status

native: config.status ../cc1plus$(exeext)
#
# Compiling object files from source files.

# Note that dependencies on obstack.h are not written
# because that file is not part of GCC.

# C++ language specific files.

RTL_H = $(srcdir)/../rtl.h $(srcdir)/../rtl.def \
	$(srcdir)/../machmode.h $(srcdir)/../machmode.def
TREE_H = $(srcdir)/../tree.h $(srcdir)/../real.h $(srcdir)/../tree.def \
	$(srcdir)/../machmode.h $(srcdir)/../machmode.def
CXX_TREE_H = $(TREE_H) cp-tree.h cp-tree.def
PARSE_H = $(srcdir)/parse.h
PARSE_C = $(srcdir)/parse.c
EXPR_H = $(srcdir)/../expr.h ../insn-codes.h

parse.o : $(PARSE_C) $(CONFIG_H) $(CXX_TREE_H) $(srcdir)/../flags.h lex.h \
	$(srcdir)/../except.h $(srcdir)/../output.h $(srcdir)/../system.h \
	$(srcdir)/../toplev.h
	$(CC) -c $(ALL_CFLAGS) $(ALL_CPPFLAGS) $(INCLUDES) $(BIG_SWITCHFLAG) \
  `echo $(PARSE_C) | sed 's,^\./,,'`

CONFLICTS = expect 26 shift/reduce conflicts and 42 reduce/reduce conflicts.
$(PARSE_H) : $(PARSE_C)
$(PARSE_C) : $(srcdir)/parse.y
	@echo $(CONFLICTS)
	cd $(srcdir); $(BISON) $(BISONFLAGS) -d -o parse.c parse.y
	cd $(srcdir); grep '^#define[ 	]*YYEMPTY' parse.c >>parse.h
#$(PARSE_C) $(PARSE_H) : stamp-parse ; @true
#stamp-parse: $(srcdir)/parse.y
#	@echo $(CONFLICTS)
#	$(BISON) $(BISONFLAGS) -d $(srcdir)/parse.y
#	grep '^#define[ 	]*YYEMPTY' y.tab.c >>y.tab.h
#	$(srcdir)/../move-if-change y.tab.c $(PARSE_C)
#	$(srcdir)/../move-if-change y.tab.h $(PARSE_H)
#	cp $(PARSE_C) y.tab.c
#	touch stamp-parse

# hash.h really depends on $(srcdir)/gxx.gperf.
# But this would screw things for people that don't have gperf,
# if gxx.gpref got touched, say.
# Thus you have to remove hash.h to force it to be re-made.
$(srcdir)/hash.h:
	gperf -p -j1 -g -o -t -N is_reserved_word '-k1,4,7,$$' \
		$(srcdir)/gxx.gperf >$(srcdir)/hash.h

spew.o : spew.c $(CONFIG_H) $(CXX_TREE_H) \
  $(PARSE_H) $(srcdir)/../flags.h lex.h $(srcdir)/../system.h
lex.o : lex.c $(CONFIG_H) $(CXX_TREE_H) \
  $(PARSE_H) input.c $(srcdir)/../flags.h hash.h lex.h \
  $(srcdir)/../c-pragma.h $(srcdir)/../system.h $(srcdir)/../toplev.h \
  $(srcdir)/../output.h
decl.o : decl.c $(CONFIG_H) $(CXX_TREE_H) $(srcdir)/../flags.h \
  lex.h decl.h $(srcdir)/../stack.h $(srcdir)/../output.h  \
  $(srcdir)/../except.h $(srcdir)/../system.h $(srcdir)/../toplev.h
decl2.o : decl2.c $(CONFIG_H) $(CXX_TREE_H) $(srcdir)/../flags.h \
  lex.h decl.h $(EXPR_H) $(srcdir)/../except.h \
  $(srcdir)/../output.h $(srcdir)/../except.h $(srcdir)/../system.h \
  $(srcdir)/../toplev.h $(srcdir)/../dwarf2out.h $(srcdir)/../dwarfout.h
typeck2.o : typeck2.c $(CONFIG_H) $(CXX_TREE_H) $(srcdir)/../flags.h \
  $(srcdir)/../system.h $(srcdir)/../toplev.h
typeck.o : typeck.c $(CONFIG_H) $(CXX_TREE_H) $(srcdir)/../flags.h $(RTL_H) \
  $(EXPR_H) $(srcdir)/../system.h $(srcdir)/../toplev.h
class.o : class.c $(CONFIG_H) $(CXX_TREE_H) $(srcdir)/../flags.h \
  $(srcdir)/../system.h $(srcdir)/../toplev.h
call.o : call.c $(CONFIG_H) $(CXX_TREE_H) $(srcdir)/../flags.h \
  $(srcdir)/../system.h $(srcdir)/../toplev.h
friend.o : friend.c $(CONFIG_H) $(CXX_TREE_H) $(srcdir)/../flags.h $(RTL_H) \
  $(srcdir)/../system.h $(srcdir)/../toplev.h
init.o : init.c $(CONFIG_H) $(CXX_TREE_H) $(srcdir)/../flags.h $(RTL_H) \
  $(EXPR_H) $(srcdir)/../system.h $(srcdir)/../toplev.h
method.o : method.c $(CONFIG_H) $(CXX_TREE_H) $(srcdir)/../system.h \
  $(srcdir)/../toplev.h
cvt.o : cvt.c $(CONFIG_H) $(CXX_TREE_H) $(srcdir)/../system.h
search.o : search.c $(CONFIG_H) $(CXX_TREE_H) $(srcdir)/../stack.h \
  $(srcdir)/../flags.h $(srcdir)/../system.h $(srcdir)/../toplev.h
tree.o : tree.c $(CONFIG_H) $(CXX_TREE_H) $(srcdir)/../flags.h \
  $(srcdir)/../system.h $(srcdir)/../toplev.h
ptree.o : ptree.c $(CONFIG_H) $(CXX_TREE_H) $(srcdir)/../system.h
rtti.o : rtti.c $(CONFIG_H) $(CXX_TREE_H) $(srcdir)/../flags.h \
  $(srcdir)/../system.h $(srcdir)/../toplev.h
except.o : except.c $(CONFIG_H) $(CXX_TREE_H) $(srcdir)/../flags.h $(RTL_H) \
  $(srcdir)/../except.h $(srcdir)/../system.h $(srcdir)/../toplev.h
expr.o : expr.c $(CONFIG_H) $(CXX_TREE_H) $(RTL_H) $(srcdir)/../flags.h \
  $(EXPR_H) $(srcdir)/../system.h $(srcdir)/../toplev.h
xref.o : xref.c $(CONFIG_H) $(CXX_TREE_H) $(srcdir)/../input.h \
  $(srcdir)/../system.h $(srcdir)/../toplev.h
pt.o : pt.c $(CONFIG_H) $(CXX_TREE_H) decl.h $(PARSE_H) lex.h \
  $(srcdir)/../system.h $(srcdir)/../toplev.h
error.o : error.c $(CONFIG_H) $(CXX_TREE_H) $(srcdir)/../system.h \
  $(srcdir)/../toplev.h
errfn.o : errfn.c $(CONFIG_H) $(CXX_TREE_H) $(srcdir)/../system.h \
  $(srcdir)/../toplev.h
sig.o : sig.c $(CONFIG_H) $(CXX_TREE_H) $(srcdir)/../flags.h \
  $(srcdir)/../system.h $(srcdir)/../toplev.h
repo.o : repo.c $(CONFIG_H) $(CXX_TREE_H) $(srcdir)/../system.h \
  $(srcdir)/../toplev.h
semantics.o: semantics.c $(CONFIG_H) $(CXX_TREE_H) lex.h \
  $(srcdir)/../except.h $(srcdir)/../system.h $(srcdir)/../toplev.h
  

#
# These exist for maintenance purposes.

# Update the tags table.
TAGS: force
	cd $(srcdir) ;				\
	etags *.c *.h ;				\
	echo 'l' | tr 'l' '\f' >> TAGS ;	\
	echo 'parse.y,0' >> TAGS ; 		\
	etags -a ../*.h ../*.c;

.PHONY: TAGS

force:

g++FAQ.info:	$(srcdir)/g++FAQ.texi
	$(MAKEINFO) --no-split -o ./g++FAQ.info $(srcdir)/g++FAQ.texi

# Preprocess the texi file so that the final document will have
# hyperlinks.
# It would be nice if texi2html could do something like this itself.

# Assumption 1: the FAQ puts all http: and ftp: links in a @file{...}.
# Assumption 2: newsgroups are like @file{comp.foo}
# Assumption 3: email addresses match the regexp shown.

g++FAQ.html:	$(srcdir)/g++FAQ.texi
	mkdir work
	sed -e 's?@file{\([fth]*p://[^}]*\)}?@strong{<A HREF="\1">\1</A>}?' \
	    -e 's?@file{\(comp\.[-a-z+.]*\)}?<A HREF="news:\1">\1</A>?' \
	    -e 's?@file{\(gnu\.[-a-z+.]*\)}?<A HREF="news:\1">\1</A>?' \
	    -e 's?\([.+a-zA-Z0-9-]*@@[.a-zA-Z0-9-]*[a-zA-Z0-9]\)?<A HREF="mailto:\1">\1</A>?' \
	    $(srcdir)/g++FAQ.texi > work/g++FAQ.texi
	cd work; texi2html g++FAQ.texi
	mv work/*.html .
	rm -r work

# Make plain-text form.

g++FAQ.txt:	$(srcdir)/g++FAQ.texi
	$(MAKEINFO) --no-split --no-headers -o - $(srcdir)/g++FAQ.texi |\
		sed '/^Concept Index/,$$d' > g++FAQ.txt

