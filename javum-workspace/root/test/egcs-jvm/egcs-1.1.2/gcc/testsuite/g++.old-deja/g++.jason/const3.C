// Bug: bar isn't emitted, which causes havoc.

extern int i;
const int bar = i;
int i = 5;

main()
{
  return bar != 5;
}
