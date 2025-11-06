#include<iostream>
#include<vector>
using namespace std;
void Mysort(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++) {
        int min = i;
        for (int j = i + 1; j < arr.size(); j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
       
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