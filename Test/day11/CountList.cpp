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

Node* CreteList(){
    Node* Head = nullptr;
    Node* tail = nullptr;
    int val;

    while(true){
        cin >> val;
        if(val == -1) break;
        Node* curr = new Node(val);
    
        if(Head == nullptr){
            Head =  curr;
            tail =  curr;
        } else {
            tail->next = curr;
            tail = curr;
        }
    }
    
    return Head;
}

int count(Node*Head){
    int count = 0;
    while(Head){
        count++;
        Head = Head->next;
    }
    cout << count ;
}

void printList(Node*Head){
    while(Head){
        cout<<Head->data <<"->";
        Head = Head->next;
    }
    cout<<"Null"<<endl;
}

int main() {
    Node* Head = CreteList();
    printList(Head);
    count(Head);
}

