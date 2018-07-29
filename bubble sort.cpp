#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],temp,swap=0;
    for(int i=0;j<n;j++)
      cin >> a[i];
    for(int i=0;i<n-1;i++)
    {
      int ptr=0;
      while(ptr<n-i-1)
      {
        if(a[ptr]>a[ptr+1])
        {
          swap++;
          temp=a[ptr];
          a[ptr]=a[ptr+1];
          a[ptr+1]=temp;
        }
         ptr++;
      }
    }
   cout<<"Array is sorted in "<<swap<<" swaps."<<endl;
   cout<<"First Element: "<<a[0]<<"\nLast Element: "<<a[n-1];
    return 0;
}
