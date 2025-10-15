//check the no is palindrom or not for example 121 , 11, 22 etc
#include<iostream>
using namespace std;

bool isPaladrom(int n){
    int count[10];
    int i = 0;
    int org = n;

    
    
    while(n > 0){
        count[i] = n % 10;//1234
        n = n/10;
        i++;//count 432
    }
    for (int j = 0; j < i / 2; j++) {
        if (count[j] != count[i - j - 1])
            return false;
    }
    // for(int j = i - 1; j >= 0; j--){
    //         if(count[i] == count[j])return true;
    //     }
    //     return false;
    
}

int main (){
    int n;
    cin >> n;
if(isPaladrom(n)){
    cout<<"yes";
}else{
    cout<<"no";
}
    
}
