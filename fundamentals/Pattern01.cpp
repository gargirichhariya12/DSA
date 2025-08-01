//              1
// 		    2	3	2
// 	    3	4	5	4	3
// 4	5	6	7	6	5	4

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j =1; j <= n-i ; j++){
            cout << "" <<"\t";
        }
        for(int j = i; j <= 2*i - 1; j++){
            cout << j <<"\t";
        }
        for(int j = 2*(i - 1); j >= i; j--){
            cout << j <<"\t";
        }
        cout << endl;
    }
}