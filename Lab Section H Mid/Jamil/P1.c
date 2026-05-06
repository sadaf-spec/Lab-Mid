#include<stdio.h>

typedef struct Node
{
    char title[30];
    int id;
    struct Node* next;
}

Node;
Node *head = NULL;



void insert(int val)
{

    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->id = val;
    newNode->next= NULL;


    if(head==NULL)
    {
        head=newNode;
        return;
    }


    Node *traveler= head;

    while(traveler->next!=NULL)
    {
        traveler = traveler->next;
    }
    traveler->next=newNode;
}
void update(int up,Node* head)
{

    Node* traveller=head;

    traveller=traveller->next;
    traveller=up;


}
void del(Node* head)
{


    if(head==NULL)
    {
        printf("List is already empty !\n");
        return;
    }
    Node *temp = head;
    head = temp->next;
    free(temp);

}


void print(Node* head)
{
    Node* traveller=head;
    while(traveller!=NULL)
    {
        printf("\n%d\n",traveller->id);
        traveller=traveller->next;
    }
}

int main()
{

    insert(302);
    insert(412);
    insert(278);
    print(head);
    printf("---------");
    update(333,head);
    print(head);
    printf("---------");
    del(head);
    print(head);
    return 0;
}
