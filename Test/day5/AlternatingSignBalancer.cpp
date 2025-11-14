// Given an array of integers, determine the minimum number of sign flips (changing + to - or vice
// versa) required so that the array alternates in sign.
// You can start with either a positive or a negative number.
// Examples:
// Example 1: arr = [1, -2, -3, 4, 5]
// Start with + : [1, -2, 3, -4, 5] → 2 flips
// Start with : [-1, 2, -3, 4, -5] → 3 flips

#include <iostream>
#include <vector>
using namespace std;

// Given an array I want the number of elements which are not even at even index or not odd at odd index.

// 0 1 2 3 4 5 6 7
// 2,4,4,5,7,9,8,8

// [-1, -2, 1, -1, 1, -1, 1]

int minAternativeFlips(vector<int> &arr)
{
    int n = arr.size();
    int positiveStartCount = 0;
    int negativeStartCount = 0;

    // Suppose values start with positive number
    for (int i = 0; i < n; i++)
    {
        int el = arr[i];
        int j = i;

        if ((j % 2 == 0 && el < 0) || (j % 2 != 0 && el > 0))
        {
            positiveStartCount++;
        }
        if ((j % 2 == 0 && el > 0) || (j % 2 != 0 && el < 0))
        {
            negativeStartCount++;
        }
    }
    // Supose values start with negative number

    return min(positiveStartCount, negativeStartCount);
}
int main()
{ //  0   1   2   3   4   5   6   7   8
    vector<int> arr = {1, -2, -3, 4, -5, 9, -6, -8, -7};

    int res = minAternativeFlips(arr);

    cout << res;
    return 0;
}
