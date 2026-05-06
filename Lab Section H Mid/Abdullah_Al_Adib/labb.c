#include<stdio.h>
#include<stdlib.h>

struct node{
            char name[20];
            int id;
            struct node*next;
 };
     struct node*head=NULL;
     void insert_last(char arr[],int id)(

   struct node*newnode;
   newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=id;
   newnode->next=NULL;
   if(head=NULL){
          head=newnode;
   }
   struct node*current=head;
   while(current->data!=NULL){

          current=current->next;
   }
   void printlist(){

   struct node*current;
   current=head;
   while(current->next!=NULL){

          printf("%s %d->",current->arr,current->id);
          current=current->next;
   }
   printf("\n");

   }
  )


  int main()
  {
            insert_last("Inception",301);
            insert_last("Interstellar",412);
            insert_last("TheDarkKnight",278);

            printlist();

            return 0;
  }
