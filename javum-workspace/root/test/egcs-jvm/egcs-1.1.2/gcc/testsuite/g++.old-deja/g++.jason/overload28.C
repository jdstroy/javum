// PRMS Id: 6056

struct Foo {
  Foo()           { }		// ERROR - candidate
  Foo(int i = 25) { }		// ERROR - candidate
};

main()
{
  Foo* f1 = new Foo();		// ERROR - ambiguous
}
