#include <iostream>
using namespace std;
struct node
{
  int data;
  node *left;
  node *right;
};
void adoptChild (node *parent, node *leftc, node *rightc)
{
    parent->left = leftc;
    parent->right = rightc;
}
void preOrderTraversal(node *root)
{
  if(root == NULL)
   return;

  cout << root->data << " ";
  preOrderTraversal(root->left);
  preOrderTraversal(root->right);
}
int main()
{
 node a,b,c,d,e,f;
 a.data = 23;
 b.data = 55;
 c.data = 17;
 d.data = 16;
 e.data = 3;
 f.data = 34;

 adoptChild(&a,&b,&c);
 adoptChild(&b,NULL,NULL);
 adoptChild(&c,&d,NULL);
 adoptChild(&d,&e,&f);
 adoptChild(&e,NULL,NULL);
 adoptChild(&f,NULL,NULL);

 //cout << a.right->left->data;

 cout << "PreOrder : ";
 preOrderTraversal(&a);
 return 0;
}
