#include<iostream>
using namespace std;

int main()
{
int n,temp,num=0,r;
cin >> n;
temp = n;
while(n)
{
r = n%10;
num += r*r*r;
n/=10;
}
if(temp == num)
cout<<"Armstrong";
else
cout<<"Not Armstrong";
return 0;
}
