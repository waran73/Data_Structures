#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node {
    char data[50];
    struct node* next;
};

struct node* head = NULL;

void insertAtEnd(char hint[]) {
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    strcpy(newnode->data, hint);
    newnode->next=NULL;

    if (head ==NULL) {
        head =newnode;
    } else {
        struct node* temp=head;
        while (temp->next!=NULL)
            temp = temp->next;
        temp->next = newnode;
    }
}
void display() {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%s -> ", temp->data);
        temp=temp->next;
    }
    printf("Game Exit");
}

int main()
{
    int n;
    char hint[50];
    printf("Enter number of hints: ");
    scanf("%d",&n);
    getchar(); 
    for (int i = 0;i<n;i++){
        printf("Enter hint %d: ",i+1);
        fgets(hint, sizeof(hint),stdin);
        hint[strcspn(hint,"\n")]='\0'; 
        insertAtEnd(hint);
    }
    printf("\nAll Hints:\n");
    display();
    return 0;
}
