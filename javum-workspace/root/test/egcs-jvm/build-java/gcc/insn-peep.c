/* Generated automatically by the program `genpeep'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "rtl.h"
#include "regs.h"
#include "output.h"
#include "real.h"
#include "except.h"

extern rtx peep_operand[];

#define operands peep_operand

rtx
peephole (ins1)
     rtx ins1;
{
  rtx insn ATTRIBUTE_UNUSED, x ATTRIBUTE_UNUSED, pat ATTRIBUTE_UNUSED;

  if (NEXT_INSN (ins1)
      && GET_CODE (NEXT_INSN (ins1)) == BARRIER)
    return 0;

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L0;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != CC0) goto L0;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != COMPARE) goto L0;
  x = XEXP (XEXP (pat, 1), 0);
  operands[0] = x;
  if (! nonimmediate_operand (x, SImode)) goto L0;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != CONST_INT) goto L0;
  if (XWINT (x, 0) != 0) goto L0;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L0; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L0;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L0;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != PC) goto L0;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != IF_THEN_ELSE) goto L0;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != EQ) goto L0;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (GET_CODE (x) != CC0) goto L0;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (GET_CODE (x) != CONST_INT) goto L0;
  if (XWINT (x, 0) != 0) goto L0;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != LABEL_REF) goto L0;
  x = XEXP (XEXP (XEXP (pat, 1), 1), 0);
  operands[1] = x;
  x = XEXP (XEXP (pat, 1), 2);
  if (GET_CODE (x) != PC) goto L0;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (2, operands));
  INSN_CODE (ins1) = 0;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L0:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L1;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != CC0) goto L1;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != COMPARE) goto L1;
  x = XEXP (XEXP (pat, 1), 0);
  operands[0] = x;
  if (! nonimmediate_operand (x, SImode)) goto L1;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != CONST_INT) goto L1;
  if (XWINT (x, 0) != 0) goto L1;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L1; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L1;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != PC) goto L1;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != IF_THEN_ELSE) goto L1;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != NE) goto L1;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (GET_CODE (x) != CC0) goto L1;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (GET_CODE (x) != CONST_INT) goto L1;
  if (XWINT (x, 0) != 0) goto L1;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != LABEL_REF) goto L1;
  x = XEXP (XEXP (XEXP (pat, 1), 1), 0);
  operands[1] = x;
  x = XEXP (XEXP (pat, 1), 2);
  if (GET_CODE (x) != PC) goto L1;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (2, operands));
  INSN_CODE (ins1) = 1;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L1:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != CC0) goto L2;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != COMPARE) goto L2;
  x = XEXP (XEXP (pat, 1), 0);
  operands[0] = x;
  if (! nonimmediate_operand (x, SImode)) goto L2;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != CONST_INT) goto L2;
  if (XWINT (x, 0) != 0) goto L2;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L2; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L2;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L2;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != PC) goto L2;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != IF_THEN_ELSE) goto L2;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != LT) goto L2;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (GET_CODE (x) != CC0) goto L2;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (GET_CODE (x) != CONST_INT) goto L2;
  if (XWINT (x, 0) != 0) goto L2;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != LABEL_REF) goto L2;
  x = XEXP (XEXP (XEXP (pat, 1), 1), 0);
  operands[1] = x;
  x = XEXP (XEXP (pat, 1), 2);
  if (GET_CODE (x) != PC) goto L2;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (2, operands));
  INSN_CODE (ins1) = 2;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L2:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L3;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != CC0) goto L3;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != COMPARE) goto L3;
  x = XEXP (XEXP (pat, 1), 0);
  operands[0] = x;
  if (! nonimmediate_operand (x, SImode)) goto L3;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != CONST_INT) goto L3;
  if (XWINT (x, 0) != 0) goto L3;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L3; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L3;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L3;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != PC) goto L3;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != IF_THEN_ELSE) goto L3;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != GT) goto L3;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (GET_CODE (x) != CC0) goto L3;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (GET_CODE (x) != CONST_INT) goto L3;
  if (XWINT (x, 0) != 0) goto L3;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != LABEL_REF) goto L3;
  x = XEXP (XEXP (XEXP (pat, 1), 1), 0);
  operands[1] = x;
  x = XEXP (XEXP (pat, 1), 2);
  if (GET_CODE (x) != PC) goto L3;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (2, operands));
  INSN_CODE (ins1) = 3;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L3:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L4;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != CC0) goto L4;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != COMPARE) goto L4;
  x = XEXP (XEXP (pat, 1), 0);
  operands[0] = x;
  if (! nonimmediate_operand (x, SImode)) goto L4;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != CONST_INT) goto L4;
  if (XWINT (x, 0) != 0) goto L4;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L4; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L4;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L4;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != PC) goto L4;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != IF_THEN_ELSE) goto L4;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != LE) goto L4;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (GET_CODE (x) != CC0) goto L4;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (GET_CODE (x) != CONST_INT) goto L4;
  if (XWINT (x, 0) != 0) goto L4;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != LABEL_REF) goto L4;
  x = XEXP (XEXP (XEXP (pat, 1), 1), 0);
  operands[1] = x;
  x = XEXP (XEXP (pat, 1), 2);
  if (GET_CODE (x) != PC) goto L4;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (2, operands));
  INSN_CODE (ins1) = 4;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L4:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L5;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != CC0) goto L5;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != COMPARE) goto L5;
  x = XEXP (XEXP (pat, 1), 0);
  operands[0] = x;
  if (! nonimmediate_operand (x, SImode)) goto L5;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != CONST_INT) goto L5;
  if (XWINT (x, 0) != 0) goto L5;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L5; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L5;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L5;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != PC) goto L5;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != IF_THEN_ELSE) goto L5;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != GE) goto L5;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (GET_CODE (x) != CC0) goto L5;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (GET_CODE (x) != CONST_INT) goto L5;
  if (XWINT (x, 0) != 0) goto L5;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != LABEL_REF) goto L5;
  x = XEXP (XEXP (XEXP (pat, 1), 1), 0);
  operands[1] = x;
  x = XEXP (XEXP (pat, 1), 2);
  if (GET_CODE (x) != PC) goto L5;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (2, operands));
  INSN_CODE (ins1) = 5;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L5:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L6;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != CC0) goto L6;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != COMPARE) goto L6;
  x = XEXP (XEXP (pat, 1), 0);
  operands[0] = x;
  if (! nonimmediate_operand (x, SImode)) goto L6;
  x = XEXP (XEXP (pat, 1), 1);
  operands[1] = x;
  if (! general_operand (x, SImode)) goto L6;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L6; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L6;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L6;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != PC) goto L6;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != IF_THEN_ELSE) goto L6;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != EQ) goto L6;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (GET_CODE (x) != CC0) goto L6;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (GET_CODE (x) != CONST_INT) goto L6;
  if (XWINT (x, 0) != 0) goto L6;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != LABEL_REF) goto L6;
  x = XEXP (XEXP (XEXP (pat, 1), 1), 0);
  operands[2] = x;
  x = XEXP (XEXP (pat, 1), 2);
  if (GET_CODE (x) != PC) goto L6;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (3, operands));
  INSN_CODE (ins1) = 6;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L6:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L7;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != CC0) goto L7;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != COMPARE) goto L7;
  x = XEXP (XEXP (pat, 1), 0);
  operands[0] = x;
  if (! nonimmediate_operand (x, SImode)) goto L7;
  x = XEXP (XEXP (pat, 1), 1);
  operands[1] = x;
  if (! general_operand (x, SImode)) goto L7;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L7; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L7;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L7;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != PC) goto L7;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != IF_THEN_ELSE) goto L7;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != NE) goto L7;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (GET_CODE (x) != CC0) goto L7;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (GET_CODE (x) != CONST_INT) goto L7;
  if (XWINT (x, 0) != 0) goto L7;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != LABEL_REF) goto L7;
  x = XEXP (XEXP (XEXP (pat, 1), 1), 0);
  operands[2] = x;
  x = XEXP (XEXP (pat, 1), 2);
  if (GET_CODE (x) != PC) goto L7;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (3, operands));
  INSN_CODE (ins1) = 7;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L7:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L8;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != CC0) goto L8;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != COMPARE) goto L8;
  x = XEXP (XEXP (pat, 1), 0);
  operands[0] = x;
  if (! nonimmediate_operand (x, SImode)) goto L8;
  x = XEXP (XEXP (pat, 1), 1);
  operands[1] = x;
  if (! general_operand (x, SImode)) goto L8;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L8; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L8;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L8;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != PC) goto L8;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != IF_THEN_ELSE) goto L8;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != LT) goto L8;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (GET_CODE (x) != CC0) goto L8;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (GET_CODE (x) != CONST_INT) goto L8;
  if (XWINT (x, 0) != 0) goto L8;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != LABEL_REF) goto L8;
  x = XEXP (XEXP (XEXP (pat, 1), 1), 0);
  operands[2] = x;
  x = XEXP (XEXP (pat, 1), 2);
  if (GET_CODE (x) != PC) goto L8;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (3, operands));
  INSN_CODE (ins1) = 8;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L8:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L9;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != CC0) goto L9;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != COMPARE) goto L9;
  x = XEXP (XEXP (pat, 1), 0);
  operands[0] = x;
  if (! nonimmediate_operand (x, SImode)) goto L9;
  x = XEXP (XEXP (pat, 1), 1);
  operands[1] = x;
  if (! general_operand (x, SImode)) goto L9;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L9; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L9;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L9;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != PC) goto L9;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != IF_THEN_ELSE) goto L9;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != GT) goto L9;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (GET_CODE (x) != CC0) goto L9;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (GET_CODE (x) != CONST_INT) goto L9;
  if (XWINT (x, 0) != 0) goto L9;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != LABEL_REF) goto L9;
  x = XEXP (XEXP (XEXP (pat, 1), 1), 0);
  operands[2] = x;
  x = XEXP (XEXP (pat, 1), 2);
  if (GET_CODE (x) != PC) goto L9;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (3, operands));
  INSN_CODE (ins1) = 9;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L9:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L10;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != CC0) goto L10;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != COMPARE) goto L10;
  x = XEXP (XEXP (pat, 1), 0);
  operands[0] = x;
  if (! nonimmediate_operand (x, SImode)) goto L10;
  x = XEXP (XEXP (pat, 1), 1);
  operands[1] = x;
  if (! general_operand (x, SImode)) goto L10;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L10; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L10;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L10;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != PC) goto L10;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != IF_THEN_ELSE) goto L10;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != GE) goto L10;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (GET_CODE (x) != CC0) goto L10;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (GET_CODE (x) != CONST_INT) goto L10;
  if (XWINT (x, 0) != 0) goto L10;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != LABEL_REF) goto L10;
  x = XEXP (XEXP (XEXP (pat, 1), 1), 0);
  operands[2] = x;
  x = XEXP (XEXP (pat, 1), 2);
  if (GET_CODE (x) != PC) goto L10;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (3, operands));
  INSN_CODE (ins1) = 10;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L10:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L11;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != CC0) goto L11;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != COMPARE) goto L11;
  x = XEXP (XEXP (pat, 1), 0);
  operands[0] = x;
  if (! nonimmediate_operand (x, SImode)) goto L11;
  x = XEXP (XEXP (pat, 1), 1);
  operands[1] = x;
  if (! general_operand (x, SImode)) goto L11;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L11; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L11;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L11;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != PC) goto L11;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != IF_THEN_ELSE) goto L11;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != LE) goto L11;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (GET_CODE (x) != CC0) goto L11;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (GET_CODE (x) != CONST_INT) goto L11;
  if (XWINT (x, 0) != 0) goto L11;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != LABEL_REF) goto L11;
  x = XEXP (XEXP (XEXP (pat, 1), 1), 0);
  operands[2] = x;
  x = XEXP (XEXP (pat, 1), 2);
  if (GET_CODE (x) != PC) goto L11;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (3, operands));
  INSN_CODE (ins1) = 11;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L11:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L12;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != CC0) goto L12;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != COMPARE) goto L12;
  x = XEXP (XEXP (pat, 1), 0);
  operands[0] = x;
  if (! nonimmediate_operand (x, SImode)) goto L12;
  x = XEXP (XEXP (pat, 1), 1);
  operands[1] = x;
  if (! general_operand (x, SImode)) goto L12;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L12; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L12;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L12;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != PC) goto L12;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != IF_THEN_ELSE) goto L12;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != LTU) goto L12;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (GET_CODE (x) != CC0) goto L12;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (GET_CODE (x) != CONST_INT) goto L12;
  if (XWINT (x, 0) != 0) goto L12;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != LABEL_REF) goto L12;
  x = XEXP (XEXP (XEXP (pat, 1), 1), 0);
  operands[2] = x;
  x = XEXP (XEXP (pat, 1), 2);
  if (GET_CODE (x) != PC) goto L12;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (3, operands));
  INSN_CODE (ins1) = 12;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L12:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L13;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != CC0) goto L13;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != COMPARE) goto L13;
  x = XEXP (XEXP (pat, 1), 0);
  operands[0] = x;
  if (! nonimmediate_operand (x, SImode)) goto L13;
  x = XEXP (XEXP (pat, 1), 1);
  operands[1] = x;
  if (! general_operand (x, SImode)) goto L13;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L13; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L13;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L13;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != PC) goto L13;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != IF_THEN_ELSE) goto L13;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != GTU) goto L13;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (GET_CODE (x) != CC0) goto L13;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (GET_CODE (x) != CONST_INT) goto L13;
  if (XWINT (x, 0) != 0) goto L13;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != LABEL_REF) goto L13;
  x = XEXP (XEXP (XEXP (pat, 1), 1), 0);
  operands[2] = x;
  x = XEXP (XEXP (pat, 1), 2);
  if (GET_CODE (x) != PC) goto L13;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (3, operands));
  INSN_CODE (ins1) = 13;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L13:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L14;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != CC0) goto L14;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != COMPARE) goto L14;
  x = XEXP (XEXP (pat, 1), 0);
  operands[0] = x;
  if (! nonimmediate_operand (x, SImode)) goto L14;
  x = XEXP (XEXP (pat, 1), 1);
  operands[1] = x;
  if (! general_operand (x, SImode)) goto L14;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L14; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L14;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L14;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != PC) goto L14;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != IF_THEN_ELSE) goto L14;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != GEU) goto L14;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (GET_CODE (x) != CC0) goto L14;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (GET_CODE (x) != CONST_INT) goto L14;
  if (XWINT (x, 0) != 0) goto L14;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != LABEL_REF) goto L14;
  x = XEXP (XEXP (XEXP (pat, 1), 1), 0);
  operands[2] = x;
  x = XEXP (XEXP (pat, 1), 2);
  if (GET_CODE (x) != PC) goto L14;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (3, operands));
  INSN_CODE (ins1) = 14;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L14:

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L15;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != CC0) goto L15;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != COMPARE) goto L15;
  x = XEXP (XEXP (pat, 1), 0);
  operands[0] = x;
  if (! nonimmediate_operand (x, SImode)) goto L15;
  x = XEXP (XEXP (pat, 1), 1);
  operands[1] = x;
  if (! general_operand (x, SImode)) goto L15;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L15; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L15;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L15;
  x = XEXP (pat, 0);
  if (GET_CODE (x) != PC) goto L15;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != IF_THEN_ELSE) goto L15;
  x = XEXP (XEXP (pat, 1), 0);
  if (GET_CODE (x) != LEU) goto L15;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 0);
  if (GET_CODE (x) != CC0) goto L15;
  x = XEXP (XEXP (XEXP (pat, 1), 0), 1);
  if (GET_CODE (x) != CONST_INT) goto L15;
  if (XWINT (x, 0) != 0) goto L15;
  x = XEXP (XEXP (pat, 1), 1);
  if (GET_CODE (x) != LABEL_REF) goto L15;
  x = XEXP (XEXP (XEXP (pat, 1), 1), 0);
  operands[2] = x;
  x = XEXP (XEXP (pat, 1), 2);
  if (GET_CODE (x) != PC) goto L15;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (3, operands));
  INSN_CODE (ins1) = 15;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L15:

  return 0;
}

rtx peep_operand[3];
