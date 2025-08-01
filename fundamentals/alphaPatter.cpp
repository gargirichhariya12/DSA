//1234554321
//12344321
//123321
//1221
//11
//ABCDDCBA
//ABCCBA
//ABBA
//AA

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n - i; j++) {
           // cout << char(64 + j);
            cout<< j;
        }

        for (int j = n - i; j >= 1; j--) {
            //cout<< char(64 + j);
            cout << j;
        }

        cout << "\n";
    }

    return 0;
}