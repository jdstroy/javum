.class public Switch
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
        
        new Switch
        dup
        invokespecial Switch/<init>()V
        aload_0  
        invokevirtual Switch/Realmain([Ljava/lang/String;)V
        return 
.end method


.method name()Ljava/lang/String;
	.limit locals 2
	.limit stack 3

	ldc	"Switch"
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

	iload 14
	bipush 4
	iadd
	istore 11

	aload_0
	iload 10
	iload 11
	invokevirtual Switch/_scanf(II)I
	istore 10

	aload_0
	getfield Switch/memory [I
	iload 14
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
	istore 9

	iload 9
	sipush 481
	if_icmpeq L33

	iload 9
	sipush 481
	if_icmpgt L105

	iload 9
	sipush 214
	if_icmpeq L64

	iload 9
	sipush 214
	if_icmpgt L106

	iload 9
	bipush 82
	if_icmpeq L54

	iload 9
	bipush 82
	if_icmpgt L107

	iload 9
	bipush 33
	if_icmpeq L10

	iload 9
	bipush 33
	if_icmpgt L108

	iload 9
	bipush 23
	if_icmpeq L16

	iload 9
	bipush 23
	if_icmpgt L109

	iload 9
	ifeq L65

	iload 9
	bipush 16
	if_icmpeq L75

	goto L2
L109:
	iload 9
	bipush 26
	if_icmpeq L14

	iload 9
	bipush 28
	if_icmpeq L85

	goto L2
L108:
	iload 9
	bipush 61
	if_icmpeq L87

	iload 9
	bipush 61
	if_icmpgt L110

	iload 9
	bipush 43
	if_icmpeq L50

	iload 9
	bipush 49
	if_icmpeq L80

	goto L2
L110:
	iload 9
	bipush 74
	if_icmpeq L92

	iload 9
	bipush 78
	if_icmpeq L53

	goto L2
L107:
	iload 9
	sipush 160
	if_icmpeq L61

	iload 9
	sipush 160
	if_icmpgt L111

	iload 9
	sipush 133
	if_icmpeq L44

	iload 9
	sipush 133
	if_icmpgt L112

	iload 9
	bipush 124
	if_icmpeq L34

	iload 9
	sipush 132
	if_icmpeq L94

	goto L2
L112:
	iload 9
	sipush 147
	if_icmpeq L55

	iload 9
	sipush 151
	if_icmpeq L18

	goto L2
L111:
	iload 9
	sipush 174
	if_icmpeq L43

	iload 9
	sipush 174
	if_icmpgt L113

	iload 9
	sipush 170
	if_icmpeq L71

	iload 9
	sipush 171
	if_icmpeq L93

	goto L2
L113:
	iload 9
	sipush 191
	if_icmpeq L68

	iload 9
	sipush 191
	if_icmpgt L114

	iload 9
	sipush 190
	if_icmpeq L4

	goto L2
L114:
	iload 9
	sipush 201
	if_icmpeq L84

	goto L2
L106:
	iload 9
	sipush 301
	if_icmpeq L91

	iload 9
	sipush 301
	if_icmpgt L115

	iload 9
	sipush 253
	if_icmpeq L101

	iload 9
	sipush 253
	if_icmpgt L116

	iload 9
	sipush 230
	if_icmpeq L12

	iload 9
	sipush 230
	if_icmpgt L117

	iload 9
	sipush 216
	if_icmpeq L46

	iload 9
	sipush 229
	if_icmpeq L77

	goto L2
L117:
	iload 9
	sipush 240
	if_icmpeq L28

	iload 9
	sipush 249
	if_icmpeq L11

	goto L2
L116:
	iload 9
	sipush 274
	if_icmpeq L35

	iload 9
	sipush 274
	if_icmpgt L118

	iload 9
	sipush 258
	if_icmpeq L38

	iload 9
	sipush 264
	if_icmpeq L15

	goto L2
L118:
	iload 9
	sipush 287
	if_icmpeq L31

	iload 9
	sipush 289
	if_icmpeq L27

	goto L2
L115:
	iload 9
	sipush 393
	if_icmpeq L37

	iload 9
	sipush 393
	if_icmpgt L119

	iload 9
	sipush 338
	if_icmpeq L79

	iload 9
	sipush 338
	if_icmpgt L120

	iload 9
	sipush 310
	if_icmpeq L39

	iload 9
	sipush 337
	if_icmpeq L62

	goto L2
L120:
	iload 9
	sipush 339
	if_icmpeq L88

	iload 9
	sipush 358
	if_icmpeq L83

	goto L2
L119:
	iload 9
	sipush 424
	if_icmpeq L56

	iload 9
	sipush 424
	if_icmpgt L121

	iload 9
	sipush 397
	if_icmpeq L41

	iload 9
	sipush 406
	if_icmpeq L51

	goto L2
L121:
	iload 9
	sipush 446
	if_icmpeq L3

	iload 9
	sipush 446
	if_icmpgt L122

	iload 9
	sipush 441
	if_icmpeq L32

	goto L2
L122:
	iload 9
	sipush 454
	if_icmpeq L7

	goto L2
L105:
	iload 9
	sipush 758
	if_icmpeq L97

	iload 9
	sipush 758
	if_icmpgt L123

	iload 9
	sipush 616
	if_icmpeq L63

	iload 9
	sipush 616
	if_icmpgt L124

	iload 9
	sipush 527
	if_icmpeq L98

	iload 9
	sipush 527
	if_icmpgt L125

	iload 9
	sipush 499
	if_icmpeq L48

	iload 9
	sipush 499
	if_icmpgt L126

	iload 9
	sipush 490
	if_icmpeq L100

	iload 9
	sipush 492
	if_icmpeq L69

	goto L2
L126:
	iload 9
	sipush 516
	if_icmpeq L86

	iload 9
	sipush 520
	if_icmpeq L17

	goto L2
L125:
	iload 9
	sipush 596
	if_icmpeq L89

	iload 9
	sipush 596
	if_icmpgt L127

	iload 9
	sipush 573
	if_icmpeq L82

	iload 9
	sipush 595
	if_icmpeq L26

	goto L2
L127:
	iload 9
	sipush 607
	if_icmpeq L20

	iload 9
	sipush 611
	if_icmpeq L99

	goto L2
L124:
	iload 9
	sipush 682
	if_icmpeq L102

	iload 9
	sipush 682
	if_icmpgt L128

	iload 9
	sipush 660
	if_icmpeq L60

	iload 9
	sipush 660
	if_icmpgt L129

	iload 9
	sipush 637
	if_icmpeq L73

	iload 9
	sipush 643
	if_icmpeq L6

	goto L2
L129:
	iload 9
	sipush 668
	if_icmpeq L5

	iload 9
	sipush 670
	if_icmpeq L19

	goto L2
L128:
	iload 9
	sipush 731
	if_icmpeq L42

	iload 9
	sipush 731
	if_icmpgt L130

	iload 9
	sipush 695
	if_icmpeq L52

	iload 9
	sipush 712
	if_icmpeq L58

	goto L2
L130:
	iload 9
	sipush 748
	if_icmpeq L76

	iload 9
	sipush 748
	if_icmpgt L131

	iload 9
	sipush 740
	if_icmpeq L59

	goto L2
L131:
	iload 9
	sipush 751
	if_icmpeq L49

	goto L2
L123:
	iload 9
	sipush 883
	if_icmpeq L36

	iload 9
	sipush 883
	if_icmpgt L132

	iload 9
	sipush 841
	if_icmpeq L13

	iload 9
	sipush 841
	if_icmpgt L133

	iload 9
	sipush 775
	if_icmpeq L47

	iload 9
	sipush 775
	if_icmpgt L134

	iload 9
	sipush 766
	if_icmpeq L40

	iload 9
	sipush 770
	if_icmpeq L67

	goto L2
L134:
	iload 9
	sipush 805
	if_icmpeq L29

	iload 9
	sipush 824
	if_icmpeq L81

	goto L2
L133:
	iload 9
	sipush 859
	if_icmpeq L57

	iload 9
	sipush 859
	if_icmpgt L135

	iload 9
	sipush 850
	if_icmpeq L70

	iload 9
	sipush 853
	if_icmpeq L78

	goto L2
L135:
	iload 9
	sipush 862
	if_icmpeq L8

	iload 9
	sipush 862
	if_icmpgt L136

	iload 9
	sipush 860
	if_icmpeq L23

	goto L2
L136:
	iload 9
	sipush 875
	if_icmpeq L96

	goto L2
L132:
	iload 9
	sipush 932
	if_icmpeq L90

	iload 9
	sipush 932
	if_icmpgt L137

	iload 9
	sipush 903
	if_icmpeq L95

	iload 9
	sipush 903
	if_icmpgt L138

	iload 9
	sipush 886
	if_icmpeq L30

	iload 9
	sipush 895
	if_icmpeq L66

	goto L2
L138:
	iload 9
	sipush 922
	if_icmpeq L45

	iload 9
	sipush 930
	if_icmpeq L74

	goto L2
L137:
	iload 9
	sipush 969
	if_icmpeq L24

	iload 9
	sipush 969
	if_icmpgt L139

	iload 9
	sipush 949
	if_icmpeq L22

	iload 9
	sipush 957
	if_icmpeq L72

	goto L2
L139:
	iload 9
	sipush 993
	if_icmpeq L9

	iload 9
	sipush 993
	if_icmpgt L140

	iload 9
	sipush 976
	if_icmpeq L21

	goto L2
L140:
	iload 9
	sipush 994
	if_icmpeq L25

	goto L2
L3:
	sipush 4099
	istore 10

	goto L141
L4:
	sipush 4103
	istore 10

	goto L141
L5:
	sipush 4107
	istore 10

	goto L141
L6:
	sipush 4111
	istore 10

	goto L141
L7:
	sipush 4115
	istore 10

	goto L141
L8:
	sipush 4119
	istore 10

	goto L141
L9:
	sipush 4123
	istore 10

	goto L141
L10:
	sipush 4127
	istore 10

	goto L141
L11:
	sipush 4130
	istore 10

	goto L141
L12:
	sipush 4134
	istore 10

	goto L141
L13:
	sipush 4138
	istore 10

	goto L141
L14:
	sipush 4142
	istore 10

	goto L141
L15:
	sipush 4145
	istore 10

	goto L141
L16:
	sipush 4149
	istore 10

	goto L141
L17:
	sipush 4152
	istore 10

	goto L141
L18:
	sipush 4156
	istore 10

	goto L141
L19:
	sipush 4160
	istore 10

	goto L141
L20:
	sipush 4164
	istore 10

	goto L141
L21:
	sipush 4168
	istore 10

	goto L141
L22:
	sipush 4172
	istore 10

	goto L141
L23:
	sipush 4176
	istore 10

	goto L141
L24:
	sipush 4180
	istore 10

	goto L141
L25:
	sipush 4184
	istore 10

	goto L141
L26:
	sipush 4188
	istore 10

	goto L141
L27:
	sipush 4192
	istore 10

	goto L141
L28:
	sipush 4196
	istore 10

	goto L141
L29:
	sipush 4200
	istore 10

	goto L141
L30:
	sipush 4204
	istore 10

	goto L141
L31:
	sipush 4208
	istore 10

	goto L141
L32:
	sipush 4212
	istore 10

	goto L141
L33:
	sipush 4216
	istore 10

	goto L141
L34:
	sipush 4220
	istore 10

	goto L141
L35:
	sipush 4224
	istore 10

	goto L141
L36:
	sipush 4228
	istore 10

	goto L141
L37:
	sipush 4232
	istore 10

	goto L141
L38:
	sipush 4236
	istore 10

	goto L141
L39:
	sipush 4240
	istore 10

	goto L141
L40:
	sipush 4244
	istore 10

	goto L141
L41:
	sipush 4248
	istore 10

	goto L141
L42:
	sipush 4252
	istore 10

	goto L141
L43:
	sipush 4256
	istore 10

	goto L141
L44:
	sipush 4260
	istore 10

	goto L141
L45:
	sipush 4264
	istore 10

	goto L141
L46:
	sipush 4268
	istore 10

	goto L141
L47:
	sipush 4272
	istore 10

	goto L141
L48:
	sipush 4276
	istore 10

	goto L141
L49:
	sipush 4280
	istore 10

	goto L141
L50:
	sipush 4284
	istore 10

	goto L141
L51:
	sipush 4287
	istore 10

	goto L141
L52:
	sipush 4291
	istore 10

	goto L141
L53:
	sipush 4295
	istore 10

	goto L141
L54:
	sipush 4298
	istore 10

	goto L141
L55:
	sipush 4301
	istore 10

	goto L141
L56:
	sipush 4305
	istore 10

	goto L141
L57:
	sipush 4309
	istore 10

	goto L141
L58:
	sipush 4313
	istore 10

	goto L141
L59:
	sipush 4317
	istore 10

	goto L141
L60:
	sipush 4321
	istore 10

	goto L141
L61:
	sipush 4325
	istore 10

	goto L141
L62:
	sipush 4329
	istore 10

	goto L141
L63:
	sipush 4333
	istore 10

	goto L141
L64:
	sipush 4337
	istore 10

	goto L141
L65:
	sipush 4341
	istore 10

	goto L141
L66:
	sipush 4343
	istore 10

	goto L141
L67:
	sipush 4347
	istore 10

	goto L141
L68:
	sipush 4351
	istore 10

	goto L141
L69:
	sipush 4355
	istore 10

	goto L141
L70:
	sipush 4359
	istore 10

	goto L141
L71:
	sipush 4363
	istore 10

	goto L141
L72:
	sipush 4367
	istore 10

	goto L141
L73:
	sipush 4371
	istore 10

	goto L141
L74:
	sipush 4375
	istore 10

	goto L141
L75:
	sipush 4379
	istore 10

	goto L141
L76:
	sipush 4382
	istore 10

	goto L141
L77:
	sipush 4386
	istore 10

	goto L141
L78:
	sipush 4390
	istore 10

	goto L141
L79:
	sipush 4394
	istore 10

	goto L141
L80:
	sipush 4398
	istore 10

	goto L141
L81:
	sipush 4401
	istore 10

	goto L141
L82:
	sipush 4405
	istore 10

	goto L141
L83:
	sipush 4409
	istore 10

	goto L141
L84:
	sipush 4413
	istore 10

	goto L141
L85:
	sipush 4417
	istore 10

	goto L141
L86:
	sipush 4420
	istore 10

	goto L141
L87:
	sipush 4424
	istore 10

	goto L141
L88:
	sipush 4427
	istore 10

	goto L141
L89:
	sipush 4431
	istore 10

	goto L141
L90:
	sipush 4435
	istore 10

	goto L141
L91:
	sipush 4439
	istore 10

	goto L141
L92:
	sipush 4443
	istore 10

	goto L141
L93:
	sipush 4446
	istore 10

	goto L141
L94:
	sipush 4450
	istore 10

	goto L141
L95:
	sipush 4454
	istore 10

	goto L141
L96:
	sipush 4458
	istore 10

	goto L141
L97:
	sipush 4462
	istore 10

	goto L141
L98:
	sipush 4466
	istore 10

	goto L141
L99:
	sipush 4470
	istore 10

	goto L141
L100:
	sipush 4474
	istore 10

	goto L141
L101:
	sipush 4478
	istore 10

	goto L141
L102:
	sipush 4482
	istore 10

L141:
	aload_0
	iload 10
	invokevirtual Switch/_printf(I)I
	istore 10

L2:
	return
.end method

.method globalsize()I
.limit locals 2
.limit stack 3
sipush 390
ireturn
.end method
