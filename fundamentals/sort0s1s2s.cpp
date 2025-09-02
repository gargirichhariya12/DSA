#include<bits/stdc++.h>

using namespace std;

void sort(vector<int>& arr) {
    int  size = arr.size();

    vector<int> count(3, 0);

    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }

    int i = 0;

    for (int n = 0; n < 3; n++) {
        for (int k = 0; k < count[n]; k++) {
        arr[i++] = n;
        }
    }
}

int main() {
    vector<int> arr = {1, 1, 2, 0, 1, 2, 1, 0, 2, 1, 1};

    int n = arr.size();

    sort(arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

}