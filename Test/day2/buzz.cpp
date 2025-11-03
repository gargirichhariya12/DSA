// Buzz Number: Number that ends with digit 7 or divisible by 7.
// Given A number find it whether it's a buzz number or not.
//n = 107
//check the last digit
//divide it with 7 to check its buzz or not

#include<iostream>
using namespace std;

int main() {
    int n = 70;
    int temp = n;
    int digit = temp % 10;
    if (digit == 7 || n % 7 == 0){
        cout << "its a buzz";
    
    }else{
        cout << "its not a buzz";
    }
    
   
}