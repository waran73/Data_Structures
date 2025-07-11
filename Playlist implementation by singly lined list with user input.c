#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char data[100];
    struct node* next;
};

struct node* head = NULL;

void insertSong(char song[]) {
    struct node* newNode = malloc(sizeof(struct node));
    strcpy(newNode->data,song);
    newNode->next=head;
    head=newNode;
}

void showPlaylist() 
{
    struct node* temp=head;
    while (temp) {
        printf("%s\n",temp->data);
        temp = temp->next;
    }
}
int main() 
{
    int n;
    char song[100];
    printf("Number of songs ");
    scanf("%d", &n);
    getchar(); 

    for (int i = 0; i < n; i++){
        printf("Enter song %d: ",i + 1);
        fgets(song, sizeof(song),stdin);
        song[strcspn(song, "\n")]='\0'; 
        insertSong(song);
    }

    printf("\nPlaylist:\n");
    showPlaylist();

    return 0;
}
