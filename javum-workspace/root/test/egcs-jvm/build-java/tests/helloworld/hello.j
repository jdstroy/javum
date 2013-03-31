
.method public _main(II)V
	.limit stack 9
	.limit locals 17

	iconst_0
	istore 14

	symrefHelloLC0end
	istore 10

	aload_0
	iload 10
	invokevirtual Prog/_printf(I)I
	istore 10

	return
.end method

