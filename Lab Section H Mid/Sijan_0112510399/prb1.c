#include<stdio.h>
#include<stdlib.h>

struct node{
     char title[30];
     int id;
     struct node* next;

};
struct node* head = NULL;

//Task 1
void insertfirst(char title[30];int id;)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if(head == NULL){
        head = newnode;
        return ;
    }
    else{
        newnode -> next = head;
        head = newnode;
    }
}

//Task 2
void printlist()
{
    struct node* temp = head;



    while(temp != NULL){
             for(int i =0; i<30;i++){
                printf("%ch (%d)", temp->title[i],temp->id);
             }

        printf("/n");



            temp = temp->next;
    }


}


//Task 3
void updated(int uid)
{
    if(head == NULL){
        printf("nothing to updated");
    }
    head->next->id=uid;
    printf("rental Id updated :");
}

//task 4
void removefirst()
{
    if(head == NULL){
        printf("null");
        return;
    }
    else if(head->next = NULL){
        free (head);
    }
    else{
        struct node* temp = head;
        head= head->next;
        free(temp);
    }
}

int main()
{
    //t1
    insertfirst("inception",301);
    insertfirst("interstaller",412);
    insertfirst("The Dark Knight",278);


    //t2
    printlist("Inception",301);

    //t3
    updated(599);

    //t4
    removefirst();


}
