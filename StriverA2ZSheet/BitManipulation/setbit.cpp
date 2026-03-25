#include<bits/stdc++.h>
using namespace std;

int setBit(int x,int i){
    return (x | (1<<i));
}

int main(){
    int x = 13;
    int i = 1;

    cout<<setBit(x,i);
}