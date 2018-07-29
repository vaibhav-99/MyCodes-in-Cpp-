#include<iostream>
using namespace std;

struct node
{
  int data;
  node *link;
}*head = NULL;

node *insert(int d, node *h)
{
  node *newnode = new node;
  newnode->link = NULL;
  newnode->data = d;
  if(h == NULL)
   return newnode;
  else
 {
  node *temp = h;
  while(h->link!=NULL)
   h = h->link;

   h->link = newnode;
   return temp;
 }
}

node *deletell(node *h)
{
  if(h==NULL)
   return 0;
 else
 {
  node *temp;
  temp = h->link;
  h->link = NULL;
  delete h;
  return temp;
 }
}

int topval(node *h)
{
  return h->data;
}
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int choice,n,val;
    cin >> n;
    while(n--)
    {
      cin >> choice;
      switch(choice)
      {
          case 1: cin >> val;
                  head=insert(val,head);
                  break;

          case 2: head = deletell(head);
                  break;

          case 3 :cout << topval(head) << endl;
                  break;
      }
    }
 return 0;
}
