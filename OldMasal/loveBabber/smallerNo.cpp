#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    cout<<"Enter the first number ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;

    if(num1>num2){
        cout<<"First number is greater than second number.";

    }else if(num2>num1){
        cout<<"Second numebr is greater than first numebr.";

    }else{
        cout<<"Both numebrs are equal.";
    }


}