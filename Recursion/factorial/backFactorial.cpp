//in this we are going to use the head recursive method for solving the problem

#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==1|| n==0) return 1;
    return n*factorial(n-1);
}

int main(){
    cout<<factorial(5);
}