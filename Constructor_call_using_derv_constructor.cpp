#include<iostream>
using namespace std;

class base
{
 public:
 base()
 {
 cout<<"Base Constructor\n";
 }
void func(){ cout << "Base func\n"; }
};

class derived : public base
{
 public:
 derived():func()
 {
  cout<<"Derived Constructor\n";
 }

 using base::func;
 void func(){ cout << "Derived func\n"; }
};

int main()
{
 derived d;
 d.func();
 return 0;
}
