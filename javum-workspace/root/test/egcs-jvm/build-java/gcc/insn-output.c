/* Generated automatically by the program `genoutput'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "flags.h"
#include "rtl.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "real.h"
#include "insn-config.h"

#include "conditions.h"
#include "insn-flags.h"
#include "insn-attr.h"

#include "insn-codes.h"

#include "recog.h"

#include "output.h"

static char *
output_0 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_0[] = {
    "iload %0\n\tifeq %l1\n",
    "%K0\n\tifeq %l1\n",
  };
  return strings_0[which_alternative];
}

static char *
output_1 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_1[] = {
    "iload %0\n\tifne %l1\n",
    "%K0\n\tifne %l1\n",
  };
  return strings_1[which_alternative];
}

static char *
output_2 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_2[] = {
    "iload %0\n\tiflt %l1\n",
    "%K0\n\tiflt %l1\n",
  };
  return strings_2[which_alternative];
}

static char *
output_3 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_3[] = {
    "iload %0\n\tifgt %l1\n",
    "%K0\n\tifgt %l1\n",
  };
  return strings_3[which_alternative];
}

static char *
output_4 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_4[] = {
    "iload %0\n\tifle %l1\n",
    "%K0\n\tifle %l1\n",
  };
  return strings_4[which_alternative];
}

static char *
output_5 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_5[] = {
    "iload %0\n\tifge %l1\n",
    "%K0\n\tifge %l1\n",
  };
  return strings_5[which_alternative];
}

static char *
output_6 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_6[] = {
    "iload %0\n\tiload %1\n\tif_icmpeq %l2\n",
    "iload %0\n\t%K1\n\tif_icmpeq %l2\n",
    "%K0\n\tiload %0\n\tif_icmpeq %l2\n",
    "%K0\n\t%K1\n\tif_icmpeq %l2\n",
  };
  return strings_6[which_alternative];
}

static char *
output_7 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_7[] = {
    "iload %0\n\tiload %1\n\tif_icmpne %l2\n",
    "iload %0\n\t%K1\n\tif_icmpne %l2\n",
    "%K0\n\tiload %0\n\tif_icmpne %l2\n",
    "%K0\n\t%K1\n\tif_icmpne %l2\n",
  };
  return strings_7[which_alternative];
}

static char *
output_8 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_8[] = {
    "iload %0\n\tiload %1\n\tif_icmplt %l2\n",
    "iload %0\n\t%K1\n\tif_icmplt %l2\n",
    "%K0\n\tiload %0\n\tif_icmplt %l2\n",
    "%K0\n\t%K1\n\tif_icmplt %l2\n",
  };
  return strings_8[which_alternative];
}

static char *
output_9 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_9[] = {
    "iload %0\n\tiload %1\n\tif_icmpgt %l2\n",
    "iload %0\n\t%K1\n\tif_icmpgt %l2\n",
    "%K0\n\tiload %0\n\tif_icmpgt %l2\n",
    "%K0\n\t%K1\n\tif_icmpgt %l2\n",
  };
  return strings_9[which_alternative];
}

static char *
output_10 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_10[] = {
    "iload %0\n\tiload %1\n\tif_icmpge %l2\n",
    "iload %0\n\t%K1\n\tif_icmpge %l2\n",
    "%K0\n\tiload %0\n\tif_icmpge %l2\n",
    "%K0\n\t%K1\n\tif_icmpge %l2\n",
  };
  return strings_10[which_alternative];
}

static char *
output_11 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_11[] = {
    "iload %0\n\tiload %1\n\tif_icmple %l2\n",
    "iload %0\n\t%K1\n\tif_icmple %l2\n",
    "%K0\n\tiload %0\n\tif_icmple %l2\n",
    "%K0\n\t%K1\n\tif_icmple %l2\n",
  };
  return strings_11[which_alternative];
}

static char *
output_12 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_12[] = {
    "iload %0\n\ti2l\n\tldc2_w 4294967295\n\tland\n\tiload %1\n\ti2l\n\tldc2_w 4294967295\n\tland\n\tlcmp\n\tiflt %l2\n",
    "iload %0\n\ti2l\n\tldc2_w 4294967295\n\tland\n\t%K1\n\ti2l\n\tldc2_w 4294967295\n\tland\n\tlcmp\n\tiflt %l2\n",
    "%K0\n\ti2l\n\tldc2_w 4294967295\n\tland\n\tiload %0\n\ti2l\n\tldc2_w 4294967295\n\tland\n\tlcmp\n\tiflt %l2\n",
    "%K0\n\ti2l\n\tldc2_w 4294967295\n\t%K1\n\ti2l\n\tldc2_w 4294967295\n\tland\n\tlcmp\n\tiflt %l2\n",
  };
  return strings_12[which_alternative];
}

static char *
output_13 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_13[] = {
    "iload %0\n\ti2l\n\tldc2_w 4294967295\n\tland\n\tiload %1\n\ti2l\n\tldc2_w 4294967295\n\tland\n\tlcmp\n\tifgt %l2\n",
    "iload %0\n\ti2l\n\tldc2_w 4294967295\n\tland\n\t%K1\n\ti2l\n\tldc2_w 4294967295\n\tland\n\tlcmp\n\tifgt %l2\n",
    "%K0\n\ti2l\n\tldc2_w 4294967295\n\tland\n\tiload %0\n\ti2l\n\tldc2_w 4294967295\n\tland\n\tlcmp\n\tifgt %l2\n",
    "%K0\n\ti2l\n\tldc2_w 4294967295\n\t%K1\n\ti2l\n\tldc2_w 4294967295\n\tland\n\tlcmp\n\tifgt %l2\n",
  };
  return strings_13[which_alternative];
}

static char *
output_14 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_14[] = {
    "iload %0\n\ti2l\n\tldc2_w 4294967295\n\tland\n\tiload %1\n\ti2l\n\tldc2_w 4294967295\n\tland\n\tlcmp\n\tifge %l2\n",
    "iload %0\n\ti2l\n\tldc2_w 4294967295\n\tland\n\t%K1\n\ti2l\n\tldc2_w 4294967295\n\tland\n\tlcmp\n\tifge %l2\n",
    "%K0\n\ti2l\n\tldc2_w 4294967295\n\tland\n\tiload %0\n\ti2l\n\tldc2_w 4294967295\n\tland\n\tlcmp\n\tifge %l2\n",
    "%K0\n\ti2l\n\tldc2_w 4294967295\n\t%K1\n\ti2l\n\tldc2_w 4294967295\n\tland\n\tlcmp\n\tifge %l2\n",
  };
  return strings_14[which_alternative];
}

static char *
output_15 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_15[] = {
    "iload %0\n\ti2l\n\tldc2_w 4294967295\n\tland\n\tiload %1\n\ti2l\n\tldc2_w 4294967295\n\tland\n\tlcmp\n\tifle %l2\n",
    "iload %0\n\ti2l\n\tldc2_w 4294967295\n\tland\n\t%K1\n\ti2l\n\tldc2_w 4294967295\n\tland\n\tlcmp\n\tifle %l2\n",
    "%K0\n\ti2l\n\tldc2_w 4294967295\n\tland\n\tiload %0\n\ti2l\n\tldc2_w 4294967295\n\tland\n\tlcmp\n\tifle %l2\n",
    "%K0\n\ti2l\n\tldc2_w 4294967295\n\t%K1\n\ti2l\n\tldc2_w 4294967295\n\tland\n\tlcmp\n\tifle %l2\n",
  };
  return strings_15[which_alternative];
}

static char *
output_16 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_16[] = {
    "iload %0\n\tiload %1\n\tisub\n\tistore 15\n",
    "iload %0\n\t%K1\n\tisub\n\tistore 15\n",
    "%K0\n\tiload %0\n\tisub\n\tistore 15\n",
    "%K0\n\t%K1\n\tisub\n\tistore 15\n",
  };
  return strings_16[which_alternative];
}

static char *
output_17 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_17[] = {
    "iload %1\n\tistore %0\n",
    "%K1\n\tistore %0\n",
    "aload_0\n\tgetfield %J0/memory [I\n\t%1\n\tdup2\n\tiaload\n\tbipush 8\n\tishl\n\tdup_x2\n\tpop\n\ticonst_1\n\tiadd\n\tdup2\n\tiaload\n\tbipush 16\n\tishl\n\tdup_x2\n\tpop\n\ticonst_1\n\tiadd\n\tdup2\n\tiaload\n\tbipush 8\n\tishl\n\tdup_x2\n\tpop\n\ticonst_1\n\tiadd\n\tiaload\n\tior\n\tior\n\tior\n\tistore %0\n",
    "aload_0\n\tgetfield %J0/memory [I\n\t%0\n\tdup2\n\tiload %1\n\tbipush 24\n\tishr\n\tsipush 255\n\tiand\n\tiastore\n\ticonst_1\n\tiadd\n\tdup2\n\tiload %1\n\tbipush 16\n\tishr\n\tsipush 255\n\tiand\n\tiastore\n\ticonst_1\n\tiadd\n\tdup2\n\tiload %1\n\tbipush 8\n\tishr\n\tsipush 255\n\tiand\n\tiastore\n\ticonst_1\n\tiadd\n\tiload %1\n\tsipush 255\n\tiand\n\tiastore\n",
    "aload_0\n\tgetfield %J0/memory [I\n\t%0\n\tdup2\n\t%K1\n\tbipush 24\n\tishr\n\tsipush 255\n\tiand\n\tiastore\n\ticonst_1\n\tiadd\n\tdup2\n\t%K1\n\tbipush 16\n\tishr\n\tsipush 255\n\tiand\n\tiastore\n\ticonst_1\n\tiadd\n\tdup2\n\t%K1\n\tbipush 8\n\tishr\n\tsipush 255\n\tiand\n\tiastore\n\ticonst_1\n\tiadd\n\t%K1\n\tsipush 255\n\tiand\n\tiastore\n",
  };
  return strings_17[which_alternative];
}

static char *
output_18 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_18[] = {
    "iload %1\n\tistore %0\n",
    "%K1\n\tistore %0\n",
    "aload_0\n\tgetfield %J0/memory [I\n\t%1\n\tdup2\n\tiaload\n\tbipush 8\n\tishl\n\tdup_x2\n\tpop\n\ticonst_1\n\tiadd\n\tiaload\n\tior\n\tistore %0\n",
    "aload_0\n\tgetfield %J0/memory [I\n\t%0\n\tdup2\n\tiload %1\n\tbipush 8\n\tishr\n\tsipush 255\n\tiand\n\tiastore\n\ticonst_1\n\tiadd\n\tiload %1\n\tsipush 255\n\tiand\n\tiastore\n",
    "aload_0\n\tgetfield %J0/memory [I\n\t%0\n\tdup2\n\t%K1\n\tbipush 8\n\tishr\n\tsipush 255\n\tiand\n\tiastore\n\ticonst_1\n\tiadd\n\t%K1\n\tsipush 255\n\tiand\n\tiastore\n",
  };
  return strings_18[which_alternative];
}

static char *
output_19 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_19[] = {
    "iload %1\n\tistore %0\n",
    "%K1\n\tistore %0\n",
    "aload_0\n\tgetfield %J0/memory [I\n\t%1\n\tiaload\n\tistore %0\n",
    "aload_0\n\tgetfield %J0/memory [I\n\t%0\n\tiload %1\n\tsipush 255\n\tiand\n\tiastore\n",
    "aload_0\n\tgetfield %J0/memory [I\n\t%0\n\t%K1\n\tsipush 255\n\tiand\n\tiastore\n",
  };
  return strings_19[which_alternative];
}

static char *
output_20 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_20[] = {
    "iload %1\n\tbipush 16\n\tishl\n\tbipush 16\n\tishr\n\tistore %0\n",
    "%K1\n\tbipush 16\n\tishl\n\tbipush 16\n\tishr\n\tistore %0\n",
  };
  return strings_20[which_alternative];
}

static char *
output_21 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_21[] = {
    "iload %1\n\tbipush 24\n\tishl\n\tbipush 24\n\tishr\n\tistore %0\n",
    "%K1\n\tbipush 24\n\tishl\n\tbipush 24\n\tishr\n\tistore %0\n",
  };
  return strings_21[which_alternative];
}

static char *
output_22 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_22[] = {
    "iload %1\n\tbipush 8\n\tishl\n\tbipush 8\n\tishr\n\tistore %0\n",
    "%K1\n\tbipush 8\n\tishl\n\tbipush 8\n\tishr\n\tistore %0\n",
  };
  return strings_22[which_alternative];
}

static char *
output_23 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_23[] = {
    "iload %1\n\tldc 65536\n\tiand\n\tistore %0\n",
    "%K1\n\tldc 65536\n\tiand\n\tistore %0\n",
  };
  return strings_23[which_alternative];
}

static char *
output_24 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_24[] = {
    "iload %1\n\tsipush 255\n\tiand\n\tistore %0\n",
    "%K1\n\tsipush 255\n\tiand\n\tistore %0\n",
  };
  return strings_24[which_alternative];
}

static char *
output_25 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_25[] = {
    "iload %1\n\tsipush 255\n\tiand\n\tistore %0\n",
    "%K1\n\tsipush 255\n\tiand\n\tistore %0\n",
  };
  return strings_25[which_alternative];
}

static char *
output_26 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_26[] = {
    "iload %1\n\tiload %2\n\tiadd\n\tistore %0\n",
    "iload %1\n\t%K2\n\tiadd\n\tistore %0\n",
    "%K1\n\tiload %2\n\tiadd\n\tistore %0\n",
    "%K1\n\t%K2\n\tiadd\n\tistore %0\n",
  };
  return strings_26[which_alternative];
}

static char *
output_27 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_27[] = {
    "iload %1\n\tiload %2\n\tirem\n\tistore %0\n",
    "iload %1\n\t%K2\n\tirem\n\tistore %0\n",
    "%K1\n\tiload %2\n\tirem\n\tistore %0\n",
    "%K1\n\t%K2\n\tirem\n\tistore %0\n",
  };
  return strings_27[which_alternative];
}

static char *
output_28 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_28[] = {
    "iload %1\n\tiload %2\n\tisub\n\tistore %0\n",
    "iload %1\n\t%K2\n\tisub\n\tistore %0\n",
    "%K1\n\tiload %2\n\tisub\n\tistore %0\n",
    "%K1\n\t%K2\n\tisub\n\tistore %0\n",
  };
  return strings_28[which_alternative];
}

static char *
output_29 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_29[] = {
    "iload %1\n\tiload %2\n\timul\n\tistore %0\n",
    "iload %1\n\t%K2\n\timul\n\tistore %0\n",
    "%K1\n\tiload %2\n\timul\n\tistore %0\n",
    "%K1\n\t%K2\n\timul\n\tistore %0\n",
  };
  return strings_29[which_alternative];
}

static char *
output_30 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_30[] = {
    "iload %1\n\tiload %2\n\tidiv\n\tistore %0\n",
    "iload %1\n\t%K2\n\tidiv\n\tistore %0\n",
    "%K1\n\tiload %2\n\tidiv\n\tistore %0\n",
    "%K1\n\t%K2\n\tidiv\n\tistore %0\n",
  };
  return strings_30[which_alternative];
}

static char *
output_31 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_31[] = {
    "iload %1\n\tiload %2\n\tior\n\tistore %0\n",
    "iload %1\n\t%K2\n\tior\n\tistore %0\n",
    "%K1\n\tiload %2\n\tior\n\tistore %0\n",
    "%K1\n\t%K2\n\tior\n\tistore %0\n",
  };
  return strings_31[which_alternative];
}

static char *
output_32 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_32[] = {
    "iload %1\n\tiload %2\n\tiand\n\tistore %0\n",
    "iload %1\n\t%K2\n\tiand\n\tistore %0\n",
    "%K1\n\tiload %2\n\tiand\n\tistore %0\n",
    "%K1\n\t%K2\n\tiand\n\tistore %0\n",
  };
  return strings_32[which_alternative];
}

static char *
output_33 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_33[] = {
    "iload %1\n\tiload %2\n\tixor\n\tistore %0\n",
    "iload %1\n\t%K2\n\tixor\n\tistore %0\n",
    "%K1\n\tiload %2\n\tixor\n\tistore %0\n",
    "%K1\n\t%K2\n\tixor\n\tistore %0\n",
  };
  return strings_33[which_alternative];
}

static char *
output_34 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_34[] = {
    "iload %1\n\tiload %2\n\tishr\n\tistore %0\n",
    "iload %1\n\t%K2\n\tishr\n\tistore %0\n",
    "%K1\n\tiload %2\n\tishr\n\tistore %0\n",
    "%K1\n\t%K2\n\tishr\n\tistore %0\n",
  };
  return strings_34[which_alternative];
}

static char *
output_35 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_35[] = {
    "iload %1\n\tiload %2\n\tishr\n\ticonst_1\n\tiload %2\n\tishl\n\ticonst_1\n\tisub\n\tiand\n\tistore %0\n",
    "iload %1\n\t%K2\n\tishr\n\ticonst_1\n\t%K2\n\tishl\n\ticonst_1\n\tisub\n\tiand\n\tistore %0\n",
    "%K1\n\tiload %2\n\tishr\n\ticonst_1\n\tiload %2\n\tishl\n\ticonst_1\n\tisub\n\tiand\n\tistore %0\n",
    "%K1\n\t%K2\n\tishr\n\ticonst_1\n\t%K2\n\tishl\n\ticonst_1\n\tisub\n\tiand\n\tistore %0\n",
  };
  return strings_35[which_alternative];
}

static char *
output_36 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_36[] = {
    "iload %1\n\tiload %2\n\tishl\n\tistore %0\n",
    "iload %1\n\t%K2\n\tishl\n\tistore %0\n",
    "%K1\n\tiload %2\n\tishl\n\tistore %0\n",
    "%K1\n\t%K2\n\tishl\n\tistore %0\n",
  };
  return strings_36[which_alternative];
}

static char *
output_53 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{ return (cc_prev_status.flags & CC_NO_OVERFLOW)
             ?  0 : "ble %l0%#";}
}

static char *
output_54 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{ return (cc_prev_status.flags & CC_NO_OVERFLOW)
             ?  "bpl %l0%#" : "bge %l0%#";}
}

static char *
output_55 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{ return (cc_prev_status.flags & CC_NO_OVERFLOW)
             ?  "bmi %l0%#" : "blt %l0%#";}
}

static char *
output_56 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{ return (cc_prev_status.flags & CC_NO_OVERFLOW)
             ?  0 : "bgt %l0%#";}
}

static char *
output_58 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 
   static char s[1024];	
   static char s1[40];	
   int highest=-1,i;
     /* just kill the call to __main */
     if (!strcmp(XEXP(operands[0],0),"__main")) return "";
     /* Find the highest used register */
     if (CALL_INSN_FUNCTION_USAGE (insn))
     {
       rtx link,theuse,thereg;

       for (link = CALL_INSN_FUNCTION_USAGE (insn); link != 0;
           link = XEXP (link, 1)) {
         theuse = XEXP(link,0);
         if (GET_CODE(theuse)!=USE) continue;
         thereg = XEXP(theuse,0);
         if (GET_CODE(thereg)!=REG) continue;
         if (REGNO(thereg)>highest) highest=REGNO(thereg);
       }  
     }
     strcpy(s,"aload_0\n\t");
     for (i=10; i<=highest; i++) {
       sprintf(s1,"iload %i\n\t", i);
       strcat(s,s1);
     }
     strcat(s,"invokevirtual %J0/%0(");
     for (i=10; i<=highest; i++)
       strcat(s,"I");
     strcat(s,")");
     strcat(s,"V\n");
     return s;
  
}

static char *
output_60 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 
   static char s[1024];
   static char s1[40];
   int highest=-1,i;
     /* Find the highest used register */
     if (CALL_INSN_FUNCTION_USAGE (insn))
     {  
       rtx link,theuse,thereg;
     
       for (link = CALL_INSN_FUNCTION_USAGE (insn); link != 0;
           link = XEXP (link, 1)) {
         theuse = XEXP(link,0);
         if (GET_CODE(theuse)!=USE) continue;
         thereg = XEXP(theuse,0);
         if (GET_CODE(thereg)!=REG) continue;
         if (REGNO(thereg)>highest) highest=REGNO(thereg);
       }  
     }
     strcpy(s,"aload_0\n\t");
     for (i=10; i<=highest; i++) {
       sprintf(s1,"iload %i\n\t", i);
       strcat(s,s1);
     }
     strcat(s,"invokevirtual %J0/%1(");
     for (i=10; i<=highest; i++)
       strcat(s,"I");
     strcat(s,")");
     strcat(s,"I\n\tistore %0\n");
     return s;
  
}

char * const insn_template[] =
  {
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    "goto %l0",
    "",
    "",
    "jump %R0",
    "iload 15\n\tifeq %l0\n",
    "iload 15\n\tifne %l0\n",
    "iload 15\n\tifgt %l0\n",
    "iload 15\n\tifgt %l0 ; unsigned\n",
    "iload 15\n\tiflt %l0\n",
    "iload 15\n\tiflt %l0 ; unsigned\n",
    "iload 15\n\tifge %l0\n",
    "iload 15\n\tifge %l0\n",
    "iload 15\n\tifle %l0\n",
    "iload 15\n\tifle %l0 ; unsigned\n",
    "bne %l0%#",
    "beq %l0%#",
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    "",
  };

char *(*const insn_outfun[])() =
  {
    output_0,
    output_1,
    output_2,
    output_3,
    output_4,
    output_5,
    output_6,
    output_7,
    output_8,
    output_9,
    output_10,
    output_11,
    output_12,
    output_13,
    output_14,
    output_15,
    output_16,
    output_17,
    output_18,
    output_19,
    output_20,
    output_21,
    output_22,
    output_23,
    output_24,
    output_25,
    output_26,
    output_27,
    output_28,
    output_29,
    output_30,
    output_31,
    output_32,
    output_33,
    output_34,
    output_35,
    output_36,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    output_53,
    output_54,
    output_55,
    output_56,
    0,
    output_58,
    0,
    output_60,
    0,
  };

rtx (*const insn_gen_function[]) () =
  {
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    gen_cmpsi,
    gen_movsi,
    gen_movhi,
    gen_movqi,
    gen_extendhisi2,
    gen_extendqisi2,
    gen_extendqihi2,
    gen_zero_extendhisi2,
    gen_zero_extendqisi2,
    gen_zero_extendqihi2,
    gen_addsi3,
    gen_modsi3,
    gen_subsi3,
    gen_mulsi3,
    gen_divsi3,
    gen_iorsi3,
    gen_andsi3,
    gen_xorsi3,
    gen_ashrsi3,
    gen_lshrsi3,
    gen_ashlsi3,
    gen_jump,
    gen_dummy_jump,
    gen_dummy_jump2,
    gen_indirect_jump,
    gen_beq,
    gen_bne,
    gen_bgt,
    gen_bgtu,
    gen_blt,
    gen_bltu,
    gen_bge,
    gen_bgeu,
    gen_ble,
    gen_bleu,
    0,
    0,
    0,
    0,
    0,
    0,
    gen_call,
    0,
    gen_call_value,
    0,
    gen_nop,
  };

char *insn_name[] =
  {
    "cmpsi-16",
    "cmpsi-15",
    "cmpsi-14",
    "cmpsi-13",
    "cmpsi-12",
    "cmpsi-11",
    "cmpsi-10",
    "cmpsi-9",
    "cmpsi-8",
    "cmpsi-7",
    "cmpsi-6",
    "cmpsi-5",
    "cmpsi-4",
    "cmpsi-3",
    "cmpsi-2",
    "cmpsi-1",
    "cmpsi",
    "movsi",
    "movhi",
    "movqi",
    "extendhisi2",
    "extendqisi2",
    "extendqihi2",
    "zero_extendhisi2",
    "zero_extendqisi2",
    "zero_extendqihi2",
    "addsi3",
    "modsi3",
    "subsi3",
    "mulsi3",
    "divsi3",
    "iorsi3",
    "andsi3",
    "xorsi3",
    "ashrsi3",
    "lshrsi3",
    "ashlsi3",
    "jump",
    "dummy_jump",
    "dummy_jump2",
    "indirect_jump",
    "beq",
    "bne",
    "bgt",
    "bgtu",
    "blt",
    "bltu",
    "bge",
    "bgeu",
    "ble",
    "bleu",
    "bleu+1",
    "bleu+2",
    "bleu+3",
    "call-3",
    "call-2",
    "call-1",
    "call",
    "call+1",
    "call_value",
    "call_value+1",
    "nop",
  };
char **insn_name_ptr = insn_name;

const int insn_n_operands[] =
  {
    2,
    2,
    2,
    2,
    2,
    2,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    3,
    1,
    2,
    0,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    2,
    2,
    3,
    3,
    0,
  };

const int insn_n_dups[] =
  {
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
  };

char *const insn_operand_constraint[][MAX_RECOG_OPERANDS] =
  {
    { "r,i", "", },
    { "r,i", "", },
    { "r,i", "", },
    { "r,i", "", },
    { "r,i", "", },
    { "r,i", "", },
    { "r,r,i,i", "r,i,r,i", "", },
    { "r,r,i,i", "r,i,r,i", "", },
    { "r,r,i,i", "r,i,r,i", "", },
    { "r,r,i,i", "r,i,r,i", "", },
    { "r,r,i,i", "r,i,r,i", "", },
    { "r,r,i,i", "r,i,r,i", "", },
    { "r,r,i,i", "r,i,r,i", "", },
    { "r,r,i,i", "r,i,r,i", "", },
    { "r,r,i,i", "r,i,r,i", "", },
    { "r,r,i,i", "r,i,r,i", "", },
    { "r,r,i,i", "r,i,r,i", },
    { "=r,r,r,m,m", "r,i,m,r,i", },
    { "=r,r,r,m,m", "r,i,m,r,i", },
    { "=r,r,r,m,m", "r,i,m,r,i", },
    { "=r,r", "r,i", },
    { "=r,r", "r,i", },
    { "=r,r", "r,i", },
    { "=r,r", "r,i", },
    { "=r,r", "r,i", },
    { "=r,r", "r,i", },
    { "=r,r,r,r", "r,r,i,i", "r,i,r,i", },
    { "=r,r,r,r", "r,r,i,i", "r,i,r,i", },
    { "=r,r,r,r", "r,r,i,i", "r,i,r,i", },
    { "=r,r,r,r", "r,r,i,i", "r,i,r,i", },
    { "=r,r,r,r", "r,r,i,i", "r,i,r,i", },
    { "=r,r,r,r", "r,r,i,i", "r,i,r,i", },
    { "=r,r,r,r", "r,r,i,i", "r,i,r,i", },
    { "=r,r,r,r", "r,r,i,i", "r,i,r,i", },
    { "=r,r,r,r", "r,r,i,i", "r,i,r,i", },
    { "=r,r,r,r", "r,r,i,i", "r,i,r,i", },
    { "=r,r,r,r", "r,r,i,i", "r,i,r,i", },
    { "", },
    { "", "", },
    { 0 },
    { "g", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", "", },
    { "g", "i", },
    { "", "", "", },
    { "=g", "g", "i", },
    { 0 },
  };

const enum machine_mode insn_operand_mode[][MAX_RECOG_OPERANDS] =
  {
    { VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, VOIDmode, },
    { SImode, SImode, },
    { SImode, SImode, },
    { HImode, HImode, },
    { QImode, QImode, },
    { SImode, HImode, },
    { SImode, QImode, },
    { HImode, QImode, },
    { SImode, HImode, },
    { SImode, QImode, },
    { HImode, QImode, },
    { SImode, SImode, SImode, },
    { SImode, SImode, SImode, },
    { SImode, SImode, SImode, },
    { SImode, SImode, SImode, },
    { SImode, SImode, SImode, },
    { SImode, SImode, SImode, },
    { SImode, SImode, SImode, },
    { SImode, SImode, SImode, },
    { SImode, SImode, SImode, },
    { SImode, SImode, SImode, },
    { SImode, SImode, SImode, },
    { VOIDmode, },
    { SImode, SImode, },
    { VOIDmode },
    { SImode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { QImode, SImode, },
    { SImode, SImode, },
    { VOIDmode, QImode, SImode, },
    { VOIDmode, SImode, SImode, },
    { VOIDmode },
  };

const char insn_operand_strict_low[][MAX_RECOG_OPERANDS] =
  {
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, },
    { 0, 0, },
    { 0 },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0 },
  };

extern int nonimmediate_operand ();
extern int general_operand ();
extern int register_operand ();
extern int memory_operand ();

int (*const insn_operand_predicate[][MAX_RECOG_OPERANDS])() =
  {
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { nonimmediate_operand, general_operand, },
    { general_operand, general_operand, },
    { general_operand, general_operand, },
    { general_operand, general_operand, },
    { register_operand, general_operand, },
    { register_operand, general_operand, },
    { register_operand, general_operand, },
    { register_operand, general_operand, },
    { register_operand, general_operand, },
    { register_operand, general_operand, },
    { general_operand, general_operand, general_operand, },
    { general_operand, general_operand, general_operand, },
    { general_operand, general_operand, general_operand, },
    { general_operand, general_operand, general_operand, },
    { general_operand, general_operand, general_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, register_operand, register_operand, },
    { register_operand, register_operand, general_operand, },
    { register_operand, register_operand, general_operand, },
    { register_operand, general_operand, general_operand, },
    { 0, },
    { 0, 0, },
    { 0 },
    { general_operand, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { memory_operand, general_operand, },
    { general_operand, general_operand, },
    { 0, memory_operand, general_operand, },
    { general_operand, general_operand, general_operand, },
    { 0 },
  };

const int insn_n_alternatives[] =
  {
    2,
    2,
    2,
    2,
    2,
    2,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    5,
    5,
    5,
    2,
    2,
    2,
    2,
    2,
    2,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    4,
    0,
    0,
    0,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    0,
    1,
    0,
  };
