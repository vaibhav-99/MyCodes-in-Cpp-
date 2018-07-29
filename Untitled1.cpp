#include<iostream>
using namespace std;

class dist
{
int feet,inches;
public:
dist()
{
feet=0;
inches=0;
}
void convert()
{
feet=inches/12;
inches=inches%12;
}

void getdistance()
{
cin>>inches;
}

void showdistance()
{
cout << feet << inches;
}
};

int main()
{
dist ob;
int m;
cin>>m;
ob.getdistance();
ob.convert();
ob.showdistance();
return 0;
}
