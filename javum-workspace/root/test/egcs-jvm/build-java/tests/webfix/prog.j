.class public Webfix
.super TranslatedFile

.method public <init>()V
        .limit stack 5
        .limit locals 16

        aload_0
        invokenonvirtual TranslatedFile/<init>()V
        return
.end method

.method public static main([Ljava/lang/String;)V
        .limit stack 5
        .limit locals 16 
        
        new Webfix
        dup
        invokespecial Webfix/<init>()V
        aload_0  
        invokevirtual Webfix/Realmain([Ljava/lang/String;)V
        return 
.end method


.method name()Ljava/lang/String;
	.limit locals 2
	.limit stack 3

	ldc	"Webfix"
	areturn
.end method

.method datanames()[Ljava/lang/String;
	.limit locals 2
	.limit stack 3

	iconst_0
	anewarray	java/lang/String
	areturn
.end method

.method datasizes()[I
	.limit locals 2
	.limit stack 3

	iconst_0
	newarray	 int
	areturn
.end method

.method datastarts()[I
	.limit locals 2
	.limit stack 3

	iconst_0
	newarray	int
	areturn
.end method


.method public _permissions(I)I
	.limit stack 9
	.limit locals 17

	iconst_0
	istore 14

	sipush 4116
	istore 12

	aload_0
	getfield Webfix/memory [I
	iload 12
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 16
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	iaload
	ior
	ior
	ior
	istore 13

	iload 13
	bipush 2
	ishl
	istore 9

	iload 9
	iload 13
	iadd
	istore 9

	iload 9
	bipush 1
	ishl
	istore 9

	iload 9
	sipush 4096
	iadd
	istore 10

	bipush 1
	iload 13
	isub
	istore 13

	aload_0
	getfield Webfix/memory [I
	iload 12
	dup2
	iload 13
	bipush 24
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	dup2
	iload 13
	bipush 16
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	dup2
	iload 13
	bipush 8
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	iload 13
	sipush 255
	iand
	iastore

	sipush 256
	istore 9

	iload 1
	iload 9
	iand
	istore 9

	iload 9
	ifeq L28

	aload_0
	getfield Webfix/memory [I
	iload 10
	bipush 114
	sipush 255
	iand
	iastore

	goto L29
L28:
	aload_0
	getfield Webfix/memory [I
	iload 10
	bipush 45
	sipush 255
	iand
	iastore

L29:
	iload 10
	bipush 1
	iadd
	istore 13

	sipush 128
	istore 9

	iload 1
	iload 9
	iand
	istore 9

	iload 9
	ifeq L30

	aload_0
	getfield Webfix/memory [I
	iload 13
	bipush 119
	sipush 255
	iand
	iastore

	goto L31
L30:
	aload_0
	getfield Webfix/memory [I
	iload 13
	bipush 45
	sipush 255
	iand
	iastore

L31:
	iload 10
	bipush 2
	iadd
	istore 13

	bipush 64
	istore 9

	iload 1
	iload 9
	iand
	istore 9

	iload 9
	ifeq L32

	aload_0
	getfield Webfix/memory [I
	iload 13
	bipush 120
	sipush 255
	iand
	iastore

	goto L33
L32:
	aload_0
	getfield Webfix/memory [I
	iload 13
	bipush 45
	sipush 255
	iand
	iastore

L33:
	iload 10
	bipush 3
	iadd
	istore 13

	bipush 32
	istore 9

	iload 1
	iload 9
	iand
	istore 9

	iload 9
	ifeq L34

	aload_0
	getfield Webfix/memory [I
	iload 13
	bipush 114
	sipush 255
	iand
	iastore

	goto L35
L34:
	aload_0
	getfield Webfix/memory [I
	iload 13
	bipush 45
	sipush 255
	iand
	iastore

L35:
	iload 10
	bipush 4
	iadd
	istore 13

	bipush 16
	istore 9

	iload 1
	iload 9
	iand
	istore 9

	iload 9
	ifeq L36

	aload_0
	getfield Webfix/memory [I
	iload 13
	bipush 119
	sipush 255
	iand
	iastore

	goto L37
L36:
	aload_0
	getfield Webfix/memory [I
	iload 13
	bipush 45
	sipush 255
	iand
	iastore

L37:
	iload 10
	bipush 5
	iadd
	istore 13

	bipush 8
	istore 9

	iload 1
	iload 9
	iand
	istore 9

	iload 9
	ifeq L38

	aload_0
	getfield Webfix/memory [I
	iload 13
	bipush 120
	sipush 255
	iand
	iastore

	goto L39
L38:
	aload_0
	getfield Webfix/memory [I
	iload 13
	bipush 45
	sipush 255
	iand
	iastore

L39:
	iload 10
	bipush 6
	iadd
	istore 13

	bipush 4
	istore 9

	iload 1
	iload 9
	iand
	istore 9

	iload 9
	ifeq L40

	aload_0
	getfield Webfix/memory [I
	iload 13
	bipush 114
	sipush 255
	iand
	iastore

	goto L41
L40:
	aload_0
	getfield Webfix/memory [I
	iload 13
	bipush 45
	sipush 255
	iand
	iastore

L41:
	iload 10
	bipush 7
	iadd
	istore 13

	bipush 2
	istore 9

	iload 1
	iload 9
	iand
	istore 9

	iload 9
	ifeq L42

	aload_0
	getfield Webfix/memory [I
	iload 13
	bipush 119
	sipush 255
	iand
	iastore

	goto L43
L42:
	aload_0
	getfield Webfix/memory [I
	iload 13
	bipush 45
	sipush 255
	iand
	iastore

L43:
	iload 10
	bipush 8
	iadd
	istore 13

	bipush 1
	istore 9

	iload 1
	iload 9
	iand
	istore 9

	iload 9
	ifeq L44

	aload_0
	getfield Webfix/memory [I
	iload 13
	bipush 120
	sipush 255
	iand
	iastore

	goto L45
L44:
	aload_0
	getfield Webfix/memory [I
	iload 13
	bipush 45
	sipush 255
	iand
	iastore

L45:
	aload_0
	getfield Webfix/memory [I
	iload 10
	ldc 9
	iadd
	bipush 0
	sipush 255
	iand
	iastore

	iload 10
	ireturn
.end method

.method public _main(II)V
	.limit stack 9
	.limit locals 17

	iconst_0
	istore 14

	bipush 0
	istore 6

	sipush 5142
	istore 5

	iload 5
	istore 11

	iload 1
	bipush 1
	if_icmple L47

	aload_0
	getfield Webfix/memory [I
	iload 2
	ldc 4
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 16
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	iaload
	ior
	ior
	ior
	istore 2

	aload_0
	getfield Webfix/memory [I
	iload 2
	iaload
	istore 3

	iload 3
	bipush 24
	ishl
	bipush 24
	ishr
	istore 9

	iload 9
	ifeq L47

	iload 2
	istore 11

L47:
	sipush 4118
	istore 10

	aload_0
	iload 10
	iload 11
	invokevirtual Webfix/_strcpy(II)I
	istore 10

	sipush 4118
	istore 10

	aload_0
	iload 10
	invokevirtual Webfix/_strlen(I)I
	istore 10

	iload 10
	sipush 4118
	iadd
	istore 7

	sipush 4118
	istore 10

	aload_0
	iload 10
	invokevirtual Webfix/_strlen(I)I
	istore 10

	iload 10
	bipush -1
	iadd
	istore 10

	aload_0
	getfield Webfix/memory [I
	iload 10
	sipush 4118
	iadd
	iaload
	istore 10

	iload 10
	bipush 24
	ishl
	bipush 24
	ishr
	istore 9

	iload 9
	bipush 47
	if_icmpeq L49

	aload_0
	getfield Webfix/memory [I
	iload 7
	bipush 47
	sipush 255
	iand
	iastore

	iload 7
	bipush 1
	iadd
	istore 7

	aload_0
	getfield Webfix/memory [I
	iload 7
	bipush 0
	sipush 255
	iand
	iastore

L49:
	sipush 4118
	istore 10

	aload_0
	iload 10
	invokevirtual Webfix/_opendir(I)I
	istore 10

	aload_0
	getfield Webfix/memory [I
	iload 14
	ldc 48
	iadd
	dup2
	iload 10
	bipush 24
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	dup2
	iload 10
	bipush 16
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	dup2
	iload 10
	bipush 8
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	iload 10
	sipush 255
	iand
	iastore

	iload 10
	ifne L51

	aload_0
	getfield Webfix/memory [I
	symrefWebfix_stderrend
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 16
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	iaload
	ior
	ior
	ior
	istore 10

	sipush 5144
	istore 11

	sipush 4118
	istore 12

	aload_0
	iload 10
	iload 11
	iload 12
	invokevirtual Webfix/_fprintf(III)I
	istore 10

	bipush 1
	istore 10

	aload_0
	iload 10
	invokevirtual Webfix/_exit(I)I
	istore 10

L115:
	aload_0
	getfield Webfix/memory [I
	symrefWebfix_stderrend
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 16
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	iaload
	ior
	ior
	ior
	istore 10

	sipush 5180
	istore 11

	aload_0
	iload 10
	iload 11
	invokevirtual Webfix/_fprintf(II)I
	istore 10

	goto L46
L117:
	aload_0
	getfield Webfix/memory [I
	symrefWebfix_stderrend
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 16
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	iaload
	ior
	ior
	ior
	istore 10

	sipush 6272
	istore 11

	sipush 4118
	istore 12

	aload_0
	iload 10
	iload 11
	iload 12
	invokevirtual Webfix/_fprintf(III)I
	istore 10

	goto L46
L53:
	iload 10
	bipush 11
	iadd
	istore 2

	iload 2
	istore 10

	iload 5
	istore 11

	aload_0
	iload 10
	iload 11
	invokevirtual Webfix/_strcmp(II)I
	istore 10

	iload 10
	ifeq L51

	iload 2
	istore 10

	sipush 5177
	istore 11

	aload_0
	iload 10
	iload 11
	invokevirtual Webfix/_strcmp(II)I
	istore 10

	iload 10
	ifeq L51

	iload 2
	istore 10

	aload_0
	iload 10
	invokevirtual Webfix/_strlen(I)I
	istore 10

	iload 10
	bipush 9
	iadd
	istore 10

	aload_0
	iload 10
	invokevirtual Webfix/_malloc(I)I
	istore 10

	iload 10
	istore 1

	iload 1
	ifeq L115

	iload 7
	istore 10

	iload 2
	istore 11

	aload_0
	iload 10
	iload 11
	invokevirtual Webfix/_strcpy(II)I
	istore 10

	bipush 3
	istore 10

	sipush 4118
	istore 11

	iload 14
	bipush 56
	iadd
	istore 12

	aload_0
	iload 10
	iload 11
	iload 12
	invokevirtual Webfix/___xstat(III)I
	istore 10

	aload_0
	getfield Webfix/memory [I
	iload 14
	ldc 70
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 16
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	iaload
	ior
	ior
	ior
	istore 9

	ldc 61440
	istore 13

	iload 9
	iload 13
	iand
	istore 9

	iload 9
	ldc 32768
	if_icmpne L51

	iload 1
	bipush 8
	iadd
	istore 12

	iload 12
	istore 10

	iload 2
	istore 11

	aload_0
	iload 10
	iload 11
	invokevirtual Webfix/_strcpy(II)I
	istore 10

	aload_0
	getfield Webfix/memory [I
	iload 14
	ldc 70
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 16
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	iaload
	ior
	ior
	ior
	istore 9

	sipush 4095
	istore 13

	iload 9
	iload 13
	iand
	istore 9

	aload_0
	getfield Webfix/memory [I
	iload 1
	ldc 4
	iadd
	dup2
	iload 9
	bipush 24
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	dup2
	iload 9
	bipush 16
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	dup2
	iload 9
	bipush 8
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	iload 9
	sipush 255
	iand
	iastore

	iload 6
	ifne L58

	iload 1
	istore 6

	aload_0
	getfield Webfix/memory [I
	iload 6
	dup2
	bipush 0
	bipush 24
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	dup2
	bipush 0
	bipush 16
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	dup2
	bipush 0
	bipush 8
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	bipush 0
	sipush 255
	iand
	iastore

	goto L51
L58:
	iload 12
	istore 10

	iload 6
	bipush 8
	iadd
	istore 11

	aload_0
	iload 10
	iload 11
	invokevirtual Webfix/_strcmp(II)I
	istore 10

	iload 10
	ifge L60

	aload_0
	getfield Webfix/memory [I
	iload 1
	dup2
	iload 6
	bipush 24
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	dup2
	iload 6
	bipush 16
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	dup2
	iload 6
	bipush 8
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	iload 6
	sipush 255
	iand
	iastore

	iload 1
	istore 6

	goto L51
L60:
	iload 6
	istore 13

	aload_0
	getfield Webfix/memory [I
	iload 6
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 16
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	iaload
	ior
	ior
	ior
	istore 9

	iload 9
	ifeq L63

L65:
	iload 12
	istore 10

	aload_0
	getfield Webfix/memory [I
	iload 13
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 16
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	iaload
	ior
	ior
	ior
	istore 4

	iload 4
	bipush 8
	iadd
	istore 11

	aload_0
	iload 10
	iload 11
	invokevirtual Webfix/_strcmp(II)I
	istore 10

	iload 10
	iflt L63

	aload_0
	getfield Webfix/memory [I
	iload 13
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 16
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	iaload
	ior
	ior
	ior
	istore 13

	aload_0
	getfield Webfix/memory [I
	iload 13
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 16
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	iaload
	ior
	ior
	ior
	istore 9

	iload 9
	ifne L65

L63:
	aload_0
	getfield Webfix/memory [I
	iload 13
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 16
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	iaload
	ior
	ior
	ior
	istore 3

	aload_0
	getfield Webfix/memory [I
	iload 1
	dup2
	iload 3
	bipush 24
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	dup2
	iload 3
	bipush 16
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	dup2
	iload 3
	bipush 8
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	iload 3
	sipush 255
	iand
	iastore

	aload_0
	getfield Webfix/memory [I
	iload 13
	dup2
	iload 1
	bipush 24
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	dup2
	iload 1
	bipush 16
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	dup2
	iload 1
	bipush 8
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	iload 1
	sipush 255
	iand
	iastore

L51:
	aload_0
	getfield Webfix/memory [I
	iload 14
	ldc 48
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 16
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	iaload
	ior
	ior
	ior
	istore 10

	aload_0
	iload 10
	invokevirtual Webfix/_readdir(I)I
	istore 10

	iload 10
	ifne L53

	aload_0
	getfield Webfix/memory [I
	iload 14
	ldc 48
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 16
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	iaload
	ior
	ior
	ior
	istore 10

	aload_0
	iload 10
	invokevirtual Webfix/_closedir(I)I
	istore 10

	iload 6
	ifeq L46

	sipush 4118
	istore 16

L71:
	iload 6
	bipush 8
	iadd
	istore 8

	iload 7
	istore 10

	iload 8
	istore 11

	aload_0
	iload 10
	iload 11
	invokevirtual Webfix/_strcpy(II)I
	istore 10

	sipush 6233
	istore 10

	iload 16
	istore 11

	aload_0
	iload 10
	iload 11
	invokevirtual Webfix/_printf(II)I
	istore 10

	sipush 5209
	istore 12

	iload 16
	istore 13

L72:
	aload_0
	getfield Webfix/memory [I
	iload 13
	iaload
	istore 4

	iload 4
	bipush 24
	ishl
	bipush 24
	ishr
	istore 10

	aload_0
	iload 10
	invokevirtual Webfix/_tolower(I)I
	istore 10

	aload_0
	getfield Webfix/memory [I
	iload 12
	iload 10
	sipush 255
	iand
	iastore

	iload 12
	bipush 1
	iadd
	istore 12

	aload_0
	getfield Webfix/memory [I
	iload 13
	iaload
	istore 3

	iload 3
	bipush 24
	ishl
	bipush 24
	ishr
	istore 9

	iload 13
	bipush 1
	iadd
	istore 13

	iload 9
	ifne L72

	iload 7
	istore 5

	goto L118
L80:
	aload_0
	getfield Webfix/memory [I
	iload 5
	iaload
	istore 3

	iload 3
	bipush 24
	ishl
	bipush 24
	ishr
	istore 9

	iload 9
	bipush 46
	if_icmpeq L116

	iload 5
	bipush 1
	iadd
	istore 5

L118:
	aload_0
	getfield Webfix/memory [I
	iload 5
	iaload
	istore 4

	iload 4
	bipush 24
	ishl
	bipush 24
	ishr
	istore 9

	iload 9
	ifne L80

	iload 5
	istore 1

L82:
	iload 1
	istore 12

	sipush 6248
	istore 11

	goto L86
L87:
	aload_0
	getfield Webfix/memory [I
	iload 12
	iaload
	istore 3

	iload 3
	bipush 24
	ishl
	bipush 24
	ishr
	istore 9

	iload 9
	ifeq L90

	iload 12
	bipush 1
	iadd
	istore 12

	iload 11
	bipush 1
	iadd
	istore 11

L86:
	aload_0
	getfield Webfix/memory [I
	iload 12
	iaload
	istore 4

	iload 4
	bipush 24
	ishl
	bipush 24
	ishr
	istore 10

	aload_0
	iload 10
	invokevirtual Webfix/_toupper(I)I
	istore 10

	iload 10
	istore 13

	aload_0
	getfield Webfix/memory [I
	iload 11
	iaload
	istore 3

	iload 3
	bipush 24
	ishl
	bipush 24
	ishr
	istore 10

	aload_0
	iload 10
	invokevirtual Webfix/_toupper(I)I
	istore 10

	iload 13
	iload 10
	isub
	istore 13

	iload 13
	ifeq L87

L90:
	iload 13
	ifne L85

	sipush 5209
	sipush 4118
	isub
	istore 9

	iload 9
	iload 1
	iadd
	istore 9

	sipush 6252
	istore 13

	aload_0
	getfield Webfix/memory [I
	iload 13
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 16
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	iaload
	ior
	ior
	ior
	istore 4

	aload_0
	getfield Webfix/memory [I
	iload 9
	dup2
	iload 4
	bipush 24
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	dup2
	iload 4
	bipush 16
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	dup2
	iload 4
	bipush 8
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	iload 4
	sipush 255
	iand
	iastore

	aload_0
	getfield Webfix/memory [I
	iload 13
	ldc 4
	iadd
	iaload
	istore 13

	aload_0
	getfield Webfix/memory [I
	iload 9
	ldc 4
	iadd
	iload 13
	sipush 255
	iand
	iastore

L85:
	iload 8
	istore 12

	aload_0
	getfield Webfix/memory [I
	iload 12
	iaload
	istore 3

	iload 3
	bipush 24
	ishl
	bipush 24
	ishr
	istore 9

	iload 9
	ifeq L93

	aload_0
	invokevirtual Webfix/___ctype_b_loc()I
	istore 10

L95:
	aload_0
	getfield Webfix/memory [I
	iload 12
	iaload
	istore 4

	iload 4
	bipush 24
	ishl
	bipush 24
	ishr
	istore 13

	iload 13
	bipush 1
	ishl
	istore 13

	sipush 256
	istore 9

	aload_0
	getfield Webfix/memory [I
	iload 13
	aload_0
	getfield Webfix/memory [I
	iload 10
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 16
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	iaload
	ior
	ior
	ior
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	iaload
	ior
	istore 13

	iload 13
	iload 9
	iand
	istore 9

	iload 9
	ldc 65536
	iand
	istore 9

	iload 9
	ifeq L94

	aload_0
	getfield Webfix/memory [I
	iload 14
	ldc 52
	iadd
	dup2
	iload 6
	bipush 24
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	dup2
	iload 6
	bipush 16
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	dup2
	iload 6
	bipush 8
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	iload 6
	sipush 255
	iand
	iastore

	aload_0
	getfield Webfix/memory [I
	iload 6
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 16
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	iaload
	ior
	ior
	ior
	istore 2

	iload 2
	ifeq L93

	sipush 5209
	sipush 4118
	isub
	istore 3

	iload 3
	iload 7
	iadd
	istore 3

	aload_0
	getfield Webfix/memory [I
	iload 14
	ldc 48
	iadd
	dup2
	iload 3
	bipush 24
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	dup2
	iload 3
	bipush 16
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	dup2
	iload 3
	bipush 8
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	iload 3
	sipush 255
	iand
	iastore

L99:
	iload 2
	bipush 8
	iadd
	istore 11

	aload_0
	getfield Webfix/memory [I
	iload 14
	ldc 48
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 16
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	iaload
	ior
	ior
	ior
	istore 12

	iload 11
	istore 1

	goto L101
L102:
	aload_0
	getfield Webfix/memory [I
	iload 12
	iaload
	istore 4

	iload 4
	bipush 24
	ishl
	bipush 24
	ishr
	istore 9

	iload 9
	ifeq L105

	iload 12
	bipush 1
	iadd
	istore 12

	iload 1
	bipush 1
	iadd
	istore 1

L101:
	aload_0
	getfield Webfix/memory [I
	iload 12
	iaload
	istore 3

	iload 3
	bipush 24
	ishl
	bipush 24
	ishr
	istore 10

	aload_0
	iload 10
	invokevirtual Webfix/_toupper(I)I
	istore 10

	iload 10
	istore 13

	aload_0
	getfield Webfix/memory [I
	iload 1
	iaload
	istore 4

	iload 4
	bipush 24
	ishl
	bipush 24
	ishr
	istore 10

	aload_0
	iload 10
	invokevirtual Webfix/_toupper(I)I
	istore 10

	iload 13
	iload 10
	isub
	istore 13

	iload 13
	ifeq L102

L105:
	iload 13
	ifne L100

	aload_0
	getfield Webfix/memory [I
	iload 2
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 16
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	iaload
	ior
	ior
	ior
	istore 4

	aload_0
	getfield Webfix/memory [I
	iload 14
	ldc 52
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 16
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	iaload
	ior
	ior
	ior
	istore 3

	aload_0
	getfield Webfix/memory [I
	iload 3
	dup2
	iload 4
	bipush 24
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	dup2
	iload 4
	bipush 16
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	dup2
	iload 4
	bipush 8
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	iload 4
	sipush 255
	iand
	iastore

	iload 7
	istore 10

	aload_0
	iload 10
	iload 11
	invokevirtual Webfix/_strcpy(II)I
	istore 10

	sipush 6257
	istore 10

	iload 16
	istore 11

	aload_0
	iload 10
	iload 11
	invokevirtual Webfix/_printf(II)I
	istore 10

	iload 16
	istore 10

	aload_0
	iload 10
	invokevirtual Webfix/_unlink(I)I
	istore 10

	iload 10
	ifne L117

	iload 7
	istore 10

	iload 8
	istore 11

	aload_0
	iload 10
	iload 11
	invokevirtual Webfix/_strcpy(II)I
	istore 10

	iload 2
	istore 10

	aload_0
	iload 10
	invokevirtual Webfix/_free(I)I
	istore 10

	goto L93
L100:
	aload_0
	getfield Webfix/memory [I
	iload 14
	ldc 52
	iadd
	dup2
	iload 2
	bipush 24
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	dup2
	iload 2
	bipush 16
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	dup2
	iload 2
	bipush 8
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	iload 2
	sipush 255
	iand
	iastore

	aload_0
	getfield Webfix/memory [I
	iload 2
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 16
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	iaload
	ior
	ior
	ior
	istore 2

	iload 2
	ifne L99

	goto L93
L94:
	iload 12
	bipush 1
	iadd
	istore 12

	aload_0
	getfield Webfix/memory [I
	iload 12
	iaload
	istore 3

	iload 3
	bipush 24
	ishl
	bipush 24
	ishr
	istore 9

	iload 9
	ifne L95

L93:
	sipush 5209
	istore 10

	sipush 4118
	istore 11

	aload_0
	iload 10
	iload 11
	invokevirtual Webfix/_strcmp(II)I
	istore 10

	iload 10
	ifeq L110

	sipush 6302
	istore 10

	sipush 5209
	istore 12

	aload_0
	iload 10
	iload 11
	iload 12
	invokevirtual Webfix/_printf(III)I
	istore 10

	iload 11
	istore 10

	iload 12
	istore 11

	aload_0
	iload 10
	iload 11
	invokevirtual Webfix/_rename(II)I
	istore 10

	iload 10
	ifeq L110

	aload_0
	getfield Webfix/memory [I
	symrefWebfix_stderrend
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 16
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	iaload
	ior
	ior
	ior
	istore 10

	sipush 6323
	istore 11

	sipush 4118
	istore 12

	sipush 5209
	istore 13

	aload_0
	iload 10
	iload 11
	iload 12
	iload 13
	invokevirtual Webfix/_fprintf(IIII)I
	istore 10

	bipush 1
	istore 10

	aload_0
	iload 10
	invokevirtual Webfix/_exit(I)I
	istore 10

L116:
	iload 5
	bipush 1
	iadd
	istore 1

	goto L82
L110:
	iload 6
	bipush 4
	iadd
	istore 13

	aload_0
	getfield Webfix/memory [I
	iload 13
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 16
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	iaload
	ior
	ior
	ior
	istore 10

	sipush 511
	istore 9

	iload 10
	iload 9
	iand
	istore 9

	iload 9
	sipush 493
	if_icmpeq L112

	aload_0
	iload 10
	invokevirtual Webfix/_permissions(I)I
	istore 10

	iload 10
	istore 11

	sipush 493
	istore 10

	aload_0
	iload 10
	invokevirtual Webfix/_permissions(I)I
	istore 10

	iload 10
	istore 12

	sipush 6358
	istore 10

	aload_0
	iload 10
	iload 11
	iload 12
	invokevirtual Webfix/_printf(III)I
	istore 10

	aload_0
	getfield Webfix/memory [I
	iload 13
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 16
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	iaload
	ior
	ior
	ior
	istore 11

	sipush 3584
	istore 9

	iload 11
	iload 9
	iand
	istore 11

	sipush 493
	istore 9

	sipush 5209
	istore 10

	iload 11
	iload 9
	ior
	istore 11

	aload_0
	iload 10
	iload 11
	invokevirtual Webfix/_chmod(II)I
	istore 10

	iload 10
	ifeq L112

	aload_0
	getfield Webfix/memory [I
	symrefWebfix_stderrend
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 16
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	iaload
	ior
	ior
	ior
	istore 10

	sipush 6396
	istore 11

	sipush 5209
	istore 12

	aload_0
	iload 10
	iload 11
	iload 12
	invokevirtual Webfix/_fprintf(III)I
	istore 10

	bipush 1
	istore 10

	aload_0
	iload 10
	invokevirtual Webfix/_exit(I)I
	istore 10

L112:
	aload_0
	getfield Webfix/memory [I
	iload 6
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 16
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	dup2
	iaload
	bipush 8
	ishl
	dup_x2
	pop
	iconst_1
	iadd
	iaload
	ior
	ior
	ior
	istore 13

	iload 6
	istore 10

	aload_0
	iload 10
	invokevirtual Webfix/_free(I)I
	istore 10

	iload 13
	istore 6

	iload 6
	ifne L71

L46:
	return
.end method

.method globalsize()I
.limit locals 2
.limit stack 3
sipush 2342
ireturn
.end method
