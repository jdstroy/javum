// Build don't link:
// GROUPS passed templates
template <class T>
void foo(T, T*);


void bar()
{
  double d;
  (*((void (*)(int, double*)) &foo<int>))(3, &d);
}
