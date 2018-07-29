#include<iostream>
using namespace std;

ostream& operator:(ostream &s, string str)
{
 s << str;
 return s;
}

main()
{
 cout : "Hello World";
}
