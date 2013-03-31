.class public Multifile
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
        
        new Multifile
        dup
        invokespecial Multifile/<init>()V
        aload_0  
        invokevirtual Multifile/Realmain([Ljava/lang/String;)V
        return 
.end method


.method name()Ljava/lang/String;
	.limit locals 2
	.limit stack 3

	ldc	"Multifile"
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

	aload_0
	invokevirtual Multifile/_blah()I
	istore 10

	iload 10
	istore 11

	sipush 4096
	istore 10

	aload_0
	iload 10
	iload 11
	invokevirtual Multifile/_printf(II)I
	istore 10

	return
.end method


.method public _blah()I
	.limit stack 9
	.limit locals 17

	iconst_0
	istore 14

	sipush 4105
	istore 10

	iload 10
	ireturn
.end method

.method globalsize()I
.limit locals 2
.limit stack 3
sipush 15
ireturn
.end method
