#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node( int val){
        data = val;
        next = nullptr;
    }

};

Node* InsertVal(vector<int> &arr){
    Node* Head = nullptr;
    Node* ptr = nullptr;

    for(int el : arr){
        Node* curr = new Node(el);

        if(Head == nullptr){
            Head = curr;
            ptr = curr;
        }else{
            ptr -> next = curr;
            ptr = curr;
        }
    }
    return Head;
}

Node* deleteHead(Node* Head){
    if(Head == nullptr) return nullptr;

    Node* temp = Head;
    Head = Head->next;
    delete temp;
    return Head;
}

void printList(Node* Head){
    while(Head){
        cout << Head->data <<"->";
        Head = Head->next;
    }
    cout<<"null"<<endl;
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50};

    Node* Head = InsertVal(arr);
    printList(Head);

    Head = deleteHead(Head);
    printList(Head);

}