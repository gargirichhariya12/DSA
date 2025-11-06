#include<iostream>
#include<vector>
using namespace std;

// 5
// 2 4 1 7 2

// 4 1 7 2

// arr[i] <  arr[j]

// min
void Mysort(vector<int> &arr)
{

    for (int i = 0; i < arr.size(); i++)
    {
      for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] > arr[j])
            {
                 swap(arr[i], arr[j]);
               
            }
            
        }
       
    }
}
int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    Mysort(arr);

    for (int x : arr)
        cout << x << " ";
    cout << "\n";

    return 0;
}