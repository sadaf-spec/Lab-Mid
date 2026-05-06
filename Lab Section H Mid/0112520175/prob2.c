#include<stdio.h>
#include<stdlib.h>

struct node{

char title[30];

int id;
struct node* next;

};

struct node* head = NULL;
struct node* next = NULL;
///task 1

void insertfirst(struct node* title[30],struct node* id){

 struct node* newnode= (struct node*)malloc(sizeof(struct node));
 if(head == NULL)
 {

     head =newnode;
     return;
 }
else{

   newnode->next= head;
    head = newnode;
}

}

///task 2
void printlist(struct node* title[30],struct node* id){

struct node* temp= head;

while (temp != NULL){
        for(int i=0;i<30;i++)


      printf("%ch,(%d) ",temp->title[i],temp->id);
temp = temp->next;
}

}

///task 3
void updateid(int uid)
{
if (head==NULL){
    printf("nothing to update");
    return;
}
    head->next->id=uid;
    printf("id updated.");
}

///task 4
void removefirst(){
if(head == NULL){

    printf("Null");
    return;

}else if(head->next == NULL){
      free(head);
}
else{
    struct node* temp= head;
    head =head->next;
    free(temp);

}

}

int main(){

insertfirst("Inception",301);
insertfirst("Interstellar",412);
insertfirst("The Dark Knight",278);

printlist("Inception",301);

updateid(599);

removefirst();

}
