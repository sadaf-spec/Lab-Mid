#include<stdio.h>

//I tried character bpart in this code but it didn't run

struct node
{
    char name[20];
    int data;
    int id;
    struct node *next;
};
struct node * head=NULL;

//Task 1
void insertAtEnd(char name[],int id)
{
    struct node *newitem;
    newitem=(struct node*)malloc(sizeof(struct node));
    for(int i=0;i<20;i++)
    {
        newitem->data=name[i],id;
    }

    newitem->data=id;
    newitem->next=NULL;


    if(head==NULL)
    {
        head=newitem;
        return;
    }


    struct node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newitem;
    newitem=temp;

}

void printList()
{
    if(head==NULL)
    {
        return;
    }
    printf("List: ");
    struct node *temp=head;
    while(temp!=NULL)
    {
        for(int i=0;i<20;i++)
    {
        printf("%ch(%d)", temp->name[i],temp->id);
    }
        temp=temp->next;
        printf( " - > ");
    }

    printf( " NULL\n");
}

//Task2
void display()
{
    if(head==NULL)
    {
        return;
    }
    struct node *temp=head;
    printf("Display:\n");
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

//Task 3
void update(int value)
{
     struct node *temp=head;
     while(temp->data!=412)
     {
         temp=temp->next;
     }
     temp->data=value;
}

//Task 4
void RemoveFirstMovie()
{
    struct node *temp=head;
    head=temp->next;
    free(temp);
}

int main()
{
    insertAtEnd('Inception',301);
    insertAtEnd('Insteller',412);
    insertAtEnd('The Dark Knight',278);
     printList();
    display();

   update(599);
    printList();

    RemoveFirstMovie();
    printList();
    return 0;

}

