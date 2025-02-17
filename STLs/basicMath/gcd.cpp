#include<bits/stdc++.h>
using namespace std;

//it is brute force approach of solving the problem.....
int gcd(int a,int b){
    int min;
    int gcd = 1;
    if(a>=b) min = a;
    else min = b;
    for(int i = 1;i<= min;i++){
        if(a%i==0&&b%i==0) gcd = i;
    }
    return gcd;
}

int main(){
    int x;
    int y;
    cout<<"Enter the numbers: ";
    cin>>x;
    cin>>y;
    cout<<gcd(x,y);
}