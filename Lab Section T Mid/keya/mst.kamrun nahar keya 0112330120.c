//task 1
#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
char name[20];
int marks;
struct Node*next;
}node;

struct Node* insertrecord(struct Node*newnode,struct Node* head,int marks,int n,char name[20]){
struct Node*newnode=( struct Node*)malloc(sizeof (Node*));
newnode->name;
 newnode->data;
 newnode->next->NUll;
struct Node*traveller=head;
while(traveller!= NULL){
    traveller=traveller->next;
    traveller->next=newnode;
}
return 0;
}

//task 2
struct Node* display(struct Node* head,int marks,int n,char name[20]){
struct Node*traveller=head;
while(traveller!= NULL)
   for(int i=0;i<n;i++){
    printf("%c"char[i])
   }
        printf("%d",traveller->data);
}
traveller=traveller->next;
return 0;
}

//task 4
struct Node* deletefirstrecord(struct Node* head,int marks,int n,char name[20]{
struct Node* current=head;
head->next=head;
free(current);

}

//task 3
struct Node* update( int marks,int n,char name[20]{
struct Node*temp=head;
while (temp!=NULL){
if(strmp(temp->name;"Nabila")==0){
    temp->mark=20;

}



}







int main(){
char name[20];
int marks;
for(int i=0;i<n;i++);
scanf("%c%d"&name,&marks);
printf("%c%d"name,marks);

display( marks,n,name[20]);
deletefirstrecord(marks,n,name[20];






}





