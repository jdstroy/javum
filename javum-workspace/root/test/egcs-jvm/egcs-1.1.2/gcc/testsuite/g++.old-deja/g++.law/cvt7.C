// GROUPS passed conversions
// cvt file
// From: krste@icsi.berkeley.edu (Krste Asanovic)
// Date: Mon, 24 Aug 92 19:05:10 PDT
// Message-Id: <9208250205.AA26351@icsib43.ICSI.Berkeley.EDU>
// Subject: implicit int. convs. from member refs. in switch expressions

#include <stream.h>
#include <stdio.h>

class A
{
public:
    A(int j) { i = j; }
    A(A& a) { i = a.i; }
    operator int() { return i; }

    void assign(int v) { i = v; }
    int i;
};

class B
{
public:
    B(A& inArg) : in(inArg), out(0) {}

    A& in;
    A out;

    void run();
};

void
B::run()
{
    // I get a "switch quantity not an integer" error for this statement.
    switch (in)
    // Replacing above with "switch (int(in))" removes the error.
    {
    case 0:
        out = 1;
        break;
    default:
        out = 0;
        break;
    }
}

main()
{
    A a(1);

    A& ar = a;

    A& ar2 = ar;

    // ....but no errors for this switch statement.
    switch (ar2)
    {
    case 1:
	printf ("PASS\n");
        break;
    default:
	printf ("FAIL\n");
    }

    B b(a);
    a.assign(3);
    b.run();
    a.assign(0);
    b.run();

    return 0;
}
