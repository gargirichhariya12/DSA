#include<bits/stdc++.h>

using namespace std;

vector<int> leaders (vector<int>& arr){
    vector<int> res;
    int n = arr.size();

    int max = arr[n - 1];
    res.push_back(max);

    for(int i = n-1; i > 0; i--){
        if(arr[i] > max){
            max = arr[i];
            res.push_back(arr[i]);
        }
    }
    reverse(res.begin(), res.end());
    return res;
}
int main (){
    vector <int> arr = { 16, 17, 4, 3, 5, 2 };
    vector<int> result = leaders(arr);
    for (int res : result) {
        cout << res << " ";
    }
    cout << endl;

    return 0;
}
