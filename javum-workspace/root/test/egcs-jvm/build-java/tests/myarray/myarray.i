# 1 "myarray.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "myarray.c"



void main(int b,int c) {
int d[65],i;
  for (i=0; i<65; i++)
    d[i]=i*9-i/2;
  for (i=0; i<65; i++)
    printf("%i ",d[i]);
  printf("\n");
}
