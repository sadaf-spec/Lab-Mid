#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node
{
    char name[20];
    int marks;
    struct Node*next;
};


int main ()
{
    struct Node * head = NULL,*temp,*newNode;
// task 1
    newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->name,"Ayan");
    newNode->marks=12;
    newNode->next=NULL;
    head=newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->name,"Nabila");
    newNode->marks=15;
    newNode->next=NULL;
    temp=head;

    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next = newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->name,"Farhan");
    newNode->marks=18;
    newNode->next=NULL;
    temp=head;

    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next = newNode;

//  task 2

    printf("List:\n");
    temp = head;
    while(temp != NULL)
    {
        printf(" %s (%d) ->",temp->name,temp->marks);
        temp = temp->next;
    }
    printf(" NULL\n");

//  task 3

    temp = head;
    while(temp != NULL)
    {
        if(strcmp(temp->name,"Nabila")==0)
        {
            temp->marks=20;
        }
        temp=temp->next;
    }
    printf("\nAfter Update:\n");
    temp=head;
    while(temp != NULL)
    {
        printf(" %s (%d) ->",temp->name,temp->marks);
        temp = temp->next;
    }
    printf(" NULL\n");

//  task 4

    struct Node*del;
    if(head != NULL)
    {
        del=head;
        head=head->next;
        free(del);
    }
    printf("\nOutput:\n");
    temp=head;
    while(temp != NULL)
    {
        printf(" %s (%d) ->",temp->name,temp->marks);
        temp = temp->next;
    }
    printf(" NULL\n");

    return 0;

}
