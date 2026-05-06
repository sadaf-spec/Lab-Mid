#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{
    char name[20];
    int mark;
    struct Node*next;

};
int main(){
struct Node*head=NULL, *temp,*newNode;
//insert 3 students
char names [3][20]={"Ayan","Nabila","Farhan"};
int marks[3]={12 ,15 ,18};
for (int i=0;i<3;i++){
    newNode=(struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->name,names[i]);
    newNode->mark=marks[i];
    newNode->next=NULL;

    if(head==NULL){
        head=newNode;
    }
    else{
        temp=head;
        while(temp->next != NULL)
            temp=temp->next;
            temp->next=newNode;

    }
}
    printf("List after insertion:\n");
    temp=head;
    while(temp!=NULL){
        printf("%s(%d)->",temp->name,temp->mark);
        temp=temp->next;
    }
    printf("NULL\n\n");

//Display the student records
printf("student record:\n");
temp=head;
while(temp!=NULL){
    printf("%s(%d)\n",temp->name,temp->mark);
    temp=temp->next;
}

//Update 2nd student's marks
 if(head!=NULL && head->next!=NULL){
    struct Node*second=head->next;

    printf("Before:%s(%d)\n",second->name,second->mark);

    second->mark=20;

    printf("After:%s(%d)\n",second->name,second->mark);
    printf("Marks successfully updated.\n");
}

//delete a student record
if(head!=NULL){
    temp=head;
    head=head->next;
    free(temp);
}
//final list after delete
 printf("After delete:\n");
temp=head;
while(temp!= NULL){
    printf("%s(%d)->",temp->name,temp->mark);
    temp=temp->next;
}
printf("NULL");
return 0;
}
