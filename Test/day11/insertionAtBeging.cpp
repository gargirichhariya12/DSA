#include<iostream>
#include <vector>
using namespace std;

//creating an structure of an linked list 
class Node {
    public:
    int data; // create an node
    Node* next; // created an block to store an address

// creating an nodes data 
    Node(int val){
        data = val;
        next = nullptr;

    }
};
// creating an function to put values
int InsertVal(vector<int>& arr){
    Node* Head = nullptr;
    for(int i = 0; i < arr.size(); i++){
        Node* curr = new Node(arr[i]);
        curr->next = Head;
        Head = curr;
    }
    
    //printing the values
    while(Head){
        cout<< Head ->data <<"->";
        Head = Head -> next;
    }
}

int main () {
    vector<int> arr = {10, 20, 30, 40};

    InsertVal(arr);
}

/*class Node {
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = nullptr;
        }
        
};
int InsertVal(vector<int> &arr){
    Node* head = nullptr;
    for(int el : arr){
        Node* curr = new Node(el);
        curr -> next = head;
        head = curr;
    }
        while(head){
            cout<<head->data << "->"
        }
    }
*/