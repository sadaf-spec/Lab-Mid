
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    char name[20];
    int marks;
    struct Node* next;
};

int main()
{
    struct Node* head = NULL;
    struct Node *newNode, *temp;


    newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->name, "Ayan");
    newNode->marks = 12;
    newNode->next = NULL;
    head = newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->name, "Nabila");
    newNode->marks = 15;
    newNode->next = NULL;

    temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;


    newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->name, "Farhan");
    newNode->marks = 18;
    newNode->next = NULL;

    temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;

    // Display list (chain format)
    printf("List after insertion:\n");
    temp = head;
    while (temp != NULL)
    {
        printf("%s(%d)->", temp->name, temp->marks);
        temp = temp->next;
    }
    printf("NULL\n");

    // 2
    printf("\nStudent records:\n");
    temp = head;
    while (temp != NULL)
    {
        printf("%s(%d)\n", temp->name, temp->marks);
        temp = temp->next;
    }

    //3
    printf("\nUpdating Nabila's marks:\n");
    temp = head;
    while (temp != NULL)
    {
        if (strcmp(temp->name, "Nabila") == 0)
        {
            printf("Before %s(%d)\n", temp->name, temp->marks);
            temp->marks = 20;
            printf("After %s(%d)\n", temp->name, temp->marks);
            break;
        }
        temp = temp->next;
    }

    //4
    if (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }

    // Final list
    printf("\nFinal list after deletion:\n");
    temp = head;
    while (temp != NULL)
    {
        printf("%s(%d)->", temp->name, temp->marks);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}
