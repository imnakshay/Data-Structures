#include<bits/stdc++.h>
using namespace std;
void count(int n){
    if(n==0) return ;
    cout<<n<<" ";
    return count(n-1);
}


int main(){
    int n ;
    cout<< "Enter a number : ";
    cin>> n;
    count(n);
}