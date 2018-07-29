#include<iostream>
using namespace std;

void sort(int a[] , int k , int size)
{
int min_a = a[k] , index = k , temp;
for(int i=k ; i<size ; i++)
 {
   if(a[i] < min_a)
   {
    min_a = a[i];
    index = i;
   }
 }
temp = a[k];
a[k] = a[index];
a[index] = temp;
}

int main()
{
 int size, min_arr, temp;
 cout << "Enter Size of Array : ";
 cin >> size;
 int a[size];
 cout << "Enter Elements : ";

 for(int i=0 ; i<size ; i++)
  cin >> a[i];

 for(int i=0 ; i<size ; i++)
   sort(a,i,size);

 cout << "Sorted Array :";
 for(int i=0 ; i<size ; i++)
  cout << a[i] << " ";

return 0;
}
