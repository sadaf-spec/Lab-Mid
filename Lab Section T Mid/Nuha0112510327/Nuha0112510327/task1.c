#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node{
    char name[50];
    int marks;
    struct node*next;
}node;

node*head=NULL;

node*createnode(char name[],int data){
    node*newnode=(node*)malloc(sizeof(node));
    strcpy(newnode->name,name);
newnode->marks=data;

    newnode->next=NULL;
    return newnode;
}
void insert(char name[],int marks){
    node*newnode=createnode(name,marks);
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


void displaylist(){
    node*temp=head;
    while(temp!=NULL){
        printf("%s(%d)-> ",temp->name,temp->marks);
        temp=temp->next;
    }
    printf("NULL\n");

}

int main(){
    insert("Ayan",(12));
    insert("Nabila",(15));
    insert("Farhan",(18));

    displaylist();
    updatesecond("Nabila",(15),(20));
    displaylist();

    return 0;



}
