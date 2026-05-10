#include<stdio.h>
#include<string.h>
typedef struct Node
{
    char name[50];
    int data;
    struct Node*next;
} Node;
Node *createnode(char name[],int data)
{
    Node*n=new Node;
    strcpy(n->name,name);
    n->data=data;
    n->next=nullptr;
    return n;
}
Node*head=nullptr;
Node *insertend(char name[],int data)
{
    Node*e=createnode(name,data);
    if(head==nullptr)
    {
        head=e;
        return head;
    }
    Node*temp=head;
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next=e;
    return head;
}
void clean()
{
    Node*temp=head;
    head=head->next;
    delete temp;
}

void dispaly()
{
    Node*p=head;
    while(p!=nullptr)
    {
        printf("%s(%d)->",p->name,p->data);
        p=p->next;
    }
    printf("Null\n");
}

void update()
{
    Node*temp=head;
    head->next->data=20;

}

int main()
{
    int n,d;
    char name[50];

    insertend("Ayan",12);
    insertend("Nabila",15);
    insertend("Farhan",18);
    dispaly();
    update();
    dispaly();
    printf("Marks successfully updated.\n");
    clean();
    dispaly();
}
