
.method public _main(II)V
	.limit stack 9
	.limit locals 17

	iconst_0
	istore 14

	symrefSwitchLC0end
	istore 10

	iload 14
	bipush 4
	iadd
	istore 11

	aload_0
	iload 10
	iload 11
	invokevirtual Prog/_scanf(II)I
	istore 10

	aload_0
	getfield Prog/memory [I
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
	symrefSwitchLC1end
	istore 10

	goto L141
L4:
	symrefSwitchLC2end
	istore 10

	goto L141
L5:
	symrefSwitchLC3end
	istore 10

	goto L141
L6:
	symrefSwitchLC4end
	istore 10

	goto L141
L7:
	symrefSwitchLC5end
	istore 10

	goto L141
L8:
	symrefSwitchLC6end
	istore 10

	goto L141
L9:
	symrefSwitchLC7end
	istore 10

	goto L141
L10:
	symrefSwitchLC8end
	istore 10

	goto L141
L11:
	symrefSwitchLC9end
	istore 10

	goto L141
L12:
	symrefSwitchLC10end
	istore 10

	goto L141
L13:
	symrefSwitchLC11end
	istore 10

	goto L141
L14:
	symrefSwitchLC12end
	istore 10

	goto L141
L15:
	symrefSwitchLC13end
	istore 10

	goto L141
L16:
	symrefSwitchLC14end
	istore 10

	goto L141
L17:
	symrefSwitchLC15end
	istore 10

	goto L141
L18:
	symrefSwitchLC16end
	istore 10

	goto L141
L19:
	symrefSwitchLC17end
	istore 10

	goto L141
L20:
	symrefSwitchLC18end
	istore 10

	goto L141
L21:
	symrefSwitchLC19end
	istore 10

	goto L141
L22:
	symrefSwitchLC20end
	istore 10

	goto L141
L23:
	symrefSwitchLC21end
	istore 10

	goto L141
L24:
	symrefSwitchLC22end
	istore 10

	goto L141
L25:
	symrefSwitchLC23end
	istore 10

	goto L141
L26:
	symrefSwitchLC24end
	istore 10

	goto L141
L27:
	symrefSwitchLC25end
	istore 10

	goto L141
L28:
	symrefSwitchLC26end
	istore 10

	goto L141
L29:
	symrefSwitchLC27end
	istore 10

	goto L141
L30:
	symrefSwitchLC28end
	istore 10

	goto L141
L31:
	symrefSwitchLC29end
	istore 10

	goto L141
L32:
	symrefSwitchLC30end
	istore 10

	goto L141
L33:
	symrefSwitchLC31end
	istore 10

	goto L141
L34:
	symrefSwitchLC32end
	istore 10

	goto L141
L35:
	symrefSwitchLC33end
	istore 10

	goto L141
L36:
	symrefSwitchLC34end
	istore 10

	goto L141
L37:
	symrefSwitchLC35end
	istore 10

	goto L141
L38:
	symrefSwitchLC36end
	istore 10

	goto L141
L39:
	symrefSwitchLC37end
	istore 10

	goto L141
L40:
	symrefSwitchLC38end
	istore 10

	goto L141
L41:
	symrefSwitchLC39end
	istore 10

	goto L141
L42:
	symrefSwitchLC40end
	istore 10

	goto L141
L43:
	symrefSwitchLC41end
	istore 10

	goto L141
L44:
	symrefSwitchLC42end
	istore 10

	goto L141
L45:
	symrefSwitchLC43end
	istore 10

	goto L141
L46:
	symrefSwitchLC44end
	istore 10

	goto L141
L47:
	symrefSwitchLC45end
	istore 10

	goto L141
L48:
	symrefSwitchLC46end
	istore 10

	goto L141
L49:
	symrefSwitchLC47end
	istore 10

	goto L141
L50:
	symrefSwitchLC48end
	istore 10

	goto L141
L51:
	symrefSwitchLC49end
	istore 10

	goto L141
L52:
	symrefSwitchLC50end
	istore 10

	goto L141
L53:
	symrefSwitchLC51end
	istore 10

	goto L141
L54:
	symrefSwitchLC52end
	istore 10

	goto L141
L55:
	symrefSwitchLC53end
	istore 10

	goto L141
L56:
	symrefSwitchLC54end
	istore 10

	goto L141
L57:
	symrefSwitchLC55end
	istore 10

	goto L141
L58:
	symrefSwitchLC56end
	istore 10

	goto L141
L59:
	symrefSwitchLC57end
	istore 10

	goto L141
L60:
	symrefSwitchLC58end
	istore 10

	goto L141
L61:
	symrefSwitchLC59end
	istore 10

	goto L141
L62:
	symrefSwitchLC60end
	istore 10

	goto L141
L63:
	symrefSwitchLC61end
	istore 10

	goto L141
L64:
	symrefSwitchLC62end
	istore 10

	goto L141
L65:
	symrefSwitchLC63end
	istore 10

	goto L141
L66:
	symrefSwitchLC64end
	istore 10

	goto L141
L67:
	symrefSwitchLC65end
	istore 10

	goto L141
L68:
	symrefSwitchLC66end
	istore 10

	goto L141
L69:
	symrefSwitchLC67end
	istore 10

	goto L141
L70:
	symrefSwitchLC68end
	istore 10

	goto L141
L71:
	symrefSwitchLC69end
	istore 10

	goto L141
L72:
	symrefSwitchLC70end
	istore 10

	goto L141
L73:
	symrefSwitchLC71end
	istore 10

	goto L141
L74:
	symrefSwitchLC72end
	istore 10

	goto L141
L75:
	symrefSwitchLC73end
	istore 10

	goto L141
L76:
	symrefSwitchLC74end
	istore 10

	goto L141
L77:
	symrefSwitchLC75end
	istore 10

	goto L141
L78:
	symrefSwitchLC76end
	istore 10

	goto L141
L79:
	symrefSwitchLC77end
	istore 10

	goto L141
L80:
	symrefSwitchLC78end
	istore 10

	goto L141
L81:
	symrefSwitchLC79end
	istore 10

	goto L141
L82:
	symrefSwitchLC80end
	istore 10

	goto L141
L83:
	symrefSwitchLC81end
	istore 10

	goto L141
L84:
	symrefSwitchLC82end
	istore 10

	goto L141
L85:
	symrefSwitchLC83end
	istore 10

	goto L141
L86:
	symrefSwitchLC84end
	istore 10

	goto L141
L87:
	symrefSwitchLC85end
	istore 10

	goto L141
L88:
	symrefSwitchLC86end
	istore 10

	goto L141
L89:
	symrefSwitchLC87end
	istore 10

	goto L141
L90:
	symrefSwitchLC88end
	istore 10

	goto L141
L91:
	symrefSwitchLC89end
	istore 10

	goto L141
L92:
	symrefSwitchLC90end
	istore 10

	goto L141
L93:
	symrefSwitchLC91end
	istore 10

	goto L141
L94:
	symrefSwitchLC92end
	istore 10

	goto L141
L95:
	symrefSwitchLC93end
	istore 10

	goto L141
L96:
	symrefSwitchLC94end
	istore 10

	goto L141
L97:
	symrefSwitchLC95end
	istore 10

	goto L141
L98:
	symrefSwitchLC96end
	istore 10

	goto L141
L99:
	symrefSwitchLC97end
	istore 10

	goto L141
L100:
	symrefSwitchLC98end
	istore 10

	goto L141
L101:
	symrefSwitchLC99end
	istore 10

	goto L141
L102:
	symrefSwitchLC100end
	istore 10

L141:
	aload_0
	iload 10
	invokevirtual Prog/_printf(I)I
	istore 10

L2:
	return
.end method

