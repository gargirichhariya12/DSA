//1234567 out put 1 2 3 4 5 6 7

#include<iostream>
using namespace std;

int main(){
    int n ;
    cin >> n;
    int digit = 0;
    while( n > 0){
        digit = n % 10;
        cout << digit <<" ";
        n = n/10;
    }
}