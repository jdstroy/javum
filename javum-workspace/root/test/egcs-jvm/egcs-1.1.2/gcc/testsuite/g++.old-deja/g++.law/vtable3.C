// GROUPS passed vtable
// vtable file
// From: Pete Bevin <pete@deng.icl.co.uk>
// Date:     Mon, 28 Nov 1994 19:57:53 +0000 (GMT)
// Subject:  g++-2.6.2: Virtual inheritance causes incorrect padding
// Message-ID: <Pine.SOL.3.91.941128194453.7510A-100000@gabriel>

extern "C" void printf (char *, ...);

struct A {
};


struct B : virtual A {
   public:
      int b;
};


main()
{
    B blist[10];
    printf ("PASS\n");
}
