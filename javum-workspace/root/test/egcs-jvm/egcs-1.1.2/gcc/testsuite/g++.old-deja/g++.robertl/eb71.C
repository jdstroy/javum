// Build don't link: 
typedef unsigned int size_t;

class   A {

public:
  void          operator delete(void*, size_t);
  void*         operator new(size_t);
};

class   B   : public A  {
friend class   D;

  B();
  unsigned      counter;
};

class   D {

  int                   ins( B*&);
};                    //WARNING - only private members

int
D::ins( B*& tempN)
{
  unsigned i;

  if (i == 10) {
  }
  else {
  }

  tempN = new B();
  tempN->counter = 20;

  return 0;
}
