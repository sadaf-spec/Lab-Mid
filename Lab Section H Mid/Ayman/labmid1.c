#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node {
char movie;
int id;
struct node * next;


};


int main (){

struct node*head = Null; *temp = Null*newnode=Null;
 create Node (char movie [], int ID)
//task 1
 char movie [3][30] = ("Inception", "Intersteller", "The Dark knight");
 int id [3] = (301,312,278);
 for (int i=0;i<3;i++)
    newnode = (struct node*)malloc (sizeof(struct node));
    strcpy(newnode->movie, movie[]);
    newnode->ID=ID[i];
    newnode->next=Null;
    if(head==Null){
        head= newnode;
        }
            else{
                temp=head;
                while (temp->next !=Null)
                {
                    temp=temp->next;
                }
            }

printf(Task 1:"Three Movies Added to the list,\n");
//task 2

printf("/n, task 2: list after step 3:\n");
temp = head


while (temp!=Null){
    printf("%s(%d)->";temp->title,temp->ID);

    temp=temp->next
}
printf("Null\n")
//Task 3
if(head!= Null && head->next!=Null)
{

    head->next -> ID=599;
}
printf("/n task 3: "rental ID of the second movie update\n");
printf("After update : %s (%d)/n,head->next->movie,head->next->ID");
//task 4

if (head !=Null){
    struct node *toDelete=head;
    head=head->next;
    free(todelete);

}
printf("\n task4:Expected output(after removing first movie):\n")
temp = head;
while (temp!=Null){
    printf("%s(%d);"temp-> Movie, temp->ID);
    if(temp->next!=Null)
        printf("->");
    temp=temp->next;
    printf("->Null\n");
}

return 0;

}


