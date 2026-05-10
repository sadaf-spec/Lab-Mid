#include <stdio.h>
#include <stdlib.h>
struct clist {
    char name[100];
    int data[100];
    struct clist *next;
};
typedef struct clist cnode;

void createlist(char data[],int n)
{
    cnode *head=NULL;
    cnode*temp;
    cnode*newnode;

     for(int i=0;i<n;i++)
     {
         newnode=(cnode*)malloc(sizeof(cnode));
         newnode->data[i]=data;
         newnode->next=NULL;
         if(head==NULL)
         {
             head=newnode;

         }
         else
            while(temp->next!=NULL)
         {
             temp=temp->next;
         }
         temp->next=newnode;
     }

}

void display(cnode *head) {
    cnode *temp = head;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void Updatemark(cnode*head,int value)
{
    head->next->data=value;
}
cnode *deletee(cnode *head)
{

    cnode *temp=head;
    head=head->next;
    free(temp);
}

int main() {
int n=3;
int T=20;
int i;
int arr[30]={12,15,18};
char data[20][100]={"Ayan","Nabila","Farhan"};
cnode*head;
cnode *Updatemark;
createList(data, n);

    printf("Linked List: ");
  display(head);
  Updatemark(*head,T);
deletee(*head);

    return 0;
}
