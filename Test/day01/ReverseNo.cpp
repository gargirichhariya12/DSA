//2345 output 5432

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int reverseNo = 0;
    int digit = 0;
    while(n > 0){
        digit = n %10;
        reverseNo = reverseNo * 10 + digit;
        n = n/10;
    }
    cout << reverseNo;
    
}