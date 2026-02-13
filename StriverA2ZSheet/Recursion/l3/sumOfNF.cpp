#include<bits/stdc++.h>
using namespace std;

int sumOfN(int n,int sum){
    if(n == 0) return sum;
    sum += n;
    return sumOfN(n-1,sum);
    
}

int main(){
    int n =10;
    cout<< sumOfN(n,0);
}