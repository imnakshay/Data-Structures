#include<bits/stdc++.h>
using namespace std;

string  isPrime(int n){
    for(auto i = 2; i<=sqrt(n);i++){
        if(n%i == 0) return "The Number is not Prime.";
    }
    return "The number is Prime";
}

int main(){
    int num;
    cout<<"Enter a Prime number : ";
    cin>>num;

    cout<<isPrime(num);
}