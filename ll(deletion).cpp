#include<iostream>
using namespace std;

class node{
public:
int data;
node *link;
}*head=NULL;

node* insert(int d , node *h)
{
  node *newnode = new node;
  if(newnode == NULL)
  {
   cout << "Insertion Failed\n";
   return 0;
  }

  if(h == NULL)
  {
    newnode->data = d;
    newnode->link = NULL;
    return newnode;
  }
  node *temp = h;

  newnode->data = d;
  newnode->link = NULL;

 while(h->link!=NULL)
  h = h -> link;

  h->link=newnode;
  return temp;

}

void display(node *h)
{
  if(h == NULL)
  {
    cout << "Linked list Empty!\n";
    return;
  }

  while(h!=NULL)
  {
    cout << h->data << " ";
    h = h->link;
  }
  cout << endl;
}


 node* removeDuplicate(node *h)
 {
    node *cursor, *temp, *temp2;
     for(cursor = h ; cursor!=NULL ; cursor = temp)
       {
          temp = cursor->link;                            // temp is next node after cursor
          while(temp->data == cursor->data)
          {
            temp2 = temp->link;                           // assigning next node of temp to temp2
            delete temp;                                  // deleting current node
            temp = temp2;                                 // moving temp forward
             if(temp == NULL)
              break;
          }
         cursor->link = temp;                             // making sure Linked List does not break
       }
     return h;
 }

int main()
{
  cout << "No. of Elements : ";
  int n,val;
  cin >> n;

  for(int i=0 ; i<n ; i++)
  {
   cin >> val;
   head = insert(val,head);
  }

 head = removeDuplicate(head);
 display(head);

return 0;
}
