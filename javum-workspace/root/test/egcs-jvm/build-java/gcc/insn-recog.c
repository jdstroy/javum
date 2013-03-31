/* Generated automatically by the program `genrecog'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"


/* `recog' contains a decision tree
   that recognizes whether the rtx X0 is a valid instruction.

   recog returns -1 if the rtx is not valid.
   If the rtx is valid, recog returns a nonnegative number
   which is the insn code number for the pattern that matched.
   This is the same as the order in the machine description of
   the entry that matched.  This number can be used as an index into various
   insn_* tables, such as insn_templates, insn_outfun, and insn_n_operands
   (found in insn-output.c).

   The third argument to recog is an optional pointer to an int.
   If present, recog will accept a pattern if it matches except for
   missing CLOBBER expressions at the end.  In that case, the value
   pointed to by the optional pointer will be set to the number of
   CLOBBERs that need to be added (it should be initialized to zero by
   the caller).  If it is set nonzero, the caller should allocate a
   PARALLEL of the appropriate size, copy the initial entries, and call
   add_clobbers (found in insn-emit.c) to fill in the CLOBBERs.*/

rtx recog_operand[MAX_RECOG_OPERANDS];

rtx *recog_operand_loc[MAX_RECOG_OPERANDS];

rtx *recog_dup_loc[MAX_DUP_OPERANDS];

char recog_dup_num[MAX_DUP_OPERANDS];

#define operands recog_operand

int
recog_1 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  switch (GET_CODE (x2))
    {
    default:
      break;
    case EQ:
      goto L117;
    case NE:
      goto L126;
    case GT:
      goto L135;
    case GTU:
      goto L144;
    case LT:
      goto L153;
    case LTU:
      goto L162;
    case GE:
      goto L171;
    case GEU:
      goto L180;
    case LE:
      goto L189;
    case LEU:
      goto L198;
    }
  goto ret0;

  L117:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0 && 1)
    goto L118;
  goto ret0;

  L118:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L119;
  goto ret0;

  L119:
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    default:
      break;
    case LABEL_REF:
      goto L120;
    case PC:
      goto L210;
    }
  goto ret0;

  L120:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  goto L121;

  L121:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC && 1)
    return 41;
  goto ret0;

  L210:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L211;
  goto ret0;

  L211:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  return 51;

  L126:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0 && 1)
    goto L127;
  goto ret0;

  L127:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L128;
  goto ret0;

  L128:
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    default:
      break;
    case LABEL_REF:
      goto L129;
    case PC:
      goto L219;
    }
  goto ret0;

  L129:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  goto L130;

  L130:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC && 1)
    return 42;
  goto ret0;

  L219:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L220;
  goto ret0;

  L220:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  return 52;

  L135:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0 && 1)
    goto L136;
  goto ret0;

  L136:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L137;
  goto ret0;

  L137:
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    default:
      break;
    case LABEL_REF:
      goto L138;
    case PC:
      goto L228;
    }
  goto ret0;

  L138:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  goto L139;

  L139:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC && 1)
    return 43;
  goto ret0;

  L228:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L229;
  goto ret0;

  L229:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  return 53;

  L144:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0 && 1)
    goto L145;
  goto ret0;

  L145:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L146;
  goto ret0;

  L146:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L147;
  goto ret0;

  L147:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  goto L148;

  L148:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC && 1)
    return 44;
  goto ret0;

  L153:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0 && 1)
    goto L154;
  goto ret0;

  L154:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L155;
  goto ret0;

  L155:
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    default:
      break;
    case LABEL_REF:
      goto L156;
    case PC:
      goto L237;
    }
  goto ret0;

  L156:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  goto L157;

  L157:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC && 1)
    return 45;
  goto ret0;

  L237:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L238;
  goto ret0;

  L238:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  return 54;

  L162:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0 && 1)
    goto L163;
  goto ret0;

  L163:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L164;
  goto ret0;

  L164:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L165;
  goto ret0;

  L165:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  goto L166;

  L166:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC && 1)
    return 46;
  goto ret0;

  L171:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0 && 1)
    goto L172;
  goto ret0;

  L172:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L173;
  goto ret0;

  L173:
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    default:
      break;
    case LABEL_REF:
      goto L174;
    case PC:
      goto L246;
    }
  goto ret0;

  L174:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  goto L175;

  L175:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC && 1)
    return 47;
  goto ret0;

  L246:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L247;
  goto ret0;

  L247:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  return 55;

  L180:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0 && 1)
    goto L181;
  goto ret0;

  L181:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L182;
  goto ret0;

  L182:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L183;
  goto ret0;

  L183:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  goto L184;

  L184:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC && 1)
    return 48;
  goto ret0;

  L189:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0 && 1)
    goto L190;
  goto ret0;

  L190:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L191;
  goto ret0;

  L191:
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    default:
      break;
    case LABEL_REF:
      goto L192;
    case PC:
      goto L255;
    }
  goto ret0;

  L192:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  goto L193;

  L193:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC && 1)
    return 49;
  goto ret0;

  L255:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L256;
  goto ret0;

  L256:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  return 56;

  L198:
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0 && 1)
    goto L199;
  goto ret0;

  L199:
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L200;
  goto ret0;

  L200:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L201;
  goto ret0;

  L201:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  goto L202;

  L202:
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC && 1)
    return 50;
  goto ret0;
 ret0: return -1;
}

int
recog_2 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    default:
      break;
    case SImode:
      if (general_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L40;
	}
    L15:
      if (register_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L16;
	}
      break;
    case HImode:
      if (general_operand (x1, HImode))
	{
	  ro[0] = x1;
	  goto L10;
	}
    L23:
      if (register_operand (x1, HImode))
	{
	  ro[0] = x1;
	  goto L24;
	}
      break;
    case QImode:
      if (general_operand (x1, QImode))
	{
	  ro[0] = x1;
	  goto L13;
	}
    }
  L108:
  switch (GET_CODE (x1))
    {
    default:
      break;
    case REG:
      if (GET_MODE (x1) == SImode && XINT (x1, 0) == 15 && 1)
	goto L109;
      break;
    case CC0:
      goto L2;
    case PC:
      goto L95;
    }
  L278:
  if (general_operand (x1, VOIDmode))
    {
      ro[0] = x1;
      goto L279;
    }
  goto ret0;

  L40:
  x1 = XEXP (x0, 1);
  switch (GET_MODE (x1))
    {
    default:
      break;
    case SImode:
      switch (GET_CODE (x1))
	{
	default:
	  break;
	case PLUS:
	  goto L41;
	case MOD:
	  goto L46;
	case MINUS:
	  goto L51;
	case MULT:
	  goto L56;
	case DIV:
	  goto L61;
	}
    }
  if (general_operand (x1, SImode))
    {
      ro[1] = x1;
      return 17;
    }
  x1 = XEXP (x0, 0);
  goto L15;

  L41:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L42;
    }
  x1 = XEXP (x0, 0);
  goto L15;

  L42:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      ro[2] = x2;
      return 26;
    }
  x1 = XEXP (x0, 0);
  goto L15;

  L46:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L47;
    }
  x1 = XEXP (x0, 0);
  goto L15;

  L47:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      ro[2] = x2;
      return 27;
    }
  x1 = XEXP (x0, 0);
  goto L15;

  L51:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L52;
    }
  x1 = XEXP (x0, 0);
  goto L15;

  L52:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      ro[2] = x2;
      return 28;
    }
  x1 = XEXP (x0, 0);
  goto L15;

  L56:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L57;
    }
  x1 = XEXP (x0, 0);
  goto L15;

  L57:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      ro[2] = x2;
      return 29;
    }
  x1 = XEXP (x0, 0);
  goto L15;

  L61:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L62;
    }
  x1 = XEXP (x0, 0);
  goto L15;

  L62:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      ro[2] = x2;
      return 30;
    }
  x1 = XEXP (x0, 0);
  goto L15;

  L16:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != SImode)
    {
      x1 = XEXP (x0, 0);
      goto L108;
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case SIGN_EXTEND:
      goto L17;
    case ZERO_EXTEND:
      goto L29;
    case IOR:
      goto L66;
    case AND:
      goto L71;
    case XOR:
      goto L76;
    case ASHIFTRT:
      goto L81;
    case LSHIFTRT:
      goto L86;
    case ASHIFT:
      goto L91;
    }
  x1 = XEXP (x0, 0);
  goto L108;

  L17:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case HImode:
      if (general_operand (x2, HImode))
	{
	  ro[1] = x2;
	  return 20;
	}
      break;
    case QImode:
      if (general_operand (x2, QImode))
	{
	  ro[1] = x2;
	  return 21;
	}
    }
  x1 = XEXP (x0, 0);
  goto L108;

  L29:
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case HImode:
      if (general_operand (x2, HImode))
	{
	  ro[1] = x2;
	  return 23;
	}
      break;
    case QImode:
      if (general_operand (x2, QImode))
	{
	  ro[1] = x2;
	  return 24;
	}
    }
  x1 = XEXP (x0, 0);
  goto L108;

  L66:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L67;
    }
  x1 = XEXP (x0, 0);
  goto L108;

  L67:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      ro[2] = x2;
      return 31;
    }
  x1 = XEXP (x0, 0);
  goto L108;

  L71:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L72;
    }
  x1 = XEXP (x0, 0);
  goto L108;

  L72:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      ro[2] = x2;
      return 32;
    }
  x1 = XEXP (x0, 0);
  goto L108;

  L76:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L77;
    }
  x1 = XEXP (x0, 0);
  goto L108;

  L77:
  x2 = XEXP (x1, 1);
  if (register_operand (x2, SImode))
    {
      ro[2] = x2;
      return 33;
    }
  x1 = XEXP (x0, 0);
  goto L108;

  L81:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L82;
    }
  x1 = XEXP (x0, 0);
  goto L108;

  L82:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      ro[2] = x2;
      return 34;
    }
  x1 = XEXP (x0, 0);
  goto L108;

  L86:
  x2 = XEXP (x1, 0);
  if (register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L87;
    }
  x1 = XEXP (x0, 0);
  goto L108;

  L87:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      ro[2] = x2;
      return 35;
    }
  x1 = XEXP (x0, 0);
  goto L108;

  L91:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L92;
    }
  x1 = XEXP (x0, 0);
  goto L108;

  L92:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      ro[2] = x2;
      return 36;
    }
  x1 = XEXP (x0, 0);
  goto L108;

  L10:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, HImode))
    {
      ro[1] = x1;
      return 18;
    }
  x1 = XEXP (x0, 0);
  goto L23;

  L24:
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != HImode)
    {
      x1 = XEXP (x0, 0);
      goto L278;
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case SIGN_EXTEND:
      goto L25;
    case ZERO_EXTEND:
      goto L37;
    }
  x1 = XEXP (x0, 0);
  goto L278;

  L25:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode && general_operand (x2, QImode))
    {
      ro[1] = x2;
      return 22;
    }
  x1 = XEXP (x0, 0);
  goto L278;

  L37:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode && general_operand (x2, QImode))
    {
      ro[1] = x2;
      return 25;
    }
  x1 = XEXP (x0, 0);
  goto L278;

  L13:
  x1 = XEXP (x0, 1);
  if (general_operand (x1, QImode))
    {
      ro[1] = x1;
      return 19;
    }
  x1 = XEXP (x0, 0);
  goto L278;

  L109:
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == PC && 1)
    return 39;
  x1 = XEXP (x0, 0);
  goto L278;

  L2:
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == COMPARE && 1)
    goto L3;
  goto ret0;

  L3:
  x2 = XEXP (x1, 0);
  if (nonimmediate_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L4;
    }
  goto ret0;

  L4:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      ro[1] = x2;
      return 16;
    }
  goto ret0;

  L95:
  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    default:
      break;
    case LABEL_REF:
      goto L96;
    case IF_THEN_ELSE:
      goto L116;
    }
  L112:
  if (general_operand (x1, SImode))
    {
      ro[0] = x1;
      return 40;
    }
  goto ret0;

  L96:
  x2 = XEXP (x1, 0);
  ro[0] = x2;
  return 37;
 L116:
  return recog_1 (x0, insn, pnum_clobbers);

  L279:
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CALL && 1)
    goto L280;
  goto ret0;

  L280:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode && GET_CODE (x2) == MEM && 1)
    goto L281;
  goto ret0;

  L281:
  x3 = XEXP (x2, 0);
  if (general_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L282;
    }
  goto ret0;

  L282:
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && general_operand (x2, SImode))
    {
      ro[2] = x2;
      *pnum_clobbers = 1;
      return 60;
    }
  goto ret0;
 ret0: return -1;
}

int
recog (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  L0:
  switch (GET_CODE (x0))
    {
    default:
      break;
    case SET:
      goto L6;
    case PARALLEL:
      if (XVECLEN (x0, 0) == 3 && 1)
	goto L98;
      if (XVECLEN (x0, 0) == 2 && 1)
	goto L258;
      break;
    case CALL:
      goto L265;
    case CONST_INT:
      if (XWINT (x0, 0) == 0 && 1)
	return 61;
    }
  goto ret0;
 L6:
  return recog_2 (x0, insn, pnum_clobbers);

  L98:
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L99;
  goto ret0;

  L99:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == PC && 1)
    goto L100;
  goto ret0;

  L100:
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == REG && XINT (x2, 0) == 15 && 1)
    goto L101;
  goto ret0;

  L101:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE && 1)
    goto L102;
  goto ret0;

  L102:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L103;
  goto ret0;

  L103:
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  goto L104;

  L104:
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == USE && 1)
    goto L105;
  goto ret0;

  L105:
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L106;
  goto ret0;

  L106:
  x3 = XEXP (x2, 0);
  ro[1] = x3;
  return 38;

  L258:
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    default:
      break;
    case CALL:
      goto L259;
    case SET:
      goto L270;
    }
  goto ret0;

  L259:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == QImode && GET_CODE (x2) == MEM && 1)
    goto L260;
  goto ret0;

  L260:
  x3 = XEXP (x2, 0);
  if (general_operand (x3, SImode))
    {
      ro[0] = x3;
      goto L261;
    }
  goto ret0;

  L261:
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L262;
    }
  goto ret0;

  L262:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L263;
  goto ret0;

  L263:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == REG && XINT (x2, 0) == 16 && 1)
    return 58;
  goto ret0;

  L270:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, VOIDmode))
    {
      ro[0] = x2;
      goto L271;
    }
  goto ret0;

  L271:
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL && 1)
    goto L272;
  goto ret0;

  L272:
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == QImode && GET_CODE (x3) == MEM && 1)
    goto L273;
  goto ret0;

  L273:
  x4 = XEXP (x3, 0);
  if (general_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L274;
    }
  goto ret0;

  L274:
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L275;
    }
  goto ret0;

  L275:
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L276;
  goto ret0;

  L276:
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == REG && XINT (x2, 0) == 16 && 1)
    return 60;
  goto ret0;

  L265:
  x1 = XEXP (x0, 0);
  if (GET_MODE (x1) == QImode && GET_CODE (x1) == MEM && 1)
    goto L266;
  goto ret0;

  L266:
  x2 = XEXP (x1, 0);
  if (general_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L267;
    }
  goto ret0;

  L267:
  x1 = XEXP (x0, 1);
  if (pnum_clobbers != 0 && general_operand (x1, SImode))
    {
      ro[1] = x1;
      *pnum_clobbers = 1;
      return 58;
    }
  goto ret0;
 ret0: return -1;
}

rtx
split_insns (x0, insn)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  goto ret0;
 ret0: return 0;
}

