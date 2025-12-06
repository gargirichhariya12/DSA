#include<iostream>
using namespace std;

int reverseNo(int n, int revNo){
    if(n == 0) return revNo;

    int digit = n % 10;
    revNo = revNo * 10 + digit;

    return reverseNo(n / 10, revNo);

}

int main() {
    int n;
    cin >> n;

    cout << reverseNo(n, 0);
}