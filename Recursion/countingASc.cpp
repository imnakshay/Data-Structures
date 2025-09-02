#include<bits/stdc++.h>
using namespace std;

// void count(int n){
    // if(n == 0) return;
    // count(n-1);
    // cout<<n<<endl;
// 
    // 
// }
// 
void count(int n,int i){
    if(i<1) return;
    cout<<i<<endl;
    count(n,i-1);
}
int main(){

    int n = 10;
    count(n,n);
}



