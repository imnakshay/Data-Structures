#include<bits/stdc++.h>
using namespace std;

void Nto1(int n,int i = 1){
    if(n < i) return;
    Nto1(n,i+1);
    cout<<i<<" ";
}

int main(){
    int n = 100;
    Nto1(n);
}