#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct list
{
    int id;
    char movie[50];
    struct list * next;
    struct list * perv;
};
typedef struct list node;
//task 1
void insert_at_tail(node ** head, node ** tail , char movie[], int  size_of_string , int  id )
{
    node * newnode = (node*)malloc(sizeof(node));
    newnode ->id=id;
    for (int i = 0; i < size_of_string; i++)
    {
        newnode->movie[i]=movie[i];
    }
    newnode->movie[size_of_string]='\0';
    newnode->next=NULL;
    newnode->perv=NULL;
    if(*head==NULL)
    {
        *head = newnode;
        *tail = newnode;
        return;
    }
    (*tail)->next=newnode;
    newnode->perv=*tail;
    *tail=newnode;
}
// task 2
void print_list(node * head)
{
    node * temp = head;
    while (temp != NULL)
    {
        printf("%s , Id: %d \n",temp->movie,temp->id);
        temp=temp->next;
    }
    printf("NULL\n");
}
//task 3
void update_2nd_id(node ** head , int newid)
{
    if(*head==NULL)
    {
        printf("list is empty\n");
        return;
    }
    if((*head)->next==NULL)
    {
        printf("dont have enought node\n");
        return;
    }
    (*head)->next->id=newid;
    printf("Message : Rentel ID updated\n");
    
    
}
//task 4 
void delete_from_head(node ** head,node ** tail)
{
    if(*head==NULL && *tail== NULL)
    {
        printf("list is empty\n");
        return;
    }
    node * deletenode = *head;
    *head=(*head)->next;
    if(*head==NULL)
    {
        *tail=NULL;
        return;
    }
    (*head)->perv=NULL;
    free(deletenode);
}
int main()
{
    node * head = NULL;
    node * tail = NULL;
    insert_at_tail(&head,&tail,"inception",strlen("inception"),301);
    insert_at_tail(&head,&tail,"interstellar",strlen("interstellar"),412);
    insert_at_tail(&head,&tail,"The Dark Kinght",strlen("The Dark Kinght"),278);
    print_list(head);
    update_2nd_id(&head,599);
    print_list(head);
    printf("\n");
    delete_from_head(&head,&tail);
    print_list(head);

     return 0;
}
