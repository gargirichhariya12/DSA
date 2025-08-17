// The continue statement in C++ is a loop control statement that skips the remaining statements in the current iteration of a loop and proceeds to the next iteration. It is used within for, while, and do-while loops.
#include<iostream>
using namespace std;

int main (){
    int i = 0;
    while( i < 10){
        if(i == 5){
            continue;
        }
        i++;
        cout << i <<" ";
    }
    return 0;
}