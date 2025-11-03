// Given an integer find the number of even digits in it
// n = 4863214856
// Approach
// 1.
// 2. check all the element of arr if they are even or odd
// 3. retun the no's of even and odd

#include <iostream>
using namespace std;

int main()
{
    int n = 45872;
    int even = 0;

    while (n > 0)
    {

        int digit = n % 10;
        n = n / 10;
        if (digit % 2 == 0)
        {
            even++;
        }
    }
    cout << even;
}
