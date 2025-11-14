// ### 2. Elements with Prime Frequency
// Given an integer array `arr`, return a **list of unique elements** whose **frequency count** in the array is a **prime number**.
// The resulting list should be returned in **ascending order**.
// If no element’s frequency is prime, return an **empty list**.
// ---
// **Example 1:**
// `arr = [2, 2, 3, 3, 3, 5, 5, 5, 5]`
// - Frequency map → `{2:2, 3:3, 5:4}`
// - Prime frequencies → 2 and 3
//     → Elements with prime counts: `[2, 3]`

//     **Answer:** `[2, 3]`
// 2 2 2 3 3 4 4 4 5 5 5 5
// 2 = 3
// now call the pime fun
// 3 = 2;
// 4 = 3
// 5 = 4

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// check the no is prime or not
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
// calculating the freq
int countX(vector<int> &arr, int x)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == x)
            count++;
    }
    return count;
}
// main fun
//  x = 2 arr[0] freq = 3 push-back to result
//  x = 2 arr[1] freq = 3 push-back to result
//  if (arr[i] == arr[i + 1])
//  2 but result 2
// check if the el is present in result arr or not
bool isContain(int x, vector<int> &result)
{
    for (int i = 0; i < result.size(); i++)
    {
        if (result[i] == x)
            return true;
    }
    return false;
}
vector<int> primeFreq(vector<int> &arr)
{
    vector<int> result;
    for (int x : arr)
    {
        int freq = countX(arr, x);
        if (isPrime(freq))
        {
            if (!isContain(x, result))
                result.push_back(x);
        }
    }
    return result;
}
int main()
{
    // your code goes here
    vector<int> arr = {5, 5, 5, 5, 5,          // 5 repeats 5 times
                       2, 2, 2,                // 2 repeats 3 times
                       7, 7,                   // 7 repeats 2 times
                       11,                     // 11 repeats 1 time
                       -1, -1, -1, -1,         // -1 repeats 4 times
                       0, 0, 0, 0, 0, 0,       // 0 repeats 6 times
                       9, 9, 9, 9, 9, 9, 9,    // 9 repeats 7 times
                       13, 13, 13, 13,         // 13 repeats 4 times
                       100, 100,               // 100 repeats 2 times
                       6, 6, 6, 6, 6, 6, 6, 6, // 6 repeats 8 times
                       3, 3, 3,                // 3 repeats 3 times
                       21, 21,                 // 21 repeats 2 times
                       -5, -5, -5, -5, -5,     // -5 repeats 5 times
                       4, 4,                   // 4 repeats 2 times
                       15, 15, 15, 15,         // 15 repeats 4 times
                       17,                     // 17 repeats 1 time
                       23, 23, 23, 23, 23,     // 23 repeats 5 times
                       1, 1, 1, 1};
    // 2,3
    // 3,2
    // 4,3
    vector<int> result = primeFreq(arr);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}

// int countX2(vector<int>& arr) {
//     // How many time x appreaded in the array
//     for(int j = 0; j < arr.size(); j++){
//         int x = arr[j];  // x = arrEl
//         int count = 0;
//         for(int i = j; i < arr.size(); i++){ // jis el ki freq nikl rahi hu ose mere arr index se match kar rahi hu int
//             if(arr[i] == x) count++;
//         }
//     }

// }
