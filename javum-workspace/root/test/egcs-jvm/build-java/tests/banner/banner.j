

.method public _main(II)V
	.limit stack 9
	.limit locals 17

	iconst_0
	istore 14

	iload 1
	istore 8

	aload_0
	getfield Prog/memory [I
	iload 14
	ldc 56
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

	iload 2
	istore 3

	iload 3
	bipush 4
	iadd
	istore 3

	aload_0
	getfield Prog/memory [I
	iload 14
	ldc 56
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

	iload 8
	bipush -1
	iadd
	istore 8

	iload 8
	ifeq L3

	iload 14
	bipush 60
	iadd
	istore 6

L5:
	aload_0
	getfield Prog/memory [I
	iload 14
	ldc 56
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
	istore 5

	aload_0
	getfield Prog/memory [I
	iload 5
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
	invokevirtual Prog/_strlen(I)I
	istore 10

	aload_0
	getfield Prog/memory [I
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
	bipush 10
	if_icmple L6

	aload_0
	getfield Prog/memory [I
	iload 14
	ldc 48
	iadd
	dup2
	bipush 10
	bipush 24
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	dup2
	bipush 10
	bipush 16
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	dup2
	bipush 10
	bipush 8
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	bipush 10
	sipush 255
	iand
	iastore

L6:
	bipush 0
	istore 4

	aload_0
	getfield Prog/memory [I
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
	istore 7

	iload 7
	bipush 3
	ishl
	istore 16

L10:
	bipush 0
	istore 11

	aload_0
	getfield Prog/memory [I
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
	istore 3

	iload 11
	iload 3
	if_icmpge L12

	aload_0
	getfield Prog/memory [I
	iload 14
	ldc 52
	iadd
	dup2
	bipush 7
	bipush 24
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	dup2
	bipush 7
	bipush 16
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	dup2
	bipush 7
	bipush 8
	ishr
	sipush 255
	iand
	iastore
	iconst_1
	iadd
	bipush 7
	sipush 255
	iand
	iastore

L14:
	aload_0
	getfield Prog/memory [I
	iload 14
	ldc 56
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
	istore 5

	aload_0
	getfield Prog/memory [I
	iload 5
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
	istore 7

	aload_0
	getfield Prog/memory [I
	iload 7
	iload 11
	iadd
	iaload
	istore 5

	iload 5
	bipush 24
	ishl
	bipush 24
	ishr
	istore 9

	iload 9
	bipush -32
	iadd
	istore 10

	iload 10
	ifge L15

	bipush 0
	istore 10

L15:
	bipush 0
	istore 1

	iload 11
	bipush 3
	ishl
	istore 9

	iload 9
	iload 6
	iadd
	istore 2

L19:
	iload 10
	istore 12

	iload 10
	ifge L20

	iload 10
	bipush 7
	iadd
	istore 12

L20:
	iload 12
	bipush 3
	ishr
	istore 12

	iload 12
	bipush 3
	ishl
	istore 13

	iload 13
	iload 12
	isub
	istore 12

	iload 12
	iload 4
	iadd
	istore 12

	iload 10
	iload 13
	isub
	istore 13

	iload 13
	bipush 3
	ishl
	istore 9

	iload 9
	iload 13
	isub
	istore 9

	iload 9
	iload 1
	iadd
	istore 9

	symrefBanner_glyphsend
	istore 7

	aload_0
	getfield Prog/memory [I
	iload 12
	ldc 4
	imul
	iload 7
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

	iload 12
	iload 9
	iadd
	istore 9

	aload_0
	getfield Prog/memory [I
	iload 9
	iaload
	istore 9

	aload_0
	getfield Prog/memory [I
	iload 2
	iload 9
	sipush 255
	iand
	iastore

	iload 2
	bipush 1
	iadd
	istore 2

	iload 1
	bipush 1
	iadd
	istore 1

	iload 1
	bipush 6
	if_icmple L19

	aload_0
	getfield Prog/memory [I
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
	getfield Prog/memory [I
	iload 6
	iload 3
	iadd
	bipush 32
	sipush 255
	iand
	iastore

	iload 3
	bipush 8
	iadd
	istore 3

	aload_0
	getfield Prog/memory [I
	iload 14
	ldc 52
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

	iload 11
	bipush 1
	iadd
	istore 11

	aload_0
	getfield Prog/memory [I
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
	istore 5

	iload 11
	iload 5
	if_icmplt L14

L12:
	iload 16
	bipush -1
	iadd
	istore 11

	iload 11
	iflt L25

	iload 6
	istore 12

L27:
	iload 12
	iload 11
	iadd
	istore 13

	aload_0
	getfield Prog/memory [I
	iload 13
	iaload
	istore 7

	iload 7
	bipush 24
	ishl
	bipush 24
	ishr
	istore 9

	iload 9
	bipush 32
	if_icmpne L25

	aload_0
	getfield Prog/memory [I
	iload 13
	bipush 0
	sipush 255
	iand
	iastore

	iload 11
	bipush -1
	iadd
	istore 11

	iload 11
	ifge L27

L25:
	iload 6
	istore 10

	aload_0
	iload 10
	invokevirtual Prog/_puts(I)I
	istore 10

	iload 4
	bipush 1
	iadd
	istore 4

	iload 4
	bipush 6
	if_icmple L10

	symrefBannerLC83end
	istore 10

	aload_0
	iload 10
	invokevirtual Prog/_puts(I)I
	istore 10

	aload_0
	getfield Prog/memory [I
	iload 14
	ldc 56
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

	iload 3
	bipush 4
	iadd
	istore 3

	aload_0
	getfield Prog/memory [I
	iload 14
	ldc 56
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

	iload 8
	bipush -1
	iadd
	istore 8

	iload 8
	ifne L5

L3:
	return
.end method

