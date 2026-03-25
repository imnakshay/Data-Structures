#include<bits/stdc++.h>
using namespace std;

// bool setOrNot(int x,int i){
//     x = x >> i;
//     return x != ((x>>1)<<1);
// }
bool setOrNot(int x, int i ){
    return ((1<<i)&x)!=0;
}

int main(){
    int x = 13;
    int i = 1;
    
    cout<<setOrNot(x,i);
}