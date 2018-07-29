#include<bits/stdc++.h>
using namespace std;

 int main()
 {
    int n,temp, rem, num=0;
    cin>>n;
    temp=n;
    while(n!=0)
    {
        rem=n%10;
        num=num+rem*rem*rem;
        n=n/10;
    }
    if(temp==num)
        cout<<"amt";
    else
        cout<<"not amt";
 }

