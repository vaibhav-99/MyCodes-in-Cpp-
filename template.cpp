#include<iostream>
using namespace std;

template <class T>
T mymax(T a, T b)
{
  return ((a>b) ? a : b);
}

template <class T>
class myclass
{
  T a;
  public:
   T func(T b)
    {
      a = b;
      return a+10;
    }
};
int main()
{
 cout << mymax(3.2,5.0) << endl;
 myclass <int>obj;
 cout << obj.func(10);
 return 0;
}
