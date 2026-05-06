#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{
    char title[30];
    int id;
   struct Node* next;
};

struct  Node* headL;
void insert_last(char name[], int id){
struct Node* new_Node;
new_Node=(struct Node*)malloc(sizeof(struct Node));
strcpy(new_Node->name, name);
new_Node->data=id;
new_Node->next=NULL;
if(head==Null){
    head=new_Node;
    return;
}
struct Node* current =head;
while(current->data!=NULL){
    current=current->next;
}
current->next=new_Node;
}
//task 3
void rental_id(char name[], int target){
struct Node* new_Node;
new_Node=(struct Node*) malloc(sizeof(struct Node));
new_Node->data=value;
new_Node->next=NULL;
struct node* current=head;
while(current->next!=target){
    current=current->target;
}
current->next =target;

}
//task 4
void delete_fast( ) {
struct Node* current=head;
struct Node* current;
while (current->next=NULL;
}


}
void printlist( ) {
    struct Node* current;
    current=head;
    while(current->next!=NULL){
        printf("%S(%d)",current->name,current->id);
        current=current->next;
    }
    printf("\n");
}
int main() {
    insert_last("inception,301");
    insert_last("Interstellar,412");
    insert_last("The Dark Knight,278");
    printlist( );
    rental_id( "Interstellatar,599"):
        printlist( );
}
