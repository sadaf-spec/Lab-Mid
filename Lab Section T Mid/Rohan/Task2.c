#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    struct Node {
        char name[50];
        int marks;
        struct Node *next;
    };

    struct Node *head = NULL, *temp, *newNode;

    char names[3][50] = {"Ayan", "Nabila", "Farhan"};
    int marks[3] = {12, 15, 18};

    for(int i = 0; i < 3; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        strcpy(newNode->name, names[i]);
        newNode->marks = marks[i];
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
        } else {
            temp = head;
            while(temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
    }

    // Display original list
    printf("Original List:\n");
    temp = head;
    while(temp != NULL) {
        printf("%s (%d)\n", temp->name, temp->marks);
        temp = temp->next;
    }

    // Update Nabila
    temp = head->next;
    printf("\nBefore Update: %s (%d)\n", temp->name, temp->marks);
    temp->marks = 20;
    printf("After Update: %s (%d)\n", temp->name, temp->marks);

    // Update Farhan
    temp = temp->next;
    printf("\nBefore Update: %s (%d)\n", temp->name, temp->marks);
    temp->marks = 18;
    printf("After Update: %s (%d)\n", temp->name, temp->marks);

    // Delete first student (Ayan)
    temp = head;
    head = head->next;
    free(temp);

    // Final list
    printf("\nFinal List:\n");
    temp = head;
    while(temp != NULL) {
        printf("%s (%d) -> ", temp->name, temp->marks);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}
