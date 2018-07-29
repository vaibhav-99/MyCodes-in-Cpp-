#include<iostream>
using namespace std;

class complex
{
  int r,i;
  public:
    complex(){}
    complex(int rr,int ii):r(rr),i(ii){}
   complex& operator+(complex);
   void show();
};

complex& complex :: operator+(complex c)
{
  r = r+c.r;
  i = i+c.i;
  return *this;
}
void complex::show()
{
 cout << "Real: "<<r<<endl<<"Imag: "<<i<<endl;
}

int* fun1()
{
  int x=10;
  int *p=&x;
  return p;
}

int fun2()                  //difference b/w int and int&
{
  int x=10;
  int *p=&x;
  return *p;
}

int* fun3(int* arr)
{
  return arr;
}

main()
{
 complex c1(2,3),c2(4,5);
 complex c3;
 c3 = c1 + c2;
 c3.show();
 int x = 10;
 int *p = &x;
 int a[]={1,2,3,4,5};
 cout<<"Fun1:"<<fun1()<<endl<<"Fun2: "<<fun2()<<endl;
 cout<<*(&p)<<" "<<&x<<endl;                               // *(&p) = &(*p)
 cout<<"Fun3 :"<<fun3(a);
}
