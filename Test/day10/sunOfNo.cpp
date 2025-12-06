#include<iostream>
#include<vector>
using namespace std;

int sumOfArr(vector<int> &arr, int index) {
    int n = arr.size();
    if(index == n) return 0;

    return arr[index] + sumOfArr(arr, index + 1);
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    int result = sumOfArr(arr, 0);
    cout << result;

    return 0;
}
