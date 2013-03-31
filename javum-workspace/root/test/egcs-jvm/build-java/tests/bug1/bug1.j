


.method public _main(II)V
	.limit stack 9
	.limit locals 17

	iconst_0
	istore 14

	symrefBug1LC1end
	istore 10

	aload_0
	iload 10
	invokevirtual Prog/_printf(I)I
	istore 10

	aload_0
	getfield Prog/memory [I
	symrefBug1_gend
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
	getfield Prog/memory [I
	iload 9
	iaload
	istore 9

	aload_0
	getfield Prog/memory [I
	iload 14
	ldc 1
	iadd
	iload 9
	sipush 255
	iand
	iastore

	symrefBug1LC2end
	istore 10

	aload_0
	iload 10
	invokevirtual Prog/_printf(I)I
	istore 10

	return
.end method

