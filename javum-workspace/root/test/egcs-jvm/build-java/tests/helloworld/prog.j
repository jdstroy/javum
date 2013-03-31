.class public Hello
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
        
        new Hello
        dup
        invokespecial Hello/<init>()V
        aload_0  
        invokevirtual Hello/Realmain([Ljava/lang/String;)V
        return 
.end method


.method name()Ljava/lang/String;
	.limit locals 2
	.limit stack 3

	ldc	"Hello"
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

	sipush 4096
	istore 10

	aload_0
	iload 10
	invokevirtual Hello/_printf(I)I
	istore 10

	return
.end method

.method globalsize()I
.limit locals 2
.limit stack 3
sipush 14
ireturn
.end method
