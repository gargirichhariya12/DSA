#include<iostream>
using namespace std;

int main () {
    int N;
    cout << "Enter the number's" << endl;
    cin >> N;

    int max;
    int num;

    if(N >= 1){
        cin >> max;
        N = N - 1;
    }
    for (int i = 0; i < N; i++){
        cin >> num;
        if(num > max){
        max = num;
        }
    
    }
    cout << "maximum of :" << max;

    return 0;
}