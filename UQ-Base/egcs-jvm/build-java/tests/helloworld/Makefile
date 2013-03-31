# Make sure jasmin is in your path, and have you set the path in mkj.sh ?

PROG=hello
CLASS=Hello
BUILD-JAVA=../..

java: clean ${PROG}.j 
	gas gglobal.s -o global.o
	gobjcopy global.o global -O binary -R .data -R .bss
	cat ${BUILD-JAVA}/readData.j ${PROG}.j > prog.j
	echo '.method globalsize()I' >> prog.j
	echo .limit locals 2 >> prog.j
	echo .limit stack 3 >> prog.j
	echo sipush `ls -l global | gawk '{print $$5}'` >> prog.j
	echo ireturn >> prog.j
	echo .end method >> prog.j
	echo '#!/bin/sh' > fixsyms
	gobjdump --sym global.o | tail +8 | ${BUILD-JAVA}/rep prog.j >> fixsyms
	chmod 755 fixsyms
	./fixsyms
	echo '#!/bin/sh' > fixsyms
	gobjdump --sym global.o | tail +8 | ${BUILD-JAVA}/rep gglobal.s >> fixsyms
	chmod 755 fixsyms
	./fixsyms
	sed s/sipush// gglobal.s > gglobal.s.tmp
	mv -f gglobal.s.tmp gglobal.s
	gas gglobal.s -o global.o
	gobjcopy global.o global -O binary -R .data -R .bss	
	sed s/Prog/${CLASS}/ prog.j > prog.j.tmp
	mv -f prog.j.tmp prog.j
	jasmin prog.j

${PROG}.j: ${PROG}.c
	${BUILD-JAVA}/mkj.sh ${PROG}

clean:
	rm -f gglobal.s global.s global.o gglobal.o ${PROG}.j ${PROG}.i \
	prog.j global fixsyms ${CLASS}.class


