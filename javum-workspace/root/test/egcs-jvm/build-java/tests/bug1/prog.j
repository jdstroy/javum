.class public Bug1
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
        
        new Bug1
        dup
        invokespecial Bug1/<init>()V
        aload_0  
        invokevirtual Bug1/Realmain([Ljava/lang/String;)V
        return 
.end method


.method name()Ljava/lang/String;
	.limit locals 2
	.limit stack 3

	ldc	"Bug1"
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

	sipush 4099
	istore 10

	aload_0
	iload 10
	invokevirtual Bug1/_printf(I)I
	istore 10

	aload_0
	getfield Bug1/memory [I
	sipush 4097
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

	aload_0
	getfield Bug1/memory [I
	iload 9
	iaload
	istore 9

	aload_0
	getfield Bug1/memory [I
	iload 14
	ldc 1
	iadd
	iload 9
	sipush 255
	iand
	iastore

	sipush 4099
	istore 10

	aload_0
	iload 10
	invokevirtual Bug1/_printf(I)I
	istore 10

	return
.end method

.method globalsize()I
.limit locals 2
.limit stack 3
sipush 13
ireturn
.end method
