#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;

class test{
int x;
public:
  test(int x1) :x(x1) {}
};

namespace Code{
int Blocks=99;
}
enum stu{a,b,c=3};
int main()
{
/*test t(10);
int arr[10]={0};                // makes 1st element = {value in braces}, rest 0
for(int i=0 ; i<10 ; i++)
 cout << arr[i] << " ";
cout<<endl;
cout << Code::Blocks <<endl;
extern int x;
cout << x;*/
int *p = (int *)2;
int *q = (int *)3;
vector<int> v;
v.push_back(10);
vector<int> :: iterator i = v.begin();
int a[5] = {0};
/*for(int &i : a)
  cout << ++i;*/
//for(int i=0 ; i<c ; i++)

return 0;
}
int x=40;

