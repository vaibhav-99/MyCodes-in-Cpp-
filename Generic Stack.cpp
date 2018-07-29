#include<iostream>
using namespace std;

template <class T>
class Stack{
T stack[100];
int top;
public:
  Stack()
  {
   top = -1;
  }
 void push(T data)
 {
   if(top==100-1)
    cout << "Overflow\n";
   else
  {
   top++;
   stack[top] = data;
   cout << "Pushed !\n";
   }
 }

 T pop()
 {
  if(top<0)
  {
   cout << "Stack Empty!\n";
   return -1;
  }
  else {
  T temp = stack[top];
  top--;
  return temp;
  }
 }

 void display()
 {
   if(top < 0)
    cout << "Stack Empty!\n";
   else
  {
    cout << "Stack (Bottom to Top ->)\n";

    for(int i=0 ; i<=top ; i++)
      cout << stack[i] << endl;

    cout << endl;
  }
 }
};

int main()
{
 Stack <int>s1;
 s1.push(11);
 s1.push(22);
 s1.push(33);
 cout << "Value Popped :" << s1.pop()<<endl;
 s1.display();
}
