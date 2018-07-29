#include<iostream>
using namespace std;

int main()
{
int n,rem,temp,num=0;
cin >> n;
temp = n;
while(n)
{
num = num*10 + n%10;
n/=10;
}
if(temp == num)
cout<<"Palindrome";
else
cout<<"Not Palindrome";
return 0;
}
