#include<bits/stdc++.h>
using namespace std;

int headFactorial(int n){
    if(n == 1) return  1;
    return headFactorial(n-1)*n;
}

int main(){
int x = 5;
cout<<headFactorial(x);
}