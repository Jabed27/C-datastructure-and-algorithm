#include<stdio.h>
#include<stdlib.h>

struct Node *head ;
/* structure for a node */
struct Node
{
    int data;
    struct Node *next;
};

/* Function to insert a node at the begining of a Circular
   linked list */
void push (int new_value)
{
    struct Node*temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = new_value;
    temp->next = head;
    head = temp;
}
/* Function to print nodes in a given Circular linked list */
void printList(struct Node *head)
{
    struct Node *temp = head;
    if (head != NULL)
    {
        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        while (temp != head);
    }
}

/* Driver program to test above functions */
int main()
{
    /* Initialize lists as empty */
    head = NULL;

    /* Created linked list will be 11->2->56->12 */
    push( 172);
    push( 56);
    push( 2);
    push( 11);

    printf("Contents of Circular Linked List\n ");
    printList(head);

    return 0;
}
