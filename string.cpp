#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
     int j,i=4;
     double k,d=4.0;
     string s1,s="HackerRank ";

    cin>>j>>k;
    cin.ignore();
    getline(cin,s1);

    cout<<i+j<<endl;

    cout<<fixed<<setprecision(1)<<d+k<<endl;
 //   s.append(s1);
   cout<<s+s1;
return 0;
}
