// Adjacent Average Pair Count
// Count how many adjacent pairs (arr[i], arr[i+1]) have their average present somewhere else in the array.
// Examples:
// arr = [1, 3, 2] → pairs: (1,3)=avg 2→exists → count=1
// arr = [2, 4, 6, 8] → (2,4)=3→no, (4,6)=5→no, (6,8)=7→no → count=0
// arr = [1, 2, 3, 4, 5] → (1,3)=2, (2,4)=3, (3,5)=4 → all exist → 3

#include <iostream>
#include <vector>
using namespace std;

//find the pairs
//calculate the avg off each pair
//check if the avg is present in the arr or not
vector<int> getPair(vector<int> &arr){
    // 1 2 3 4 5 6
    //(1, 2) (2, 3) (3, 4) (4, 5) (5, 6)
    //1 3 2 5
    
    vector<int> result;
    for(int i = 0; i < arr.size() - 1;i++){
        int a = arr[i];
        int b = arr[i + 1];
        result.push_back(a);
        result.push_back(b);
    }
    return result;
}
//now we get the pairs
double pairAvgs(int a, int b){
    
    return (a + b + 0.0) / 2;
}
bool isPresent(vector<int> &arr , int avg){
    for(int x: arr){
        if(x == avg) return true;
    }
    return false;
}
int main(){
    vector<int> arr = {1, 3, 2 , 5};
    
    vector<int> pr = getPair(arr);

    int count = 0;
//1 , 2 , 2 ,3 ,3, 4, 4, 
    for(int i = 0; i < pr.size() - 1; i += 2){
        int a = pr[i];
        int b = pr[i + 1];

        double avg = pairAvgs(a, b);   // avg will be integer

        if(isPresent(arr, avg)){
            cout << "(" << a << ", " << b << ") -> avg = " << avg << endl;
            count++;
        }
    }

    cout << "Total count = " << count << endl;

    return 0;
}
