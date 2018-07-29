#include <iostream>
using namespace std;

class ShalloC
{
//Sample 01: Private Data Member
private:
    int *x;

public:
    //Sample 02: Constructor with single parameter
    ShalloC(int m)
    {
        x = new int;
        *x = m;
    }

    //Sample 08: Introduce Copy Constructor and perform Deep Copy
    ShalloC(const ShalloC &obj)
    {
      x = new int;
     *x = obj.GetX();
    }

    //Sample 03: Get and Set Functions
    int GetX() const           //only const objects can call const functions
    {
        return *x;
    }
    void SetX(int m)
    {
        *x = m;
    }

    //Sample 04: Print Function
    void PrintX()
    {
        cout << "Int X=" << *x << endl;
    }

    //Sample 05: DeAllocate the heap
    ~ShalloC()
    {
        delete [] x;
    }
};

int main()
{
    //Sample 06: Create Object 1 and copy that to Object 2.
    //           Print the data member for both Object 1 & 2.
    ShalloC ob1(10);
    ShalloC ob3 = ob1 ;               // if no Copy Constructor Written, Default CC Called (Although Written Here)
    ShalloC ob2(ob1);
    ob1.PrintX();
    ob2.PrintX();
    ob3.PrintX();

    //Sample 07: Change the Data member value of Object 1
    //           And print both Object 1 and Object 2
    ob1.SetX(12);
    ob2.SetX(14);
    ob1.PrintX();
    ob2.PrintX();
    ob3.PrintX();
}
