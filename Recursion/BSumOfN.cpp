//this is an backtrack method and also called as head recursion method

#include<bits/stdc++.h>
using namespace std;

int sumOfN(int n){
    if(n==1) return 1;
    return sumOfN(n-1)+n;
}

int main(){
    cout<<"Enter a number: ";
    int x;
    cin>>x;
    cout<<sumOfN(x);
}