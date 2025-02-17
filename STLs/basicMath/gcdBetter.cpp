#include<bits/stdc++.h>
using namespace std;
//this is the problem which is better approach of the solving the problem
int gcd(int x,int y){
    int gcd = 1;
    for(int i = min(x,y);i>1;i--){
        if(x%i == 0 && y%i == 0) return (gcd = i);
    }
    return 1;
}

int main(){
    cout<<gcd(5,7);
}