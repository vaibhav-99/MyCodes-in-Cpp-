#include<iostream>
using namespace std;
int main(){
   /* int a[][6]={{1, 1, 1, 0, 0, 0},
                {0, 1, 0, 0, 0, 0},
                {1 ,1, 1 ,0 ,0 ,0},
                {0, 0, 2 ,4, 4, 0},
                {0 ,0, 0, 2, 0, 0},
                {0 ,0, 1, 2, 4, 0}};
    /*for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> a[arr_i][arr_j];
       }
    }*/

    int a[][6] =   {{1, 2, 3, 0, 0},
                    {0, 0, 0, 0, 0},
                    {2, 1, 4, 0, 0},
                    {0, 0, 0, 0, 0},
                    {1, 1, 0, 1, 0}};
    int sum=0,max=0;
    for(int i=0;i<4;i++)
    {
      for(int j=0;j<4;j++)
       sum=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
    if(sum>=max)
      max=sum;

     sum=0;
    }
    cout<<max;
    return 0;
}
