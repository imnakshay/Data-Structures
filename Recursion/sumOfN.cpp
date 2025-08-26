
///this is also an example of tail recursion method...
#include<bits/stdc++.h>
using namespace std;

int sum = 0;

int sumOfN(int n){
    if(n==1){
        sum++;
        return sum;
    }
    sum = sum+n;
    return sumOfN(n-1);
}

int main(){
    int x;
    cout<<"Enter a Number: ";
    cin>>x;
    cout<<sumOfN(x);
}