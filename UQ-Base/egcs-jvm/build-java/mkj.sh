#!/opt/local/gnu/bin/bash
#
# Note, you will have to set the path to cc1 below to your 
# JVM targeted cc proper.
#

	echo Building $1....
        gcc -E -DVERSION=\"java\" $1.c -o $1.i
        /var/tmp/bin_trans/gcc/cc1 -O8 -fno-function-cse $1.i -o $1.j
	if [ -f global.s ] ; then
          cat global.s >> gglobal.s
	fi
