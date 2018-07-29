#include<iostream>
using namespace std;

struct node{
int data;
node *link;
} *head = NULL;

node *insert(int d , node *h)
{
 node *newnode = new node;                    // node(); is same as node;
 if(newnode == NULL)
 {
   cout << "Insertion Failed\n";
   return 0;
 }
 newnode->data = d;
 newnode->link = NULL;

 if(h==NULL)
  return newnode;

 while(h->link!=NULL)
  h = h->link;

 h->link = newnode;
 return newnode;
}

void display(node *h)
{
 if(h == NULL)
 {
   cout << "Linked List Empty!\n";
   return;
 }
 while(h!=NULL)
 {
   cout << h->data << " ";
   h = h->link;
 }
 cout << endl;
}

node *reverse(node *h)
{
  if(h==NULL)
  {
    cout << "Linked List Empty!";
    return 0;
  }
  node *prev=NULL,*current=h,*next;
  while(current!=NULL)
  {
    next = current->link;
    current->link = prev;
    prev = current;
    current = next;
  }
  cout << "Reversed!\n";
  return prev;
}

int main()
{
int ch,val;
 do{
  cout << "1)Insert\n2)Reverse\n3)Display\n4)Exit\n";
  cin >> ch;
  switch(ch)
   {
     case 1: cout << "Enter Value to be Inserted :";
             cin >> val;
             head = insert(val,head);
             break;

     case 2: head = reverse(head);
             break;

     case 3: display(head);
             break;
   }
  }
 while(ch!=4);
return 0;
}
