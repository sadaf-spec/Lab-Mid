#include <iostream>

using namespace std;

struct node{
    string title;
    int id;
    node* next;
};

node* head = new node;

void addAtEnd(int ID, string name){
    node* temp = new node;
    temp->id = ID;
    temp->title = name;
    temp->next = nullptr;


    if(!head->id){
        head = temp;
        cout<<"First movie!"<<endl;
    }


    node* curr = new node;
    curr = head;

    while(curr->next){
        cout<<"Inside loop"<<endl;

        if(curr->next = nullptr){
            break;
        }
        if(curr->next){
            curr = curr->next;
        }
        //std::cout<<"after break"<<endl;

    }

    //std::cout<<"outside loop"<<endl;
    curr->next = temp;
    //std::cout<<"after insertion"<<endl;

}

void updateID(int _ID, int newID){
    node * incr =new node;
    incr = head;
    while(incr->next!=null){
      incr=incr->next;
      if(incr->id == _ID){
        incr->id == newID;
      }
    }

}

void deleteAtN(int position){
    node* temp = new node;
    node* toBeDeleted = new node;
    temp = head;
    for(int i=0; i<position-1;i++){
        while(temp-next){
            temp = temp->next;
        }

    }

    toBeDeleted = temp;
    temp->next;
    delete temp;
}


int main()
{
    string nameOfMovie;
    int _id;
    cout<<"Enter the name of the movie:"<<endl;

    cin>>nameOfMovie;
    cout<<"Enter the ID:"<<endl;
    cin>>_id;
    addAtEnd(_id, nameOfMovie);

    cout<<"Enter the name of the movie:"<<endl;

    cin>>nameOfMovie;
    cout<<"Enter the ID:"<<endl;
    cin>>_id;
    addAtEnd(_id, nameOfMovie);

    cout<<"Enter the name of the movie:"<<endl;

    cin>>nameOfMovie;
    cout<<"Enter the ID:"<<endl;
    cin>>_id;
    addAtEnd(_id, nameOfMovie);

    cout<<head->title;



    node* traversal = new node;
    traversal = head;
    while(traversal->next){
        if(traversal->next){
            cout<<"traversing"<<endl;
            cout<<traversal->title<<endl;
            cout<<traversal->id<<endl;
            traversal=traversal->next;
        }


    }

    //cout << newNode->id << endl;
    return 0;
}
