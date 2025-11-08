#include <iostream>
#include<vector>
using namespace std;

void Mysort(vector<int> &arr){
    for(int i = 1; i < arr.size(); i++){
        int pick = arr[i];
        int j = i - 1;

        while(j >= 0 and arr[j] > pick){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j +1] = pick; 
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