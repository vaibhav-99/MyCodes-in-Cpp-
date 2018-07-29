#include<iostream>
using namespace std;

class complex
{
int r,i;
public:
complex(int r1, int i1)
{
 r = r1;
 i = i1;
}
friend ostream& operator<<(ostream&, complex&);
};

ostream& operator<<(ostream& s, complex &c)
{
 s << "Real Part: " << c.r << " Imaginary Part: " << c.i;
 return s;
}

int main()
{
complex c(10,20);
cout << c;
return 0;
}

