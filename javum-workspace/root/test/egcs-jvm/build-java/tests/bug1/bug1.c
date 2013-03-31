/* @#Copyright */
/* @#License: */

/* File:	bug1.c
 * Purpose:	Demonstrate compiler bug.
 * Author:	Brett Wuth
 * Created:	2002-12-30
 *
 * Initials:
 *	BCW - Brett Wuth
 *		@#[ContactWuth:
 *		Phone: +1 403 627-2460
 *		E-mail: support@castrov.cuug.ab.ca, wuth@acm.org]
 *
 * HISTORY:
 * $Log:$
 * @#[BasedOnTemplate: template.c version 3]
 */

/* Produces global.s

---cut---
Bug1LC0:
	.ascii "\0"
Bug1_g:
	.uaword symrefBug1LC0end
Bug1LC1:
Bug1LC2:
	.ascii "okay\12\0"
---cut---

Bug1LC1 should be:

Bug1LC1:
	.ascii "testing bug 1...\12\0"

The source of the bug appears to be in jvm.h my_inhibit_stringout
being set to 1 by the call to STRIP_NAME_ENCODING during the output of
symrefBug1LC0end.

I think what is intended with the TARGET_USED_STRINGS feature, is that
the supression be activated by the output of the label,
e.g. 'Bug1LC1:'.  However the code as currently written doesn't seem
to trigger on that.  I also suspect there will be a problem with data
segment to data segment references.  E.g., is Bug1LC0 to be supressed
because it is only accessed by Bug1_g.

 */

#include <stdio.h>

char *g = "";

void main(int argc,char **argv) 
{
  char f[5];

  printf( "testing bug 1...\n" );
  f[0] = g[0];
  printf( "okay\n" );
}


/*EOF*/
