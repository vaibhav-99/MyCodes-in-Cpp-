#include<iostream>
using namespace std;

class MyClass{
public:
static int a;

MyClass()
{
 a++;
}

};
int MyClass :: a = 0;
int main()
{
  MyClass obj1 , obj2;
  cout << MyClass::a;
  return 0;
}
