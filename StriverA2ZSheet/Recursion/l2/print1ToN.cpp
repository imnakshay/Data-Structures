#include<bits/stdc++.h>
using namespace std;

void printTillN(int i , int n){
    if(i>n){
        return ;
    }
    cout<<i<<" ";
    printTillN(i+1,n);
}

int main(){
    int n = 100;
    printTillN(1,n);
}