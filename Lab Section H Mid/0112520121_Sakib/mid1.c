#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    char name[20];
    int data;
    struct node* next;
};
struct node* head;


//insert_end task1
void insert_last(char name[],int id){
    struct node* new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    strcpy(new_node->name, name);
    new_node->data=id;
    new_node->next=NULL;
    if(head==NULL){
        head=new_node;
        return;
    }
    struct node* current=head;
    while(current->data!=NULL){
        current=current->next;
    }
    current->next=new_node;
}

//correct one rental ID, task3

void rental_id(char name[],int target){
    struct node* new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=value;
    new_node->next=NULL;
    struct node* current=head;
    while(current->next!=target){
        current=current->next;
    }
    current->next=target;

}
// task 4
void delete_first(){
    struct node* current=head;
   while(current->next=NULL){
        current=current->next;
    }
    current->next=head->next;
    free(current);



}
void printlist(){
    struct node* current;
    current=head;
    while(current->next!=NULL){
        printf("%s (%d)  ",current->name,current->data);
        current=current->next;
    }
    printf("\n");
}
int main(){
    insert_last("Inception",301);
    insert_last("Interstellar",412);
    insert_last("The Dark Knight",278);
    printlist();
    rental_id("interstellar",599);
    pritlist();



}
