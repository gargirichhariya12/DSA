#include<iostream>
#include<vector>
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

Node* insertVal(vector<int> &arr){
    Node* Head = nullptr;
    Node* ptr = nullptr;

    for(int el : arr){
        Node* curr = new Node(el);

        if(Head == nullptr){
            Head = curr;
            ptr = curr;
        } else {
            ptr->next = curr;
            ptr = curr;
        }
    }
    return Head;
}

Node* deleteEnd(Node*Head){
    if(Head == nullptr) return nullptr;

    if(Head->next == nullptr){
        delete Head;
        return nullptr;
    }

    Node* temp = Head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;

    return Head;

    
}
void printList(Node* Head){
    while(Head){
        cout << Head->data << "->";
        Head = Head->next;
    }
    cout << "null" << endl;
}

int main() {
    vector<int> arr = {10, 20, 30, 40, 50};

    Node* Head = insertVal(arr);
    printList(Head);

    Head = deleteEnd(Head);
    printList(Head);

}

    // if(Head == nullptr) return nullptr;

    // if(Head->next == nullptr){
    //     delete Head;
    //     return nullptr;
    // }
    // Node* temp = Head;

    // while(temp->next->next != nullptr){
    //     temp = temp->next;
    // }

    // delete temp->next;
    // temp->next = nullptr;

    // return Head;