#include <stdio.h>
#include <stdlib.h>

struct node
{
    char name[20];
    int marks;
    struct node *next;
};

struct node *head = NULL;


//Task 1

void insert(char name[], int marks)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));


    strcpy(newnode->name, name);
    newnode->marks = marks;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        struct node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

//Task 4

void deletefirst(char name[])
{

    struct node* temp= head;

    head=head->next;
    free(temp);

}

//Task 3
void update()
{
    struct node* temp= head;

    if(head == NULL || head->next == NULL){

        return;
    }
    temp=head->next;
    temp->marks=20;


}




// Task 2
void display()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%s%d -> ", temp->name, temp->marks);
        temp = temp->next;
    }
    printf("NULL");
}

int main()
{
    insert("Ayan", 12);
    insert("Nabila", 15);
    insert("Farhan", 18);


    printf("After insert : "); //Task 1
    display();
    printf("\n");

    update();//Task 3
    printf("Marks Update successfully\n");
    display();

    printf("\n");


    deletefirst("Ayan");//Task 4
    printf("After delete : ");
    display();

    return 0;
}


