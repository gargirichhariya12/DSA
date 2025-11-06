#include <iostream>
using namespace std;

// input: 6
// [1, 4, 9, 16, 25, 36]
// without power and * operator
// input: 7
// [1, 4, 9, 16, 25, 36, 49]
// 1
// 2 = 1 + 3 = 4
// 3 = 4 + 5 = 9
// 4 = 9 + 7 = 16
// sq = 1
// sq = sq + odd++

int main()
{
    // int a = 1;
    // int b = 1;
    // int c = 2;

    // for (int i = 0; i < 7; i++) {
    //     cout << a << endl;
    //     b = b + c;
    //     a = a + b;
    // }

    int n = 7;
    int sq = 1;
    int odd = 1;
    cout << sq << endl;
    for (int i = 1; i < n; ++i)
    {
        odd = odd + 2;
        sq = sq + odd;
        cout << sq << endl;
    }

    return 0;
}
