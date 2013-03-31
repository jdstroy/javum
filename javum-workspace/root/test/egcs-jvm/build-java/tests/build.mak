# Common elements for Makefiles
# To build, use Makefile in individual examples directories

# Make sure jasmin is in your path, and have you set the path in mkj.sh ?

#AS=gas
AS=as

#OBJCOPY=gobjcopy
OBJCOPY=objcopy

#OBJDUMP=gobjdump
OBJDUMP=objdump

BUILD-JAVA=../..

PROGIS=${patsubst %,%.i,${PROGS}}
PROGJS=${patsubst %,%.j,${PROGS}}

java: clean ${PROGJS}
	sed -e s/uaword/word/ <gglobal.s >gglobalw.s
	${AS} gglobalw.s -o global.o
	${OBJCOPY} global.o global -O binary -R .data -R .bss
	cat ${BUILD-JAVA}/readData.j ${PROGJS} > prog.j
	echo '.method globalsize()I' >> prog.j
	echo .limit locals 2 >> prog.j
	echo .limit stack 3 >> prog.j
	echo sipush `ls -l global | gawk '{print $$5}'` >> prog.j
	echo ireturn >> prog.j
	echo .end method >> prog.j
	echo '#!/bin/sh' > fixsyms
	${OBJDUMP} --sym global.o | tail +8 | ${BUILD-JAVA}/rep prog.j >> fixsyms
	chmod 755 fixsyms
	./fixsyms
	echo '#!/bin/sh' > fixsyms
	${OBJDUMP} --sym global.o | tail +8 | ${BUILD-JAVA}/rep gglobal.s >> fixsyms
	chmod 755 fixsyms
	./fixsyms
	sed -e s/uaword/word/ -e s/sipush// gglobal.s > gglobal.s.tmp
	mv -f gglobal.s.tmp gglobal.s
	${AS} gglobal.s -o global.o
	${OBJCOPY} global.o global -O binary -R .data -R .bss	
	sed s/Prog/${CLASS}/ prog.j > prog.j.tmp
	mv -f prog.j.tmp prog.j
	jasmin prog.j

%.j: %.c
	${BUILD-JAVA}/mkj.sh ${patsubst %.c,%,$<}

clean:
	rm -f gglobal.s gglobalw.s global.s global.o gglobal.o \
	${PROGJS} ${PROGIS} \
	prog.j global fixsyms ${CLASS}.class *~
