#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

vector<int> getPrimeFreqNumbers(vector<int> &arr){
    vector<int> result;

    unordered_map<int, int> count_map;

    for(int x : arr){
        count_map[x]++;
    }

    for(auto it : count_map){
        if(isPrime(it.second)){
            result.push_back(it.first);
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> res = getPrimeFreqNumbers(arr);

    for (int x : res) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
    
}