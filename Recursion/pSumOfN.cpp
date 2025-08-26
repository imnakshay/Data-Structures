//this is an tail recursion method used...

#include<bits/stdc++.h>
using namespace std;

int sumOfN(int n,int sum=0){
    if(n==0) return sum;
    return sumOfN(n-1,sum+n);
}
int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    cout<<sumOfN(x);
    
}