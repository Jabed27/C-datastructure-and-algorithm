#include<iostream>
#include<bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    struct Node*link;

};
struct Node* head;
bool search(struct Node* head, int x)
{
    struct Node* current = head;  // Initialize current
    while (current != NULL)
    {
        if (current->data == x){
            return true;

        }
        current = current->link;
    }
    return false;
}
int getcount(struct Node*head)
{
    int counter = 0;
    struct Node*t = (struct Node*)malloc(sizeof(struct Node));
    t = head;
    while(t!= NULL)
    {
        counter++;
        t = t->link;
    }
    return counter;
}
void deleteNode(int possition)
{
    if(possition == 1)
    {


    }else
    {
        struct Node*t;
        t = head;
        for(int i = 1;i<=possition-2;i++)
        {
           t =  t->link ;
        }
        struct Node*temp;
        temp = t->link;
        t->link = temp->link;

    }
}
void printList(struct Node *head)
{

    while (head != NULL)
    {
        printf("%d->", head->data);
        head = head->link;
    }
    printf("NULL\n");
}
void push (int new_value)
{
    struct Node*temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = new_value;
    temp->link = head;
    head = temp;
}
void Middle(struct Node* head)
{
    struct Node*t = head;
    struct Node*p = head;
   if(head!=NULL){
    while(p!=NULL&&p->link!=NULL)
    {
        p = p->link->link;
        t = t->link;
    }
    cout<<"The Middle element is: "<<t->link<<endl;
   }
}
void pushingend(int value)
{
    struct Node*temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = value;
    temp->link = NULL;

    if(temp == NULL)
    {
        head = temp;
    }
    else
    {
        struct Node*t = (struct Node*)malloc(sizeof(struct Node));
        t = head;
        while(t->link!=NULL)
        {
           t = t->link;
        }
        t->link = temp;
    }
}
int main()
{
   head = NULL;
   push(3);
   push(7);
   push(10);
   cout<<"pushing ahead"<<endl;
   printList(head);
   pushingend(3);
   pushingend(7);
   pushingend(10);
   pushingend(30);
   pushingend(70);
   pushingend(100);
      cout<<"pushing end"<<endl;

   printList(head);
   cout<<"The deleted list"<<endl;
   deleteNode(2);
   printList(head);
   cout<<"The length is: "<<getcount(head)<<endl;

   search(head,10)?printf("yes"):printf("NO");
   Middle(head);
}
