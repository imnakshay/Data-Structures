#include<bits/stdc++.h>
using namespace std;

int sqroot(int n){
    int i = 1;
    int sqr;
    while(true){
        if(i*i > n) break;
        sqr = i*i;
        i++;
    }
    return i-1;
}

int main(){
    int n = 16;
    cout<<sqroot(n);
}