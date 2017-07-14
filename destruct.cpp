#include <iostream>

class Base 
{
public:
  virtual ~Base()
  {
    std::cout << "Base\n";
  }
};
class Derived: public Base { public: ~Derived() { std::cout << "Aargh\n"; } };

int main() {
  Base* b = new Derived();
  Derived* d = new Derived();

  delete d;
  delete b;
}
