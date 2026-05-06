//task:1

#include<stdio.h>
#include<string.h>
struct node
{
   char name[20];
   int data;
  struct node* next;
}
int main()
{
  struct node *a,struct node *b, struct node *c;

  struct node *a=
 struct node *b=
 struct node *c=
  printf("1st name: ");
  scanf("%c" ,&a->name);
  printf("1st mark: ");
  scanf("%d" ,&a->data);
  a->=NULL;


  printf("2nd name: ");
  scanf("%c" ,&b->name);
  printf("2nd mark: ");
  scanf("%d" ,&b->data);
  b->=NULL;
  printf("3rd name: ");
  scanf("%c" ,&c->name);
  printf("2nd mark: ");
  scanf("%d" ,&c->data);
  c->=NULL;


}




//task 2
printf("List:\n");
temp = head;
while (temp !=NULL)
{
    printf("%s(%d)->"temp->,temp->marks);
    temp = temp>next;

}
printf("Null\n");


//task3
temp = head;
while(temp !=NULL)
{

    if(strmp(temp->name;"Nabila")==0)
    {
        temp->mark=20;
    }
    temp=temp->next;
}
printf("\nAfter Update:\n");
temp head;
while(temp !=NULL);
{
    printf("%s(%d)->"'temp->marks);
    temp = temp->next;

}
printf ("Null\n");



//task 4

struct Node*del;
if(head != Null)
{
    del=head;
    head=head->next;
    free(del);

}
printf("\nAfter Update:\n");
temp=head;

while(temp !=NULL);
{
    printf("%s(%d)->"'temp->marks);
    temp = temp->next;

}
printf ("Null\n");


