// Build don't link: 
// GROUPS passed visibility
class bottom
{
public:
  int b;
};
class middle : private bottom
{
public:
  void foo () { b; }
};
class top : public middle
{
public:
  void bar () { b; }// ERROR - .*
};
