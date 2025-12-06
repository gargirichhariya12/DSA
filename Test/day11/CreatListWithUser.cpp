#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

Node* CreateList() {
    Node* Head = nullptr;
    Node* tail = nullptr;
    int val;

    cout << "Enter the values (-1 to stop): ";

    while(true){
        cin >> val;
        if(val == -1)break;

        Node* curr = new Node(val);

        if(Head == nullptr){
            Head = curr;
            tail = curr;
        } else {
            tail->next = curr;
            tail = curr;
        }
    }
    return Head;
}

void printList(Node* Head){
    while(Head){
        cout << Head->data << "->";
        Head = Head->next;
    }
    cout << "null";
}

int main(){
    Node* Head = CreateList();
    printList(Head);
}