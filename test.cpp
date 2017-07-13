#include <iostream>
using namespace std;
class Cbase
{
public:
  virtual void Method(int a, int b) = 0;
  void Method(int a)
  {
    cout << " this is Method in Cbase" << a << endl;
  }
};

class Cderive:public Cbase
{
public:
  void Method(int a,int b)
  {
    cout<<"this is polymorphic Method" << a << b << endl;
  }
  using Cbase::Method;
};
template <int T>
int fun()
{
  return T;
}
int fun1(int T)
{
 return T;
}
class B
{
public:
  void  Method(int a)
  {
    cout <<"this is Method in B!"<< a <<endl;
  }
};
int main()
{
  Cderive c;
  c.Method(1, 2);
  c.Method(3);
  return 0;
}
