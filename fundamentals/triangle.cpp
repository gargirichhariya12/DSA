#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    cout << "Right Angle Triangle " << endl;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout <<"*";
        }
        cout << endl;
    }

    cout << "Inverted Right Angle Triangle" << endl;
    for(int i = n; i >= 1; i--){
        for(int j = i; j >= 1; j--){
            cout << "*";
        }
        cout << endl;
    }
    cout << "Equilateral Triangle"<< endl;
    for(int i = 1; i <= n; i++){
        //space
        for(int j = 0; j < n - i; j++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout <<"* ";
        }
        cout << endl;
    }

    cout << "Inverted Equilateral Triangle" << endl;
    for(int i = n; i >= 1; i--){
        //space
        for(int j = n-i; j >= 0; j--){
            cout << " ";
        }
        //stars
        for(int j = i; j >= 1; j--){
            cout << "* ";
        }
        cout << endl;
    }
    cout << "Inverted Mirrored Right Triangle" <<endl;
    for(int i = 1; i <= n; i++){
        //space
        for(int j = 1; j < i; j++){
            cout << " ";
        }
        for(int j = 1; j <= n - i + 1; j++){
            cout <<"*";
        }
        cout << endl;
    }
    cout << "Mirrored Right Angle Triangle" << endl;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j < n - i +1; j++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}