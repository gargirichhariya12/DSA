#include<iostream>
#include<algorithm>
using namespace std;

int main () {
   /* int arr[10] = {1, 2, 3,4, 5, 6, 44, 23};
    int N = 8;
    

    int pos = 3;
    int val = 45;

    for(int i = N; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    N++;

    cout << "Arrays after insertion:" << endl;
    for(int i = 0; i< N; i++){
        cout << arr[i] << " ";
    }*/
    int N;
    cout << "enter the size of array :" << endl;
    cin >> N;
    int arr[10];

    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    cout << "the array is  ";
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // now we will enter the new  val in the array at a position given by the user
    int pos;
    cout << "enter the position "<< endl;
    cin >> pos ;

    int val;
    cout <<"enter the value "<< endl;
    cin >> val;

    for(int i = N; i > pos; i--){
        arr[i] = arr[i - 1];
    }
    arr[pos] = val;
    N++;

    cout << "new array is  ";
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }

    
    return 0;
}