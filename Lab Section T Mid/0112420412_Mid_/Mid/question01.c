
#include<stdio.h>

#include <stdlib.h>
//creat linklist and insert three records
struct Node {
    char name[20];
    int mark;
    struct Node* next;
};

int main() {
    struct Node *head = NULL, *newNode, *temp;
    char names[3][20] = {"Ayan", "Nabila", "Farhan"};
    int marks[3] = {12, 15, 18};

    for(int i = 0; i < 3; i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));

        strcpy(newNode->name, names[i]);
        newNode->mark = marks[i];
        newNode->next = NULL;

        if(head == NULL)
            head = newNode;
        else {
            temp = head;
            while(temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
    }


    // display student recordes


    temp = head;
    while(temp != NULL) {
        printf("%s(%d) -> ", temp->name, temp->mark);
        temp = temp->next;
    }printf("NULL");
printf("   \n ");printf("   \n ");printf("   \n ");

temp = head;
    while(temp != NULL) {
        printf("%s(%d)  ", temp->name, temp->mark);
        temp = temp->next;
        printf("\n");
    }
     printf("\n"); printf("\n"); printf("\n");
//update student marks


if(head!=NULL&&head->next!=NULL){
    struct Node*temp1=head->next;
    printf("Before %s(%d)\n",temp1->name,temp1->mark);
    temp1->mark=20;
    printf("Marks  successfully updated");
}

printf("   \n ");
printf("   \n ")
;printf("   \n ");
    printf("   \n ");


//delete a student record
printf(" After delete the 1st student record  \n\n ");

    if(head == NULL) {
        printf("List empty\n");
        return;
    }
else{
    struct Node* temp = head;
    head = head->next;
    free(temp);
}
temp = head;
    while(temp != NULL) {
        printf("%s(%d) -> ", temp->name, temp->mark);
        temp = temp->next;
    }

    return 0;
}
