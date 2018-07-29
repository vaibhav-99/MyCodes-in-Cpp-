#include<iostream>
using namespace std;

template <class T>
class stack{
public:
 T data;
 stack *link;

/*stack* push(T,stack*);
stack* pop(stack*);
void display(stack*);*/

}
stack <stack*>*head=NULL;

stack* push(T d, stack *head)
{
 stack *temp = new stack;
 if(temp == NULL){
  cout << "Pushing failed!\n";
  return;
 }
 else{
   cout << "Pushed!\n";
   temp->data = d;
   temp->link = NULL;

   if(head == NULL)
    return temp;

   else{
    temp->link = head;
    return temp;
   }
 }
}

stack* pop(stack *head)
{
 if(head == NULL){
  cout << "Stack Empty!\n";
  return head;
 }
stack *temp = head->link;
cout << "Value Popped : "<< head->data;
delete head;
return temp;
 cout << endl;
}

void display(stack *head)
{
 if(head == NULL){
  cout << "Stack Empty!\n";
  return head;
 }
 stack* temp = head;
 cout << "Stack(Bottom to Top ->)\n";
 while(temp!=NULL){
  cout << temp->data << " ";
  temp = temp->link;
 }
}

int main()
{
 stack <int>s1;
 head = s1.push(11,head);
 head = s1.push(22,head);
 head = s1.push(33,head);
 head = s1.pop(head);
 display(head);
return 0;
}
