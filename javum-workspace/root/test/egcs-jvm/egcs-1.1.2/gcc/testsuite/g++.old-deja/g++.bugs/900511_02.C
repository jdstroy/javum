// g++ 1.37.1 bug 900511_02

// g++ does not properly shadow names of types with names of data members
// in cases where the type names in question are used in the context of
// formal parameters lists for member functions.

// keywords: typedef names, shadowing, scope, formal parameter list

// cfront 2.0 passes this test.

enum enum0 { enum0_value_0 };	// ERROR - 

struct struct0 {
  int enum0;			// ERROR - 
  void member_function (enum0 e);
};

void class0::member_function (enum0 e) {	// ERROR - 
}

int main () { return 0; }
