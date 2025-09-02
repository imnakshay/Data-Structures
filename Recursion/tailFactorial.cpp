#include<bits/stdc++.h>
using namespace std;

int factorial(int n, int fact = 1){
    if (n==1) return fact;
    fact = fact*n;
    return factorial(n-1,fact);
}

int main(){
    int x =5;
    cout<<factorial(x);
}