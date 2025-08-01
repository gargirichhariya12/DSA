#include<iostream>
using namespace std;

int main (){
    int N;
    cout << "enter the size of array" << endl;
    cin >> N;
    int arr[10];

    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    cout << "array is"<<endl;
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int val;
    cout << "Enter the value u want to enter the new val" << endl;
    cin >> val;
    int newVal;
    cout << "enter the New val" << endl;
    cin >> newVal;
    for(int i = 0; i < N; i++){
        if(arr[i] == val){
            //shifting the size of array
            for(int j = N; j > i - 1; j--){
                arr[j] = arr[j - 1];
            }
            arr[i + 1] = newVal;
            N++;
            break;
        }
    }


    cout << "new array is  ";
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    return 0;
}