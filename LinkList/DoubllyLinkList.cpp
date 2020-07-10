#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node*next;
    struct Node*prev;
};
struct Node*head;
struct Node*GetNewNode(int x)
{
    struct Node*newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}
void insertAtHead(int x)
{
    struct Node*newNode = GetNewNode(x);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}
void Print()
{
    struct Node*temp = head;
    printf("Forward");
    while(temp!=NULL){
        cout<<temp->data<<" ";
       temp = temp->next;
    }
    cout<<endl;
}
void reversePrint()
{
    struct Node*temp = head;
    if(head == NULL)
    {
        return;
    }
    while(temp->next!=NULL)
    {
      temp = temp->next;
    }
    while(temp!=NULL){
            cout<<temp->data<<" ";
        temp = temp->prev;
    }
    cout<<endl;
}
int main()
{
    head = NULL;
    insertAtHead(90);
    insertAtHead(100);
    insertAtHead(45);
    Print();
    reversePrint();

}
