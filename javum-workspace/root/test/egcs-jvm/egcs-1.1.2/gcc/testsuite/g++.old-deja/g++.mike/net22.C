class Parent {
public:
  Parent() {}
  Parent( char *s ) {}
};

class Child : public Parent {
};				// ERROR - called

main() {
  Child c( "String initializer" );	// ERROR - bad
  return 0;
}
