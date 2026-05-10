#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Node {
    char name[50];
    int marks;
    struct Node* next;
};


struct Node* createNode(char name[], int marks) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->name, name);
    newNode->marks = marks;
    newNode->next = NULL;
    return newNode;
}


void insert(struct Node** head, char name[], int marks) {
    struct Node* newNode = createNode(name, marks);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}


void display(struct Node* head) {
    struct Node* temp = head;
    printf("\nStudent List:\n");
    while (temp != NULL) {
        printf("%s - %d\n", temp->name, temp->marks);
        temp = temp->next;
    }
}


void update(struct Node* head, char name[], int newMarks) {
    struct Node* temp = head;
    while (temp != NULL) {
        if (strcmp(temp->name, name) == 0) {
            temp->marks = newMarks;
            printf("\nMarks successfully updated\n");
            return;
        }
        temp = temp->next;
    }
    printf("\nStudent not found\n");
}


void deleteFirst(struct Node** head) {
    if (*head == NULL) return;
    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

int main() {
    struct Node* head = NULL;


    insert(&head, "Ayan", 12);
    insert(&head, "Nabila", 15);
    insert(&head, "Farhan", 18);


    display(head);


    update(head, "Nabila", 20);
    display(head);


    deleteFirst(&head);
    display(head);

    return 0;
}









