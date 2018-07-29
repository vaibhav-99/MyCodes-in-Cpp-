#include<iostream>
using namespace std;

class Complex
{
private:
    int real, imag;
public:
    Complex(int r = 0, int i = 0) :real(r),imag(i) {}
    void print() { cout << real << " + i" << imag << endl; }

    Complex operator+(Complex const &obj)
     {
       return Complex(this->real+obj.real, this->imag+obj.imag);
     }

    void operator=(Complex const &obj)        // kinda Copy Constructor
     {
       this->real = obj.real;
       this->imag = obj.imag;
     }
     void modify()
     {
       real++;
       imag++;
     }

};

int main()
{
  Complex c1(10,20),c2(11,22),c5;
  Complex c3 = c1 + c2;
  Complex c4 = c3;
  c3.print();
  c4.print();
  c4.modify();
  c3.print();
  c4.print();
  c5.print();
  return 0;
}
