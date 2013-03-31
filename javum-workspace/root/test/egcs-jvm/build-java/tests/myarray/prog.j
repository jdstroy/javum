.class public Myarray
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
        
        new Myarray
        dup
        invokespecial Myarray/<init>()V
        aload_0  
        invokevirtual Myarray/Realmain([Ljava/lang/String;)V
        return 
.end method


.method name()Ljava/lang/String;
	.limit locals 2
	.limit stack 3

	ldc	"Myarray"
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

.method public _main(II)V
	.limit stack 9
	.limit locals 17

	iconst_0
	istore 14

	bipush 0
	istore 13

	iload 14
	bipush 16
	iadd
	istore 11

	iload 11
	istore 10

	bipush 0
	istore 12

L5:
	iload 13
	bipush 31
	ishr
	iconst_1
	bipush 31
	ishl
	iconst_1
	isub
	iand
	istore 9

	iload 13
	iload 9
	iadd
	istore 9

	iload 9
	bipush 1
	ishr
	istore 9

	iload 12
	iload 9
	isub
	istore 9

	aload_0
	getfield Myarray/memory [I
	iload 10
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

	iload 10
	bipush 4
	iadd
	istore 10

	iload 12
	bipush 9
	iadd
	istore 12

	iload 13
	bipush 1
	iadd
	istore 13

	iload 13
	bipush 64
	if_icmple L5

	bipush 0
	istore 13

	sipush 4096
	istore 1

	iload 11
	istore 12

L10:
	iload 1
	istore 10

	aload_0
	getfield Myarray/memory [I
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
	istore 11

	aload_0
	iload 10
	iload 11
	invokevirtual Myarray/_printf(II)I
	istore 10

	iload 12
	bipush 4
	iadd
	istore 12

	iload 13
	bipush 1
	iadd
	istore 13

	iload 13
	bipush 64
	if_icmple L10

	sipush 4100
	istore 10

	aload_0
	iload 10
	invokevirtual Myarray/_printf(I)I
	istore 10

	return
.end method

.method globalsize()I
.limit locals 2
.limit stack 3
sipush 6
ireturn
.end method
