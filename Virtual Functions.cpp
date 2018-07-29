#include<iostream>
using namespace std;

class base
{
  int x;
  public:
   virtual void func1(){cout<<"Base 1\n";}
           void func2(){cout<<"Base 2\n";}
};

class derived : public base
{
 public:
  void func1(){cout<<"Derived 1\n";}
  void func2(){cout<<"Derived 2\n";}
};

int main()
{
  base *b;
  derived d;
  b=&d;
  b->func1(); // Derived 1
  b->func2(); // Base 2
}
