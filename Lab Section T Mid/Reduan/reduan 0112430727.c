#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct node
{
    char name[20];
    int marks;
    struct node*next;

};
struct node*insertend(struct node*head,char name[],int marks)
{

    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    strcpy(newnode->name,name);
    newnode->marks=marks;
    newnode->next=NULL;

    if(newnode=NULL)
    {
        return newnode;
    }
    struct node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;

    return head;
}
struct node*deletefirst(struct node*head)
{
    struct node*temp=head;
    head=head->next;
    free(temp);
    return head;
}

void display(struct node*head)
{
    while(head!=NULL)
    {
        printf("%s%d->",head->name,head->marks);
        head=head->next;

    }
    printf("NULL");
}
int main()
{
    struct node*head=NULL;

    head=insertend(head,"ayan",12);
    head=insertend(head,"nabila",15);
    head=insertend(head,"Farhan",18);

    printf("before marks:");
    if(head && head->next)
    {
        head->next->marks="20";
    }
    printf("after marks:%s%d->",head->name,head->marks);
    printf("Marks successfully updated");



    deletefirst(head);

    display(head);


return 0;
}



