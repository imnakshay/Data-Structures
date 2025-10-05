#include<bits/stdc++.h>
using namespace std;

vector<int> temp;

int fib(int n){
    if(n==0 || n==1) return temp[n] = n;
    if(temp[n] != -1) return temp[n];
    return temp[n] = fib(n-1)+fib(n-2);
}

int main(){
    int n = 8;
    temp.assign(n+1,-1);
    fib(n);
    for(auto x:temp) cout<<x<<" ";

}