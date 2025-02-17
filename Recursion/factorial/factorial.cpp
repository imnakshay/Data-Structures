//this is tail recursive method.
#include<bits/stdc++.h>
using namespace std;

int factorial(int n, int f = 1){
    if(n==0 || n==1) return f;
    return factorial(n-1,f*n);
}

int main(){
    cout<<factorial(10);
}