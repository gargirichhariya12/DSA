#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

int InsertVal(vector<int> &arr)
{
    Node*Head = nullptr;
    Node *ptr = nullptr;


    for (int el : arr)
    {
        Node *curr = new Node(el);

        if(Head == nullptr){
            Head = curr;
            ptr = curr;
        } else {
            ptr -> next = curr;
            ptr = curr;
        }
    }

    while(Head){
        cout << Head->data << "->";
        Head = Head->next;
    }
}


int main()
{
    vector<int> arr = {10, 20, 30, 40};

    InsertVal(arr);
}