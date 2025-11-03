//find the length of the string
//find the char with the help of loop
// match the ASCII Values of the char upper :- 65-90 Lower :-97-122

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s = "ABCS fdhf hellO";
    int Upper = 0;
    int Lower = 0;

    for(int i = 0; i<= s.length();i++){
       
        if(s[i] >= 65 && s[i] <= 90){
            Upper++;
        } else if(s[i] >= 97 && s[i] <= 122){
            Lower++;
        }
    }
    cout << Upper <<" "<< Lower ;
}

