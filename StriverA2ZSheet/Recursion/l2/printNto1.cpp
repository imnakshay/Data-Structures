#include<bits/stdc++.h>
using namespace std;

void printNto1(int i , int n){
    if(i>=n){
        return ;
    }
    cout<<n-i<<" ";
    printNto1(i+1,n);
}

int main(){
    int n = 100;
    printNto1(0,n);
}