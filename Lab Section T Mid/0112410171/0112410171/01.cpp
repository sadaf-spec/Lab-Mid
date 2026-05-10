#include <iostream>
using namespace std;

struct Node {
    string name;
    int marks;
    Node* next;
};

int main() {
    Node *head = NULL, *temp, *newNode;


    string names[3] = {"Ayan", "Nabila", "Farhan"};
    int marksArr[3] = {12, 15, 18};

    for (int i = 0; i < 3; i++) {
        newNode = new Node();
        newNode->name = names[i];
        newNode->marks = marksArr[i];
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
    }

    cout << "Student Records:\n";
    temp = head;
    while (temp != NULL) {
        cout << temp->name << " (" << temp->marks << ")" << endl;
        temp = temp->next;
    }


    temp = head;
    if (temp != NULL && temp->next != NULL) {
        temp = temp->next;
        temp->marks = 20;
        cout << "\nMarks successfully updated.\n";
    }


    cout << "\nUpdated Records:\n";
    temp = head;
    while (temp != NULL) {
        cout << temp->name << " (" << temp->marks << ")" << endl;
        temp = temp->next;
    }

    return 0;
}
