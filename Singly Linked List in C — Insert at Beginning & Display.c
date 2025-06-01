#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};

struct node*head = NULL;

void instertAtBeggining(int val)
{
    struct node*newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = head;
    
    head = newnode;
}
void display()
{
    struct node*temp = head;
    while (temp!=NULL)
    {
        printf("%d -> ",temp-> data);
        temp=temp->next;
    }
    printf("NULL");
}
int main()
{
    instertAtBeggining(300);
    instertAtBeggining(200);
    instertAtBeggining(100);
    display();
    return 0;
}
