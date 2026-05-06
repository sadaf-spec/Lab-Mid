
//task1
#include <stdio.h>
#include <stdlib.h>

int main() {

    insertAtfirst(301);
    insertAtsecond(412);
    insertAtthird(278);

char name="Inception";
char name="Interestellar";
char name="The Dark Knight";
printList();

typedef struct Node{
        int data;
        struct Node* next_ptr;

}

Node *head = NULL;

struct Node{
char tittle[30];
int id;
Node* next;

};



//task2
void insertMovie(int data){
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data= data;
    new_node->next_ptr = head;
    head = new_node;
}
printlist(
traveller == head
traveller -->1
traveller!=NULL:
print traveller->data
traveller = traveller->next_ptr;
traveller --> 2

)
void printList(){
    Node* traveller = head;
    printf("Movies");
    while(traveller!=NULL){
        printf("%d->", traveller->data);
        traveller = traveller->next_ptr;
    }
    printf("NULL\n");
}





//task3
int main()
{
    insertMovie(412);
    insertAtMovie(599);



char name="Interestellar";
char name="Interestellar";


printList();

return 0;




//Task4

     void deleteValue(int target) {

    Node* valuedelete= searchValue(target);

    if (valuedelete == NULL) {
        printf("Value %d not found.\n", target);
        return;
    }


    if (valuedelete == head) {
        deleteAtBeginning();
        return 0;
    }





