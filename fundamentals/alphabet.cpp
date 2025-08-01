#include<iostream>

using namespace std;
int main() {
    char ch;
    cin >> ch;

    if(ch >= 65 && ch <= 90){
        cout << "Upper Case";
    }
    if(ch >= 97 && ch <= 122){
        cout << "Lower Case";
    }
    return 0;
}