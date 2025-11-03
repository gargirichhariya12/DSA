//find the length of arr
//arr[] = [12, 35, 1, 10, 34, 1]
//let 1st element be max
//then compare it with each element if the next element is greater then the max 
// rename it as the new max

// int n = sizeof(arr)/ sizeof(arr[0]);

//     for (int i = 0 ; i < n ; ++i ){
//         if(arr[i] > max){
//             max = arr[i];
//         }
//     }

#include<iostream>
using namespace std;

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};

    int largest = arr[0];

    for (int el : arr) {
        if (el > largest) {
            largest = el;
        }
    }
}