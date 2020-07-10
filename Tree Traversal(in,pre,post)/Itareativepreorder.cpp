#include<bits/stdc++.h>
using namespace std;
struct Node{
       int data;
       struct Node*left;
       struct Node*right;
};
struct Node*NewNode(int data)
{
    struct Node*node = new struct Node();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}
void IterativePreorder(Node*root)
{
    if(root == NULL)
        return;
    stack<Node*>mystack;
    mystack.push(root);

    while(mystack.empty() == false){
        struct Node*node = mystack.top();
        cout<<node->data<<" ";
        mystack.pop();
        if(node->right)
           mystack.push(node->right);
        if(node->left)
            mystack.push(node->left);

    }
}
int main()
{
    struct Node*root = NewNode(10);
    root->left = NewNode(8);
    root->left->left = NewNode(3);
    root->left->right = NewNode(5);
    root->right = NewNode(2);
    root->right->left = NewNode(2);
    IterativePreorder(root);
}
