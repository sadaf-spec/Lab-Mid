#include<stdio.h>
#include<stdlib.h>
#<in
struct node{

char name[20];
int id;
struct node*next;
};
//task 1,insert
struct node*head=NULL;
void insert_last(char name[20],int id){
 struct node*newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
 newnode->id=id;
 newnode->next=NULL;
 if(head=NULL){
    head=newnode;
 }
struct node*current=head;
while(current->next!=NULL)
current=current->next;

current->next=newnode;
return head;
}
//task 2,display
void printlist(){

struct node*current;
current=head;
while(current->next!=NULL)
{
    printf("%s %d->",current->name,current->id);
    current=current->next;
}
printf("\n");

}
//task 3 ,correct rental id

void insert_last(char name[20],int id){
 struct node*newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
 newnode->id=id;
 newnode->next=NULL;
 if(head=NULL){
    head=newnode;
 }
struct node*current=head;
while(current->next!=NULL)
current=current->next;

current->next=newnode;
return head;
}


//task 4
struct Node* deleteFromBeginning(struct Node* head) {
    if (head == NULL) return NULL;

    struct Node* temp = head;
    head = head->next;
    free(temp);

}
    }}


int main(){

    insert_last("inception",301);
    insert_last("Interseller",412);
    insert_last("The Dark Knight",278);


printlist();
insert_last("interseller",599);
printlist();
head = deleteByValue(head);
    printlist(head);


return 0;
}
