#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    int id;
    char tittle[30];
    struct node*next;

};
//q2

void linklisttraversal(struct node*ptr){

     while(ptr!=NULL){

    printf("%s(%d)",ptr->tittle,ptr->id);
    ptr=ptr->next;
     }
printf("->NULL");
}
//q3
struct node*updateId(struct node*head,int newid){
  if(head==NULL||head->next==NULL){
    return;

  }
head->next=second;
second->newid;

};

//q4
struct node*deleteFirst(struct node*head,char tittle[]){
struct node*temp=head;
head=head->next;
free(temp);


};







//q1
struct node*insertAtend(struct node*head,char tittle[],int id){
   struct node*ptr=(struct node*)malloc(sizeof(struct node));
   struct node*p=head;

   strcpy(ptr->tittle,tittle);
   ptr->id=id;
   ptr->next=NULL;

   while(p->next!=NULL){
    p=p->next;
   }
   p->next=ptr;


};

int main(){
    struct node*head=NULL;

    head=insertATend(head,"Inception",(301));
     head=insertATend(head,"Interseller",(412));
      head=insertATend(head,"The dark Knight",(278));
linkedlisttraversal(head);
  head=updateId(head,599);
  linkedlisttraversal(head);

  head=deleteFirst(head,"Inception");
  linkedlisttraversal(head);

return 0;

}












