#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Node {
    char name[20];
    int marks;
    struct Node *next;
} node;

int main() {

    node *head = NULL;

    // Task 1: Node creation
    node *traveller;
    node *newnode1 = (node*)malloc(sizeof(node));
    strcpy(newnode1->name, "Ayan");
    newnode1->marks = 12;
    newnode1->next = NULL;
    head = newnode1;

    node *newnode2 = (node*)malloc(sizeof(node));
    strcpy(newnode2->name, "Nabila");
    newnode2->marks = 15;
    newnode2->next = NULL;

    // Traverse to the end to link newnode2
    traveller = head;
    while (traveller->next != NULL) {
        traveller = traveller->next;
    }
    traveller->next = newnode2;

    node *newnode3 = (node*)malloc(sizeof(node));
    strcpy(newnode3->name, "Farhan");
    newnode3->marks = 18;
    newnode3->next = NULL;

    // Link newnode3
    traveller = head;
    while (traveller->next != NULL) {
        traveller = traveller->next;
    }
    traveller->next = newnode3;

    // Task 2: Print student records
    printf("Student records:\n");
    traveller = head;
    while (traveller != NULL) {
        printf("%s(%d)\n", traveller->name, traveller->marks);
        traveller = traveller->next;
    }

    // Task 3: Update marks
    traveller = head;
    int count = 1;
    while (traveller != NULL) {
        if (count == 2) {

            printf("\nBefore: %s(%d)\n", traveller->name, traveller->marks);
            traveller->marks = 20;
            printf("After: %s(%d)\n", traveller->name, traveller->marks);
            printf("Marks successfully updated.\n\n");
            break;
        }
        traveller = traveller->next;
        count++;
    }

    // Task 4: Deletion (Head node delete)
    if (head != NULL) {
        node *temp = head;
        head = head->next;
        free(temp);
    }

    printf("Final list after deletion:\n");
    traveller = head;
    while (traveller != NULL) {
        printf("%s(%d)\n", traveller->name, traveller->marks);
        traveller = traveller->next;
    }

    printf("NULL\n");
    return 0;}
