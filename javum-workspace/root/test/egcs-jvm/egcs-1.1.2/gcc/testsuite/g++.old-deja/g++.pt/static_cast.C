// Build don't link:

template <class InputIterator, class BinaryOperation>
void accumulate(InputIterator first, 
    	         BinaryOperation binary_op) {
}


template<class R> int p( int val, R& r )
{
   return val + r;
}

template<class R> void f(R)
{
   accumulate(0, static_cast<int (*)(int, R&)>(p) );
}

main()
{
   f(0);
}
