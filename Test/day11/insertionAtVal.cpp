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

Node* InsertVal(vector<int> &arr)
{
    Node* Head = nullptr;
    Node* ptr = nullptr;

    for (int el : arr)
    {
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

void insertAfter(Node* Head, int target, int newVal){
    Node* temp = Head;

    while(temp != nullptr){
        if(temp->data == target){
            Node* newNode = new Node(newVal);
            newNode->next = temp->next;
            temp->next  = newNode;
            return;
        }
        temp = temp->next;
    }
    cout << "Target Not Found\n";
}

void printList(Node* Head){
    while(Head){
        cout << Head->data << "->";
        Head = Head->next;
    }
    cout << "NULL\n";
}

int main(){
    vector<int> arr = {10, 20, 30, 40};

    Node* head = InsertVal(arr);

    cout << "Before insertion:\n";
    printList(head);

    insertAfter(head, 30, 35);

    cout << "After insertion:\n";
    printList(head);

    return 0;
}
