#include<iostream>
using namespace std;

class Base1
{
public:
Base1()
{
  cout << "Base1" << endl;
}
};

class Base2
{
   public:
   Base2()
   {
     cout << "Base2" << endl;
   }
};

class derived : public Base2,public Base1             // order depends!
{
  public:
  derived()
   {
    cout << "Derived" << endl;
   }
};
int main()
{
   derived d;
    return 0;
}
