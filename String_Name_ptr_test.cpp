#include<iostream>
using namespace std;

int main()
{
 char *p="Hello World";
 char *ptr=p;
 cout << p << endl;
 for( ; *ptr!='\0' ; ptr++)
 cout << *ptr << endl;
 return 0;
}
