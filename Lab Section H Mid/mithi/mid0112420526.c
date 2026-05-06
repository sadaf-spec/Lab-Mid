#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node
{
    char tittle[30];
    int Id;
    struct Node* next;
};


int main()
{
    struct Node* head = Null,
    *temp = Null,*newnode = Null;
    //task 1
    char movie [3][30]= {"Inception","Intersteller","The Dark Knight"};
    int Id[3]= {301,412,278};
    for(int i= 0; i<3; i++)
    {
        newnode= (struct Node*)Malloc(sizeof(struct Node));
        strcpy(newnode->tittle,tittle []);
        newnode->Id = Id[i];
        newnode-> next = Null;
        if(head == Null)
        {
            head =newnode;m
        }
        else
        {
            temp=head;
            while (temp->next != Null)
            {
                temp = temp->next;
            }
        }
        printf("Task 1:Three movies added to the list,\n");
//task 2
        printf("\n,task 2: list after step 3:\n");

        temp = head;
        while (temp!=Null)
        {
            printf("%s(%d)->",temp->tittle,temp->Id);
            temp = temp-> next;
        }
        printf("Null\n");

//task3
        if (head != Null&& head-> next!=Null)
        {
            head->next->Id=599;
        }
    }
    printf("\n task 3:Retal Id of the second movie Updated.\n");
    printf("After Update:%s(%d)\n,head->next->movie,head->next->Id");

    //task 4
    if (head!=null){
        structNode*toDelete=head;
        head = head-> next;
        free(toDelete);}
        printf("\n task4:Expected output(After removing first movie):\n")
        temp=head;
        while(temp!=Null){
            printf("%s(%d)",temp->tittle,temp->Id);
            if (temp->next!= Null)
                printf("->");
                temp=temp->next;

        }
        printf("->Null\n");
        return 0;
    }














