//23456 2 3 4 5 6

#include<iostream>
using namespace std;

int main (){
    int n;
    cin >> n;
    int org = n;
    //find size of n
    
    int size = 0;
    while(n > 0){
        n = n/10;
        size++;
    }
    //create arr of size n
    int arr[100];
    //fill the arr with digit of 'n' and
    n = org;
    int i = 0;
    while(n > 0){
         arr[i]= n % 10;
         n = n/10;
        i++;
    }
    //print the arr in desire order
    for(int j = size - 1; j >= 0; j--){
        cout<<arr[j]<<" " << size - j  <<endl;
    }
    

    
}