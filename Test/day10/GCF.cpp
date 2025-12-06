#include<iostream>
using namespace std;

int CommonFactor(int p, int q) {

    if(q == 0) return p;

    return CommonFactor(q, p % q);
}

int main() {
    int p , q;
    cin >> p >> q;

    int res = CommonFactor(p, q);

    cout<< res;
}

// def gcd(a, b):
//    if a == b:
//       return a
//    elif a < b:
//       return gcd(b, a)
//    else:
//       return gcd(b, a - b)

// a = 25
// b = 45
// print(gcd(a, b))