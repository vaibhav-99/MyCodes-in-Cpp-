#include<iostream>
using namespace std;

int main()
{
int n;
cin >> n;
int a[n],temp,i;
for(i=0 ; i<n ; i++)
 cin >> a[i];

for(i=0 ; i<n-1 ; i++)
{
 for(int j=0 ; j<n-i-1 ; j++)
  {
   if(a[j] > a[j+1])
    {
     temp = a[j];
     a[j] = a[j+1];
     a[j+1] = temp;
    }
  }
}

for(i=0 ; i<n ; i++)
 cout << a[i] << " ";
cout << endl;
int item,beg=0,end=n,mid=(beg+end)/2;
cin >> item;
while(beg<=end && a[mid]!=item)
{
  if(a[mid] < item)
   beg = mid+1;
  else
   end = mid-1;

  mid = (beg+end)/2;
}
if(a[mid] == item)
 cout << "Found at : " << mid+1;
else
 cout << "Not Found";
return 0;
}
