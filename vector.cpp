#include<iostream>
#include<vector>
using namespace std;

int main()
{
 vector<int> v={10,20,30};
 vector<int>::iterator i;

 for(i=v.begin() ; i!=v.end() ; i++)
  cout << *i << " " << endl;

int a[] = {11,22,33},i1;
for(i1=0 ; a[i1]!='\0' ; i1++)
 cout << a[i1] << " ";
cout << a[i1];
return 0;
}
