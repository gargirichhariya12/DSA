//we will use selection sort to sort an array
//Given an array of integers nums, sort the array in ascending order and return it. You must solve the problem without using any built-in functions
#include<iostream>
#include<vector>
using namespace std;

void Selectionsort(vector<int> &arr) {
    int n = arr.size();
    //selection sort
     for(int i = 0; i < n; i++){
    //     for(int j = i + 1; j < n; j++){
    //         if(arr[i] > arr[j]){
    //             swap(arr[i], arr[j]);
    //         }
    //     }
    //bubble sort
            // for(int j = 0; j < n - i - 1; j++){
            //     if(arr[j] > arr[j + 1]){
            //         swap(arr[j] , arr[j + 1]);
            //     }
            // }
    //insertion sort
        int pick = arr[i];
        int j = i - 1;

        while(j >= 0 and arr[j] > pick){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j +1] = pick;
            
     }

}
int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    Selectionsort(arr);

    for (int x : arr)
        cout << x << " ";
    cout << "\n";

}