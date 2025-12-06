#include<iostream>
#include<vector>
using namespace std;

int main () {
    vector<int> arr = {2, 4, 6, 7, 8, 12};
    int target = 7;

    for(int i = 0; i < arr.size(); i++){
        if (arr[i] == target)
        cout << arr[i] << "found";
    }
    return 0;
}