#include<iostream>
using namespace std;

class point
{
	private:
	int x,y;

	public:

	point() {}
	point(int a,int b)
	{
		x=a;
		y=b;
	}

	friend void operator++(point&,int);

	void show()
	{
		cout<<x<<" "<<y;
	}

};

void operator++(point &obj1,int a)
{
	obj1.x++;
	obj1.y++;
}

int main()
{
	point p1(10,20);
	p1++;

	p1.show();

	return 0;
}
