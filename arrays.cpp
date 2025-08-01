#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    /*int arr[10] = {1,2,3,4,5,6,77,87,90,101};

    for(int i = 0; i <= 10; i++){
        cout << arr[i] << endl;
    }
    cout << endl;*/
    int sum =0;
    int N;
    cout << "Enter the size of the array" << endl;
    cin >> N;

    int arr[10];
    // for enterring the valuse of array
    for(int i = 0; i < N; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    // for printing the values of array
    cout << "The values of the array are:" << endl;
    for(int i = 0; i < N; i++){
        cout << arr[i] << endl;
    }
    cout << "sum of the array is: " << sum << endl;
    cout <<"size of array is :" << sizeof(arr) << endl; // This will 
    cout << "avg "<< (float)sum/N << endl; // This will give the average of the array
    
    int max = arr[0];
    int min = arr[0];

    //finding the max amin of the array
    for(int i = 1; i <N; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min ){
            min = arr[i];
        }

    }
    cout << "max is: "<< max << endl;
    cout << "min is: "<< min << endl;

    //reversing the array
    reverse(arr, arr + N);
    cout << "reverse arr is " << endl;
    
    for(int i = 0; i < N; i++){
        cout << arr[i] <<endl;
    }
    return 0;
}