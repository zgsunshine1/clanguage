#include <iostream>
using namespace std;
#define TEXT(str) #str
#define FUN(str) str##name()
char* Cname()
{
  return "1111";
}
int main()
{

 cout << TEXT(Hello World) << endl;
 cout << FUN(C) << endl;
  return 0;
}
