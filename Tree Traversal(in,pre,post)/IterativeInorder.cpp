#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    Node (int data)
    {
        this->data = data;
        left = right = NULL;
    }
    Node(char ch){
    this->data =(int) ch;
        left = right = NULL;

    }
};
int solve(Node*root);
int Calculate(int A,int B,char Operator);
void inOrder(struct Node*root)
{
    stack<Node*>s;
    Node*curr = root;
    while(curr!=NULL || s.empty()== false){
        while(curr!=NULL){
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        cout<<curr->data<<" ";
        curr = curr->right;
    }
}
int solve(Node*root){
    if(root == NULL)
        return 0;
    else if(root->data >= 0||root->data <=100)
        return ;
    char Operator = root->data;
    int A = solve(root->left);
    int B = solve(root->right);
   int cal = Calculate(A,B,Operator);
    return (cal);

}
/*int sumation(struct Node*root)
{
    if(root == NULL)
        return ;
    return (root->data + sumation(root->left)+sumation(root->right));
}*/
int Calculate(int A,int B,char Operator){
              int result = A Operator B;
              return result;
}
int main()
{


    struct Node *root = new Node('+');
    root->left        = new Node(3);
    root->right       = new Node('*');
    root->right->left  = new Node('+');
    root->right->right = new Node(2);
    root->right->left->left = new Node(5);
    root->right->left->right = new Node(9);

    inOrder(root);
    int sum = solve(root);

  /* int sum = sumation(root);*/
   cout<<"sum is: "<<sum<<endl;
    return 0;
}
