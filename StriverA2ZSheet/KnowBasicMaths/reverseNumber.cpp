#include<bits/stdc++.h>
using namespace std;

int revNumber(int &num){
    int revNum,count,rem;
    revNum = 0;
    count = 0; 
    while(num>0){
        rem = num%10;
        num = num/10;
        revNum = revNum*10+rem;
        count++;
    }
    return revNum;
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"The reverse number is : "<<revNumber(num);
}