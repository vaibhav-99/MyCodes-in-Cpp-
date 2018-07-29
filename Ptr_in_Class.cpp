#include <iostream>
using namespace std;
class myclass
{
int *p;
int a;
public:
myclass()
{
cout << "constructor called";
}
};

int main()
{
myclass *obj = new myclass;
return 0;
}
