//123 output 6

#include<iostream>
using namespace std;

int main(){
    int n ;
    cin >> n;
    int digit = 0;
    int sum =0;
    while( n > 0){
        digit = n % 10;
        sum = sum + digit;
        n = n/10;
    }
    cout << sum;
}