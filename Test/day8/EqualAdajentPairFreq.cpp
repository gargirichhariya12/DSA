#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int countSameFreq(vector<int> &arr)
{
    int count = 0;
    unordered_map<int, int> countarr;

    for (int a : arr)
    {
        countarr[a]++;
    }

    for (int i = 0; i < arr.size() - 1; i++)
    {
        int a = arr[i];
        int b = arr[i + 1];
        if (countarr[a] == countarr[b])
        {
            count++;
        }
    }

    // for(int i = 0; i < countarr.size() - 1; i++){
    //     int a = i;
    //     int b = i + 1;
    //     if(countarr[a] == countarr[b])
    //     count++;
    // }

    return count;
}

int main()
{
    vector<int> arr = {1, 2, 1, 2, 3};

    cout << countSameFreq(arr);
}