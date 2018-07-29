#include<iostream>
using namespace std;

class MyClass
{
 int x;
 public:
 MyClass() {}
 MyClass(int x) {this->x = x;}
 /*MyClass(const MyClass &obj)
  {
    this->x = obj.x;
  }*/
 void display()
  {
    cout<<x<<endl;
  }
  void mutate(int a)
  {
    x += a;
  }
};

int main()
{
 MyClass m2=10,m3;
 m3 = m2;                     // is not Sm as m3(m2);
 m2.mutate(3);
//  m1.display();
  m2.display();
  m3.display();
}
