#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Node{
char name[20];
int marks;
struct Node* next;
}
Node;
int main(){
Node* head = NULL;
    //Task 1

    Node* traveller;
    Node* newNode1=(Node*)malloc(sizeof(Node));
    strcpy(newNode1 -> name, "Ayan");
    newNode1 -> marks = 12;
    newNode1 -> next = NULL;

    head = newNode1;

    Node* newNode2=(Node*)malloc(sizeof(Node));
    strcpy(newNode2 -> name, "Nabila");
    newNode2 -> marks = 15;
    newNode2 -> next = NULL;

    traveller = head;
    while(traveller -> next != NULL){
        traveller = traveller -> next;
    }
    traveller -> next = newNode2;

    Node* newNode3=(Node*)malloc(sizeof(Node));
    strcpy(newNode3 -> name, "Farhan");
    newNode3 -> marks = 15;
    newNode3 -> next = NULL;

    traveller = head;
    while(traveller -> next != NULL){
        traveller = traveller -> next;
    }
    traveller -> next = newNode3;

    //Task 2

    printf("Student Records: \n");
    traveller = head;

    while(traveller != NULL){
        printf("%s (%d)\n",traveller-> name , traveller -> marks);
         traveller = traveller -> next;
    }

    //Task 3

    traveller = head;

    int count = 1;
    while(traveller != NULL){
        if(count == 2){
            printf("\nBefore: %s  (%d)\n",traveller-> name , traveller -> marks);
            traveller  -> marks = 20;
            printf("\nAfter: %s  (%d)\n",traveller-> name , traveller -> marks);
            printf("Marks successfully updated.\n");
            break;
        }
        traveller = traveller -> next;
        count++;
    }

    //Task 4

     if(head!=NULL){
        Node* temp = head;
        head = head -> next;
        free(temp);
     }

     printf("\nFinal List After Deletation:\n");
     traveller = head;
     while(traveller != NULL){
       printf("%s (%d) -> ",traveller-> name , traveller -> marks);
       traveller = traveller -> next;
     }
     printf("NULL\n");

     return 0;

}
