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

    for(int i = 0; i < arr.size(); i++){
        Node* curr = new  Node(arr[i]);
        if(Head == nullptr){
            Head = curr;
            ptr = curr;
        } else {
            ptr -> next = curr;
            ptr = curr;
        }
    }
    return Head;
}

Node* insertTargetVal(Node* Head, int target, int val){
    Node* ptr = Head;

    while(ptr != nullptr && ptr->next != nullptr){
        if(ptr->next->data == target){
            Node* curr = new Node(val);
            curr -> next = ptr->next;
            ptr->next = curr;
            break;
        }
        ptr = ptr->next;
    }
    return Head;
}
void printList(Node* Head){
    while(Head){
        cout<<Head->data <<"->";
        Head = Head->next;
    }
    cout<<"Null"<<endl;
}

int main (){
    vector<int> arr = {10, 20, 30, 40, 50};
    Node* Head = insertVal(arr);
    printList(Head);
    cout<<"before the insertion of new val"<<endl;

    insertTargetVal(Head, 30, 25);
    printList(Head);

}