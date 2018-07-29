#include<iostream>
using namespace std;

class student{
public:
string name;
int age;
student():age(12),name("ABCD"){}
};

int main()
{
 student s1;
 cout << s1.age << " " << s1.name;
 return 0;
}
