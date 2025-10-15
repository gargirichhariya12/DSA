//127 output  14

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int digit  = 0;
    int product = 1;
    while(n > 0){
        digit = n % 10;
        product = product * digit;
        n = n/10;
    }
    cout << product;
}