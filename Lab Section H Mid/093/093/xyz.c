#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node
{
    char movie[50];
    int ID;
    Node* next;
};

 node* head = new node;

void linkListTraversal( node* &movie, int ID,char name[50] )
{
    node* curr = new node;
   while (*curr = new node)
   {

   }
}

int main ()
{
   struct node* head = NULL;

   head = insertATend(head, "Inception", (301));
   head = insertATend( head , "Intersteller" , (412));
   head = insertATend( head , "The Dark Knight" , (278));

   linkListTraversal(head);

   displayList( head , movie,ID);

   updateId(head ID);

   remove( head, movie);




    return 0;
}
// task 1


struct node* insertATend(struct node* head, char movie[],int id)
{
    struct node* ptr=( struct node*)malloc(sizeof(struct node));

    struct node*p = head;
    strcpy(ptr-> movie, movie);
    ptr->id= id;
    ptr-> next=NULL;
};
// task 2

struct node* displayList( struct node* head , char movie[30], int id)
{
    while ( head!= NULL)
    {
        head = head ->next;
    }
    printf()
};;
//task 3



struct node* updateId( struct node* head , int id)
{
 if ( head == NULL || head-> next == NULL)
 {
     return;
 }
 head -> next = curr;
};


// task 4
 struct node* remove( struct node* head , char movie[] )
 {
     head = curr;
     new head = curr->next;
 };
