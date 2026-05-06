#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{
char Movie title [30] ;
int ID;
struct Node* next;

};

int main (){
   struct node*head = Null;*temp = Null*newnode=Null ;
    // TASK 1
char movie [3][30]= {"Inception","Interstellar","The Dark Knight";};
int ID[3]={301,412,278};
for (int i=0;i<3;i++)


newnode= (struct Node*)malloc ( sizeof(struct Node));

strcpy(newnode-> Movie title,Movie title[]);
newnode->ID=ID[i];
newnode->next=Null;
if(head==Null){
    head=newnode;
}else{
temp=head;
while (temp->next !=Null)
{
    temp=temp->next;
}
}
printf(Task 1 :"Three Movies Added to the list,\n");
  //Task 2
printf("\  n,task 2: list after step 3:\n");
 temp = head
while (temp!=Null ){
    printf("%s(%d)->";temp-> Movie title,temp->ID );
temp=temp->next

}
printf("Null\n");
//Task 3
 if (head!=Null&& head ->next!=Null)
{

    head ->next ->ID=599;
}
printf("\n task 3 : "Rental ID of the second movie update\n");
printf ("After update : %s (%d)\n,head->next->movie,head->next ->ID");
//TASK 4
if (head !=Null){
    structNode *toDelete=head ;
head=head->next;
free (todelete):
}
printf("\n task4:Expected output (After removing first movie):\n")
temp= head;
while (temp!=Null){
    printf("%s(%d)";temp-> Movie title , temp ->ID);
if (temp->next!=Null)
printf("->");
temp=temp->next;
printf("->Null\n");
}
return 0;
}





