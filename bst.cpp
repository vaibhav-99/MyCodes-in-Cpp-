#include<cstdlib>
#include<iostream>
using namespace std;

struct tree_node
{
    tree_node *left;
    tree_node *right;
    int data;

};//3 fields in node, 2 for address and 1 for data
class bst //group of data member and member function
{
    tree_node *root;   //using root w can access all the addresses
    public:
    bst()
    {
        root=NULL;     //
    }
    int isempty()
    {
        return(root == NULL);
    }
    void insert(int item);
    void inordertrav();
    void inorder(tree_node *);
    void postordertrav();
    void postorder(tree_node *);
    void preordertrav();
    void preorder(tree_node *);
};
void bst:: insert(int item)
{

    tree_node *p = new tree_node;
    tree_node *parent;
    p-> data= item;             //p points to data
    p-> left= NULL;
    p-> right= NULL;
    parent = NULL;
    if(isempty())
        root = p;
    else
    {
        tree_node *ptr;
        ptr = root;
        while(ptr!=NULL)
        {
            parent = ptr;
            if (item > ptr-> data)
                ptr = ptr->right;
                else
                    ptr = ptr -> left;
        }

        if(item < parent -> data)
            parent->left = p;
        else
            parent->right = p;

    }


}
void bst::inordertrav ()
{

    inorder(root);

}
void bst:: inorder(tree_node *ptr)
{

    if (ptr !=NULL)
    {

        inorder(ptr->left);

    cout<<" "<< ptr->data<<" ";
    inorder(ptr->right);
    }

}

void bst :: postordertrav()
{

    if(ptr != NULL)
    {

        postorder(ptr->left);
        postorder(ptr->right);
        cout<<" "<<ptr->data<<" ";

    }
}
void bst:: preorder(tree_node *ptr)
{

    if(ptr!=NULL)
    {
        cout<<" "<<ptr->data<<" ";
        preorder(ptr->left);
        preorder(ptr->right);


    }
}
int main()
{

    bst b;
    b.insert(52);
    b.insert(25);
    b.insert(50);
    b.insert(15);
    b.insert(40);
    b.insert(45);
    b.insert(20);
    cout<<"inorder"<<endl;
    b.inordertrav();
    cout<<endl<<"postorder"<<endl;
    b.postordertrav();
    cout<<endl<<"preorder"<<endl;
    return 0;

}
