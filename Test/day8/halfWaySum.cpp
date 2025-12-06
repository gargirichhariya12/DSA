#include <iostream>
#include <vector>

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

int getSum(vector<int> &arr)
{
    int s = 0;
    for (int x : arr)
        s += x;
    return s;
}

int halfWaySum(vector<int> &arr)
{
    int sumOfArr = getSum(arr);
    int currSum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        currSum += arr[i];
        if (2 * currSum - sumOfArr == 0)
            return i;
    }
    return -1;

    // int i = 0;
    // while(i < n){
    //   currSum += arr[i];
    //   if(2*currSum - sumOfArr == 0)
    //      return i;
    //      i++;
    //
    // }
    // return -1;
}

int main()
{

    vector<int> arr = {1, 2, 0, 6, 7, 2};

    cout << halfWaySum(arr);

    return 0;
}
