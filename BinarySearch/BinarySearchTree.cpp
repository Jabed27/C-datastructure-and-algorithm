#include<bits/stdc++.h>
using namespace std;
struct Node{
   int data;
   struct Node*left,*right;

};
//int lefthight=0,righthight=0;
struct Node*newNode(int data){
       struct Node*temp = (struct Node *)malloc(sizeof(struct Node));
       temp->data = data;
       temp->left = NULL;
       temp->right = NULL;
       return temp;
}
void inorder(struct Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->data);
        inorder(root->right);
    }
}
struct Node*insert(struct Node*root,int data){
              if(root == NULL)
                return newNode(data);
              if(data>root->data){
                //    righthight+=1;
                root->right = insert(root->right,data);
              }
              else if(data<root->data){
                //lefthight+=1;
                root->left = insert(root->left,data);
              }
             return root;
}
struct Node* search(struct Node*root,int data){

             if(root == NULL||root->data == data)
                return root;
             else if(data>root->data){
                return search(root->right,data);
             }
             return search(root->left,data);

}
int main()
{
    /* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */
          struct Node*root = NULL;
          root = insert(root,50);
          insert(root,30);
          insert(root,20);
          insert(root,70);
          insert(root,80);
          insert(root,60);
          insert(root,40);
          inorder(root);
          /*if(left>right){
            cout<<"hight is: "<<righthight<<endl;
          }
          else{
            cout<<"hight is: "<<lefthight<<endl;
          }*/

}
