// Copying into an object directly is a lose according to tiemann.
// Deleting an object many times is a lose.
// prms-id: 783

extern "C" void printf (char *, ...);
extern "C" void exit (int);

class C {
  int i;
public:
  C() {
    i = 1;
  }
  ~C() {
    if (i != 1) {
      exit(1);
    }
    i = 0;
  }
};

main(int argc, char**argv) {
  C c;
  c = C();
  return 0;
}
