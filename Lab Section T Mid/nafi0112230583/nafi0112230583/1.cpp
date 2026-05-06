#include<iostream>

using namespace std;

struct Node
{
    string name;
    int mark;
    Node*next;
};
//task 1------
void insertEnd(Node* &head,string name,int mark){
 Node  *newNode=new Node();
if(head==NULL){
    head=newNode;
}else{
Node *temp=head;
while(temp->next!=NULL){
temp=temp->next;
}
temp->next=newNode;
newNode->next=NULL;
}
}
//task2-------
void display(Node *&head,string name,int mark){
Node *temp=head;
while(temp->next!=NULL){
    cout<<name<<" ";
    cout<<mark<<" ";
    temp=temp->next;
}
}
//task 3------

void updateMark(Node *&head,int newmark){
  head->next->mark=newmark;
  }

//task 4----
void delet(Node* &head){
if(head==NULL){
    return;
}else{
Node *temp=head;
 head=head->next;
 delete(temp);
}

}
int main(){
int n;
string name;
int mark;
Node* head=NULL;
cout<<"enter the number of student:";
    cin>>n;
cout<<"enter name and mark:";
for(int i=0;i<n;i++){
    cin>>name;
    cin>>mark;
    insertEnd(head,name,mark);
}
display(head,name,mark);

int newMark;
cout<<"enter mark for second student:";
cin>>newMark;


updateMark(head,newMark);
display(head,name,mark);


delet(head);
display(head,name,mark);
}
