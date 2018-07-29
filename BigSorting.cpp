#include <iostream>
using namespace std;

void bigSorting(long long int a[],int n) {
    // Complete this function
    int i,ptr;
    long long int temp;

    long long int max=a[0];
    for(i=0 ; i<n ; i++)
     max = (a[i] > max) ? a[i] : max;

     for(i=0 ; i<n ; i++)
      if(a[i] == max)
        break;

   temp = a[0];
   a[0] = a[i];
   max = a[0];

    for(i=0 ; i<n-2 ; i++)
    {
       for(ptr=0 ; ptr<n-2-i ; ptr++)
       {
         if(a[ptr] > a[ptr+1])
         {
           temp = a[ptr+1];
           a[ptr+1] = a[ptr];
           a[ptr] = temp;
         }
       }
    }
}

int main() {
    int n;
    cin >> n;
    long long int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    bigSorting(arr,n);
    /*for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? "\n" : "");
    }*/

   // cout << endl;

for(int i=0 ; i<n ; i++)
      cout << arr[i] << endl;
    return 0;
}
