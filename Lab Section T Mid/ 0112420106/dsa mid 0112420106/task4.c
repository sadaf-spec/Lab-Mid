
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node{
    char name[50];
    int value;
    struct node*next;
}node;

node*head=NULL;

node*createnode(char name[],int data){
    node*newnode=(node*)malloc(sizeof(node));
    strcpy(newnode->name,name);
newnode->value=data;

    newnode->next=NULL;
    return newnode;
}
void insert(char name[],int value){
    node*newnode=createnode(name,value);
    if(head==NULL){
            head=newnode;
            return;
    }
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=NULL;

}
void deletefirst(){

    if(head==NULL){

        return;
    }
    node*temp2=head;
    if(temp2->next!=NULL){
        head=head->next;
        free(temp2);
    }

}

void displaylist(){
    node*temp=head;
    while(temp!=NULL){
        printf("%s(%d)-> ",temp->name,temp->value);
        temp=temp->next;
    }
    printf("NULL\n");

}

int main(){
    insert("Ayan",(12));
    insert("Nabila",(15));
    insert("Farhan",(18));


    deletefirst();
    displaylist();

    return 0;



}
