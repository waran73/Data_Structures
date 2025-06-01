#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    char data[100];
    struct node*next;
};

struct node* head = NULL;

void insertAtBeginning(const char *value)
{
    struct node* newnode= (struct node*)malloc(sizeof(struct node));
    strcpy(newnode->data,value);
    newnode->next = head;
    head = newnode;
}
void display()
{
    struct node*temp = head;
    while(temp!=NULL)
    {
        printf("%s \n ", temp->data);
        temp = temp->next;
    }
    
    printf("\nThe end");
}

int main()
{
    printf("The songs in playlist are :\n\n");
    insertAtBeginning("NAA READY - LEO");
    insertAtBeginning("CHANNA MEREYA");
    insertAtBeginning("STARBOY");
    insertAtBeginning("OXYGEN - KAVAN");
    insertAtBeginning("JINGUCHAA - THUG LIFE");
    insertAtBeginning(" NAAN NAAN - MAHAAN");
    display();
    return 0;
}
