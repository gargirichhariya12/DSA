#include <bits/stdc++.h>
using namespace std;

// You have given two sorted arrays, merge them so that resulting array is also sorted.

// e.g. arr1 = [3, 4, 12, 42] and arr2 = [3, 7, 77, 101, 102, 104, 1056]

// resulting_array = [3, 3, 4, 7, 12, 42, 77, 101]

vector<int> merge2SortedArray(vector<int> &arr1, vector<int> &arr2){
    int n = arr1.size();
    int m = arr2.size();

    vector<int> sortedArr;
    int i = 0 , j = 0;

    while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            sortedArr.push_back(arr1[i]);
            i++;
        } else {
            sortedArr.push_back(arr2[j]);
            j++;
        }
    }
    
    while(i < n){
        sortedArr.push_back(arr1[i]);
        i++;
    }
    while(j < m){
        sortedArr.push_back(arr2[j]);
        j++;
    }
    return sortedArr;
}

int main() {
    vector<int> arr1 = {3, 4, 12, 42};
    vector<int> arr2 = {3, 7, 77, 101};

    ve
	
	return 0;
}