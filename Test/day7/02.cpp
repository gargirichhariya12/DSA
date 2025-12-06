#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

// ### 2. Adjacent Average Pair Count

// Count how many adjacent pairs `(arr[i], arr[i+1])` have their **average present somewhere else** in the array.

// int n = 8;
// int count = 0;
// for (int i = 0; i < n; i++) {
//     for (int j = 0; j < n; j++) {
//         count++;
//     }
// }


bool isContain(vector<int>& arr, float n) {
    for (int x : arr) {
        if (x == n) return true;//1 
    }
    return false;
}

float avg(int a, int b) {
    return (a + b + 0.0) / 2;
}

int countAvgPairs(vector<int>& arr) {

    unordered_set<int> s(arr.begin(), arr.end());
    int count = 0;
    for (int i = 0; i < arr.size() - 1; i++) {
        float av = avg(arr[i], arr[i + 1]); 
        if (s.find(av) != s.end()) {
            count++;
        }
        // for (int x : arr) {// n^2 
        //     if (x == av) {
        //         count++;
        //          break;
        //     }
        // }
    }

    return count;
}


int main() {

    vector<int> arr = {2 , 10, 4, 6, 100, 6, 100, 6, 8};

    cout << countAvgPairs(arr);
	
	return 0;
}
