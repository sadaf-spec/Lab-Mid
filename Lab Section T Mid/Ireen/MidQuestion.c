#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
char name[20];
char Name;
int marks;
struct node *next;
}node;



void CreateLinkedList(char data[],int arr[],int n)//Task 1
{
struct    node *head=NULL;
struct    node *temp;
  struct  node *Newnode;

    int i;
    for( i=0;i<n;i++)
    {
 Newnode = (node*)malloc(sizeof(node));
    Newnode->Name = arr[i];
    Newnode->next = NULL;
        if(head==NULL)
        {
            head=Newnode;
        }
        else{
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next= Newnode;
            temp= Newnode;
        }
    }

    for(i=0;i<n;i++)
    {
      Newnode = (node*)malloc(sizeof(node));
    Newnode-> marks= arr[i];
    Newnode->next = NULL;
        if(head==NULL)
        {
            head=Newnode;
        }
        else{
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next= Newnode;
            temp=Newnode;
        }
    }
}

//Task 2
void PrintList(char data[],int arr[],int n)
{   node *head=NULL;
    node *temp;
    node *Newnode=(node*)malloc(sizeof(node));
    int i;
    if(head==NULL)
        return Newnode;
    while(temp!=NULL)
    {
        printf("%s(%d)\n",temp->name,temp->marks);
    }
}
//Task 3

    void UpdateMark(node *head,int value)
    {
       head->next->marks = value;
    }

//Task 4
node* Delete(node *head)
{
    node *temp=head;
    head = head->next;
    free(temp);
    return head;
}
int main()
{
    int n=3;
    int i;
    int arr[n];
    char data[20];
    node *head;
    int T=20;
    for(i=0;i<n;i++)
    {
        gets(data);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",arr[i]);
    }
     CreateLinkedList(data,arr,n);
     PrintList(data,arr,n);

     UpdateMark(*head,T);
     printf("Marks successfully updated");

     Delete(*head);
     return 0;
}
