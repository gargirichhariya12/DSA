#include<iostream>
#include<numeric>
using namespace std;

int main () {
    int a, b;
    cout << "enter the 2 no" << endl;
    cin >> a >> b;

    int divisor = gcd( a, b );
    cout << divisor ; 

    return 0;
}