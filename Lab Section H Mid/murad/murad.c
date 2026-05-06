#include<stdio.h>

typedef struct Node{
char title [30];
int id;
struct Node*next;
}

Node;
Node*head =NULL;


 void insert(int val){

  Node*newNode=(Node*)malloc(sizeof(Node));
  newNode->id=val;
  newNode->next=NULL;



 if (head==NULL){
        head=newNode;

    return;

}

  Node *traveler=head;


  while(traveler->next!=NULL)
    {
    traveler=traveler->next;
  }
  void update(int up,Node*head)
  {
      Node*traveller=head;
      traveller =traveller=head;
      traveller=up;
  }


  void del(Node*head)
{
    Node*traveller=head;

    Node*temp =head;
    head=temp->next;
    free(temp);


  }


int main()
{
    insert(302);
    insert(412);
    insert(278);
    print(head);
    update(head);
    print(head);
    del(head);
    print(head);


    return 0;


}
