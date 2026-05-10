#include<stdio.h>
#include<stdlib.h>
struct Node {
    char name[50];
    int mark;
    struct Node* next;
};

int main() {
    struct Node *head = NULL, *newNode, *temp, *temp1, *temp2;
    int i;


    for(i = 0; i < 3; i++) {
        newNode = (struct Node*) malloc(sizeof(struct Node));

        printf("Enter  name: ");
        scanf("%s", newNode->name);
        printf("Enter mark: ");
        scanf("%d", &newNode->mark);
        newNode->next = NULL;
        if(head == NULL) {
            head = newNode;
        }
        else {
            temp = head;

            while(temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }





//dis




    temp = head;
    while(temp != NULL) {
        printf("%s(%d) -> ", temp->name, temp->mark);
        temp = temp->next;
    }



    printf("NULL");



    //upd


if(head != NULL && head->next != NULL) {
        printf("Enter new mark: ");
        scanf("%s", head->next->mark);
    }

 printf("After: ");

    temp2 = head;
    while(temp2 != NULL) {
        printf("%s(%d) -> ", temp2->name, temp2->mark);
        temp2 = temp2->next;
    }

    printf("NULL");






    //remove

    if(head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

     printf("After: ");

    temp1 = head;
    while(temp1 != NULL) {
        printf("%s(%d) -> ", temp1->name, temp1->mark);
        temp1 = temp1->next;
    }
    printf("NULL");

    return 0;
}



