#include<iostream>
using namespace std;

class triangle
{
  protected:
  int b,h;

  public:
  triangle(){}
  triangle(int a1, int b1)
   {
     b = a1;
     h = b1;
   }

   float area()
   {
     return (float)0.5*b*h;
   }
};

class equi : public triangle
{
   public:
   equi(int a1,int b1) :triangle(a1,b1)
   {
     b = a1;
     h = b1;
   }
   float area()
   {
    return (float)0.5*b*h;
   }
};

main()
{
  equi e(10,2);
  cout << e.area();
}
