#include<stdio.h>

struct Node
{
    char title [30];
    int id;
    int value;
    struct Node*next
};
struct Node *head = Null;

void print_list()
{
    struct Node* temp = head;
    while(temp != null){
        printf("%d", temp -> value);
        temp = mtemp-> next;
        if(temp -> value != Null)
        {
            printf(" ->")
        }
    }
    printf("Null");
}
void task_2()
{

}
void insert_end( char titel, int value)
{
    struct Node* new_item = (struct node*)malloc(sizeof(struct Node));
    new_item -> titel = titel;
    new_item -> value= value;
    new_item -> next =Null;

    if(head == Null)
    {
        head = new_item;
        return;
    }

void task_3(int id, int target){

    struct Node *temp = head;
    while(temp -> next != Null)
    {
        temp = temp -> next;
    }
    temp -> next = new_item;

}
void task_4(int value)
{
    struct node* temp = head;
    head = temp -> next;
    free(temp);
}
void RemoveFirstMovie()
{
    struct Node* temp
}
void display()
{
    struct Node* temp = head;
    while(temp != null){
        printf("%d", temp -> value);
        temp = mtemp-> next;
        if(temp -> value != Null)
        {
            printf(" ->")
        }
    }
    printf("Null\n");
}
int main()
{
    insert_end(301);
    insert_end(412);
    inser_end(278);

    print_list();
    task_4();
    void display():

    return 0;
}
