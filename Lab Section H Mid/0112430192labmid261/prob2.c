#include<stdio.h>
#include<stdlib.h>

struct node
{
    char title[30];
    int id;
    struct node* next;

};
struct node* head = NULL;
struct node* next = NULL;



void insertfirst(char title[30],int id)                     /// task 1
{
    struct node* newnode =(struct node*)malloc(sizeof(struct node));
    if(head == NULL)
    {
        head = newnode;
        return;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }

}


void printlist()                           /// task 2
{

    struct node* temp = head;

    while(temp != NULL )
    {
        for(int i= 0 ; i<30  ; i++)
        {
            printf("%ch,(%d)",temp->title[i], temp->id);
        }
        printf("\n");
        temp = temp->next;
    }
}




void updateid(int uid)                                          /// task 3
{
    if(head == NULL)
    {
        printf("nothing to update.");
        return;
    }
    head->next->id = uid;
    printf("rental ID updated.");
}



void removefirst()                                              /// task 4
{
    if(head == NULL)
    {
        printf("null");
        return;
    }
    else if(head->next = NULL)
    {
        free(head);
    }
    else
    {
        struct node* temp = head;
        head=head->next;
        free(temp);

    }
}





int main()
{
    insertfirst("inception",301);
    insertfirst("interstaller",412);/// t-1
    insertfirst("The Dark Knight",278);

    printlist(); ///t-2

    updateid(599);///t-3

    removefirst();///t-4


}
