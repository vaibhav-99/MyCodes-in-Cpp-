#include<iostream>
using namespace std;

int main()
{
int x=0;
try
 {
  if(x==0)
    throw x;
 }
 catch(int x)
  {
    cout << "Exception Caught\n";
  }
  cout << "Hello\n";
 return 0;
}
