#include<stdio.h>
#include<stdlib.h>
struct Node{
char movie[30];
int id;
struct Node*next;
};

Node*head=newNode;
//task 1
struct Node* addLinkedlist(struct Node*head,int id,char movie){
struct Node*ptr=(struct Node*)malloc(sizeof(struct Node));
struct Node*p=head;
strcpy(p)
}
};
//task2

struct Node*displayList(struct Node*head,int id,char movie[30]){
while(head!=NULL){
    head=head->next;
}printf("")


};
int main(){
    struct Node*head=NULL;
    head=insertATend(head,"Inception",(301));
    head=insertATend(head,"Intersteller",(412));
    head=insertATend(head,"The Dark Knight",(278));
    addLinkedlist(head,id,movie);
    updatedID(head,id);
    deleteMovie(head,movie);
    displayList(head,movie,id);


return 0;

}
//task 3
struct Node*updatedID(struct Node*head,int id){
      if(head==NULL||head->next==NULL){
        return head;
      }
       else{
        head->next=second;
        second=newID;
       }


};
//task4

struct Node*deleteMovie(struct Node*head,char movie[30]){
  struct Node*temp=head;
  head=head->next;
  free(temp);



};
