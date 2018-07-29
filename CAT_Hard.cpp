#include<iostream>
using namespace std;

int main()
{
int n,m,a,b,k;
cin >> n >> m;
int arr[n] = {0};
while(m--)
 {
  cin >> a >> b >> k;
  for(a=a-1; a<=b-1; a++)
    arr[a] += k;
 }
int max = arr[0];
for(int i=0; i<n; i++)
 if(arr[i] > max)
  max = arr[i];

cout << max;
return 0;
}
