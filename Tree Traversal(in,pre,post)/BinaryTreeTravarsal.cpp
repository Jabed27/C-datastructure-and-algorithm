#include<bits/stdc++.h>
using namespace std;
struct Node{
     int data;
     struct Node* left,*right;
     Node(int data){
         this->data = data;
         left = right = NULL;
     }

};
void PrintPreorder(struct Node*node){
    if(node == NULL)
        return;

    cout<<node->data<<" ";
    PrintPreorder(node->left);

    PrintPreorder(node->right);

}
void PrintInorder(struct Node*node){
       if(node == NULL)
            return;
       PrintInorder(node->left);
       cout<<node->data<<" ";
       PrintInorder(node->right);
}
void PrintPostorder(struct Node*node){
      if(node == NULL)
        return;
      PrintPostorder(node->left);
      PrintPostorder(node->right);
      cout<<node->data<<" ";
}
int main(){
   struct Node*root = new Node(1);
   root->left = new Node(2);
   root->right = new Node(3);
   root->left->left = new Node(4);
   root->left->right = new Node(5);
   cout<<"The Preorder traverse is: "<<endl;
   PrintPreorder(root);
   cout<<endl;
   cout<<"The Inorder traverse is: "<<endl;
   PrintInorder(root);
   cout<<endl;
   cout<<"The Postorder traverse is: "<<endl;
   PrintPostorder(root);
   return 0;
}
