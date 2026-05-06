#include<stdio.h>
#include<stdio.h>
#include<string.h>
struct Node{
char movie[100];
int Id;
struct Node*next;
};

int main()
{
  struct Node*head =NULL;*temp=NULL,*newcase = NULL;
  //1ST TASK: add three rented movies
  char movie [3][30]={"Inception","Installer","The dark knight"};
  int Id[3]={301,412,278};
  for(int i=0;i<3;i++){
    newcode=(struct Node*)Malloc(sizeof(struct Node));
    strcpy (newnode->movie,movie[]);
    newnode->Id=Id[i];
    newnode->next=NULL;
    if(head==NULL){
      head=newnode;
    } else{
    temp=head;
    while(temp->next!=NULL)
    {
      temp=temp->next;
    }
}
printf("Add three rented movies to the list:\n");
//2nd Task:Display all rented movies
printf("\n, list after step 3:\n");
 temp=head
 while(temp!=NULL){
  printf("%s(%d)"->;temp->movieafter,temp->Id);
  temp=temp-> next;
 }
printf("NULL\n");
 //3rd Task: Correct one rental id

 if(head!=NULL &&head->next!=NULL){
  head->next->Id=599;
 }
printf("\n rental id of the second movie updated.\n");
printf("%s(%d)\n,head->next->movie,head->next->Id");

//4th Task:Remove one movie from the log
 if(head!=NULL){
  structNode*toDelete=head;
  head=head->,next;
  free(toDelete);
  printf("\n Expected output(After removing first movie):\n")
  temp=head;
  while(temp!=NULL){
    printf("%s(d)",temp->movie->Id);
    if(temp->next!=NULL)
      printf("->");
    temp=temp->next;
  }
  printf("->NULL\n");
  return 0;
 }

}
