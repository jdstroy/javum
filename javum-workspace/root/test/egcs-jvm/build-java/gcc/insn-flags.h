/* Generated automatically by the program `genflags'
from the machine description file `md'.  */

#define HAVE_cmpsi 1
#define HAVE_movsi 1
#define HAVE_movhi 1
#define HAVE_movqi 1
#define HAVE_extendhisi2 1
#define HAVE_extendqisi2 1
#define HAVE_extendqihi2 1
#define HAVE_zero_extendhisi2 1
#define HAVE_zero_extendqisi2 1
#define HAVE_zero_extendqihi2 1
#define HAVE_addsi3 1
#define HAVE_modsi3 1
#define HAVE_subsi3 1
#define HAVE_mulsi3 1
#define HAVE_divsi3 1
#define HAVE_iorsi3 1
#define HAVE_andsi3 1
#define HAVE_xorsi3 1
#define HAVE_ashrsi3 1
#define HAVE_lshrsi3 1
#define HAVE_ashlsi3 1
#define HAVE_jump 1
#define HAVE_dummy_jump 1
#define HAVE_dummy_jump2 1
#define HAVE_indirect_jump 1
#define HAVE_beq 1
#define HAVE_bne 1
#define HAVE_bgt 1
#define HAVE_bgtu 1
#define HAVE_blt 1
#define HAVE_bltu 1
#define HAVE_bge 1
#define HAVE_bgeu 1
#define HAVE_ble 1
#define HAVE_bleu 1
#define HAVE_call 1
#define HAVE_call_value 1
#define HAVE_nop 1

#ifndef NO_MD_PROTOTYPES
extern rtx gen_cmpsi            PROTO((rtx, rtx));
extern rtx gen_movsi            PROTO((rtx, rtx));
extern rtx gen_movhi            PROTO((rtx, rtx));
extern rtx gen_movqi            PROTO((rtx, rtx));
extern rtx gen_extendhisi2      PROTO((rtx, rtx));
extern rtx gen_extendqisi2      PROTO((rtx, rtx));
extern rtx gen_extendqihi2      PROTO((rtx, rtx));
extern rtx gen_zero_extendhisi2 PROTO((rtx, rtx));
extern rtx gen_zero_extendqisi2 PROTO((rtx, rtx));
extern rtx gen_zero_extendqihi2 PROTO((rtx, rtx));
extern rtx gen_addsi3           PROTO((rtx, rtx, rtx));
extern rtx gen_modsi3           PROTO((rtx, rtx, rtx));
extern rtx gen_subsi3           PROTO((rtx, rtx, rtx));
extern rtx gen_mulsi3           PROTO((rtx, rtx, rtx));
extern rtx gen_divsi3           PROTO((rtx, rtx, rtx));
extern rtx gen_iorsi3           PROTO((rtx, rtx, rtx));
extern rtx gen_andsi3           PROTO((rtx, rtx, rtx));
extern rtx gen_xorsi3           PROTO((rtx, rtx, rtx));
extern rtx gen_ashrsi3          PROTO((rtx, rtx, rtx));
extern rtx gen_lshrsi3          PROTO((rtx, rtx, rtx));
extern rtx gen_ashlsi3          PROTO((rtx, rtx, rtx));
extern rtx gen_jump             PROTO((rtx));
extern rtx gen_dummy_jump       PROTO((rtx, rtx));
extern rtx gen_dummy_jump2      PROTO((void));
extern rtx gen_indirect_jump    PROTO((rtx));
extern rtx gen_beq              PROTO((rtx));
extern rtx gen_bne              PROTO((rtx));
extern rtx gen_bgt              PROTO((rtx));
extern rtx gen_bgtu             PROTO((rtx));
extern rtx gen_blt              PROTO((rtx));
extern rtx gen_bltu             PROTO((rtx));
extern rtx gen_bge              PROTO((rtx));
extern rtx gen_bgeu             PROTO((rtx));
extern rtx gen_ble              PROTO((rtx));
extern rtx gen_bleu             PROTO((rtx));
extern rtx gen_nop              PROTO((void));

#ifdef MD_CALL_PROTOTYPES
extern rtx gen_call             PROTO((rtx, rtx));
extern rtx gen_call_value       PROTO((rtx, rtx, rtx));

#else /* !MD_CALL_PROTOTYPES */
extern rtx gen_call ();
extern rtx gen_call_value ();
#endif /* !MD_CALL_PROTOTYPES */

#else  /* NO_MD_PROTOTYPES */
extern rtx gen_cmpsi ();
extern rtx gen_movsi ();
extern rtx gen_movhi ();
extern rtx gen_movqi ();
extern rtx gen_extendhisi2 ();
extern rtx gen_extendqisi2 ();
extern rtx gen_extendqihi2 ();
extern rtx gen_zero_extendhisi2 ();
extern rtx gen_zero_extendqisi2 ();
extern rtx gen_zero_extendqihi2 ();
extern rtx gen_addsi3 ();
extern rtx gen_modsi3 ();
extern rtx gen_subsi3 ();
extern rtx gen_mulsi3 ();
extern rtx gen_divsi3 ();
extern rtx gen_iorsi3 ();
extern rtx gen_andsi3 ();
extern rtx gen_xorsi3 ();
extern rtx gen_ashrsi3 ();
extern rtx gen_lshrsi3 ();
extern rtx gen_ashlsi3 ();
extern rtx gen_jump ();
extern rtx gen_dummy_jump ();
extern rtx gen_dummy_jump2 ();
extern rtx gen_indirect_jump ();
extern rtx gen_beq ();
extern rtx gen_bne ();
extern rtx gen_bgt ();
extern rtx gen_bgtu ();
extern rtx gen_blt ();
extern rtx gen_bltu ();
extern rtx gen_bge ();
extern rtx gen_bgeu ();
extern rtx gen_ble ();
extern rtx gen_bleu ();
extern rtx gen_nop ();
extern rtx gen_call ();
extern rtx gen_call_value ();
#endif  /* NO_MD_PROTOTYPES */
