#include<stdio.h>
#include<stdlib.h>

struct node{




char title[30];
int id;
struct node *next;
};
struct node *head=NULL;
//task 1
void insertfirst(char title[30];int id;){

struct node*newnode=(struct node*)malloc(sizeof(struct node));
if(head==NULL){
    head=newnode;
    return;
}
else{
    newnode ->next=head;
    head=newnode;
}
}
//task 2
void printlist(char title[30],int id)
{

    struct node*temp=head;

    while(temp!=NULL){
            for(int i=0;i<30;i++){
        printf("%ch(%d",temp->title[i],temp->id);
            }
            printf("\n");
   temp=temp->next;
   }

}
//task 3
void updated()
{
    int uid;

    head->next->id=uid;
    printf("rental Id updated :");
}
//task 4
void removefirst(){
if(head== NULL){
printf("NULL");
return;
}
else if(head->next == NULL){
    free(head);
}
else{
    struct node*temp=head;
    head=head->next;
    free(temp);
}
}


int main(){
insertfirst("inception",301);
insertfirst("interstaller",412);//task 1
insertfirst("the dark knght",278);
printlist("Inception",301);//task 2
updated(599);//task 3
removefirst();//task 4
}
