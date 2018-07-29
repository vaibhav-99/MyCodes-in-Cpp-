#include<iostream>
using namespace std;

struct node
{
    int data;
    node *link;
}*head=NULL;

node* push(int d,node* h)
{
  node *nnode = new node;
  if(nnode == NULL)
 {
  cout<<"Insertion Failed";
  return 0;
 }

 if(h == NULL)
 {
   nnode->link = NULL;
   nnode->data = d;
 }

 else
 {
   nnode->data=d;
   nnode->link=h;
 }

return nnode;
}

node* pop(node* h)
{
    if(h==NULL)
    {
        cout<<"linked list empty\n";
        return NULL;
    }
    node* temp;
    temp=h->link;
    cout<<"value popped: "<<h->data<<endl;
    h->link=NULL;
    delete h;
    return temp;
}
void display(node* h)
{
    if(h==NULL)
    {
        cout<<"linked list empty\n";
        return;
    }
    else
    {
        while(h!=NULL)
        {
        cout<<h->data<<" ";
        h=h->link;
        }
        cout<<endl;
    }
}
int main()
{
    int val,choice;
    do
    {
        cout<<"menu:\n1)push\n2)pop\n3)display\n4)exit\n";
        cout<<"enter your choice";
        cin>>choice;
        switch(choice)
        {
            case 1:cout<<"enter value to be pushed";
                    cin>>val;
                    head=push(val,head);
                    break;
            case 2:head=pop(head);
                   break;
            case 3:display(head);
                    break;
        }
    }
    while(choice!=4);
    return 0;
}
