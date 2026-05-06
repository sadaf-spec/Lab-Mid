#include<stdio.h>

struct Node
{
    char title[30];
    int id;
    struct Node* next;
    int temp;
};

struct Node *head = NULL;

void print_List()
{
    while(temp !=NULL){
    printf("%d", temp>title, temp>id);
}
if(temp->value !=NULL)
{
    printf("->");
}
printf("\n");
}
//task 2
void instert_end(char title, int id)
{
    struct Node *new_item = (struct Node *)(sizef(struct Node));

    new_item-> new_title=NULL;
    new_item-> value = value;
    new_item-> next = NULL;


 if (head == NULL)
    {
       head = new item;
       return;
    }
    struct Node *temp = head;
    while(temp-> next != NULL){
            temp=temp->next;

    }
    temp-> next = new_item;
    temp_next=new_item;
}

void task_3(int id){
struct Node *temp = head;

while(temp != NULL && temp -> value)
{
    temp = temp -> next;
}
temp->next = next;
}

void task_4(int value){
    struct Node *temp = head;
    head=temp->next;
    free(temp);
}



void display(){
struct Node *temp=head;
while(temp!=NULL){
    printf("%d", temp-> value);
    temp = mtemp->next;
    if(temp->value!=NULL){
        printf("\n");
    }
}
}

int main()
{
    insert_end(301);
    insert_end(412);
    insert_end(278);

    print_list();
    print_list();
    task_4();
    void display();


    return 0;
}






