// GROUPS passed ARM-compliance
#include <stdio.h>
#include <stdlib.h>

inline void *operator new(size_t, void *place) { return place; }
void*     malloc(size_t);
void      free(void*);

main()
{
  int* p = (int*) malloc(sizeof(int));
  (void) new (p) int(1);
  p->int::~int();
  free(p);
  printf ("PASS\n");
}
