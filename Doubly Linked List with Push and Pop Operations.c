#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node*next;
    struct Node*prev;
};
struct Node*head=NULL;
struct Node*tail=NULL;

void push(int data)
{
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->prev=NULL;
    newNode->next=head;
    if(head!=NULL)
    head->prev=newNode;
    else
    tail = newNode;
    head = newNode;
}
void pop() 
{
    if (head == NULL) 
    {
        printf("List is empty.\n");
        return;
    }
    struct Node*temp = head;
    head = head->next;
    if(head != NULL)
    {
        head->prev=NULL;
    }
    else
    {
        tail = NULL;
    }
    free(temp);

}
void display()
{
    struct Node*temp= head;
    while(temp!= NULL)
    {
        printf("%d ->",temp-> data);
        temp=temp-> next;
    }
    printf("NULL");
}
int main()
{
    push(5);
    push(6);
    push(7);
    push(8);
    push(9);
    display();
    printf("\n");
    pop();
    display();
    return 0;
}

