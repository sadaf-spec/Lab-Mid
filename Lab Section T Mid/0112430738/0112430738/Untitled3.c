#include<stdio.h>
#include<stdlib.h>
struct node
{
        char name[20];
        int data;
        struct node* next;
};


int main()
{
        //1
struct node *a=(struct node*)malloc(sizeof(struct node));
struct node *b=(struct node*)malloc(sizeof(struct node));
struct node *c=(struct node*)malloc(sizeof(struct node));

printf("1st name:");
scanf("%s",a->name);
printf("1st mark:");
scanf("%d",&a->data);
a->next=NULL;

printf("2nd name:");
scanf("%s",b->name);
printf("2nd mark:");
scanf("%d",&b->data);
b->next=NULL;

printf("3rd name:");
scanf("%s",c->name);
printf("3rd mark:");
scanf("%d",&c->data);
c->next=NULL;


//2
printf("%s(%d)->",a->name,a->data);
printf("%s(%d)->",b->name,b->data);
printf("%s(%d)->",c->name,c->data);
printf("NULL\n");

//3
int i=1;
int n=3;
for(i=1;i<n;i++)
{
  if(i==2)
  {
printf("Update mark for 2nd student is:");
scanf("%d",&b->data);
printf("Marks Successfully updated.\n");
  }

}
printf("After Update:\n");
printf("%s(%d)->",a->name,a->data);
printf("%s(%d)->",b->name,b->data);
printf("%s(%d)->",c->name,c->data);
printf("NULL\n");



        return 0;
}

