#include<iostream>
using namespace std;

class A
{
int a;
protected:
int b;
friend void print(A);
public:
int c;
A(int a, int b1, int c1):a(a),b(b1),c(c1) {cout<<"Parameter Base\n";}
A(){cout<<"Default\n";}

};

class B : public A
{
  public:
  int a;
  B(){}
  B(int a1)/*:A(10,20,30)*/{a = a1;cout<<"Parameter Derived\n"<< c << endl;}
  void foo()
  {
    cout << "Derived\n";
  }
};

void print(A a)
{
 cout << endl << a.a << " " << a.b << " " << a.c;
}

int main()
{
 /*A a(10,20,30);
 a.foo();
 print(a);*/
(new B(99))->foo();
cout << (new B(99))->a;
 return 0;
}
