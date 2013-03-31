
.method public _main(II)V
	.limit stack 9
	.limit locals 17

	iconst_0
	istore 14

	aload_0
	invokevirtual Prog/_blah()I
	istore 10

	iload 10
	istore 11

	symrefFile1LC0end
	istore 10

	aload_0
	iload 10
	iload 11
	invokevirtual Prog/_printf(II)I
	istore 10

	return
.end method

