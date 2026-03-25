#include<bits/stdc++.h>
using namespace std;

int clearBit(int x,int i){
    return (x & (~(1<<i)));
}

int main(){
    cout<<clearBit(13,2);
}