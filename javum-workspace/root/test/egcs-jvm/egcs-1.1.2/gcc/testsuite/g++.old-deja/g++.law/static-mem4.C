// Build don't link: 
// GROUPS passed static-mem
struct test {
  void test_member() {
    static test& ds = *this;    // FIX: static test* ds = this;
  }
};


main()
{
  test t;
}
