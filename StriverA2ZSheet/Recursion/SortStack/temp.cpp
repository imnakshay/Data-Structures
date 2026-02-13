#include<bits/stdc++.h>
using namespace std;

int ways(int n ,int m){
    if(m == 0 || n < 0) return 0;
    if(n == 0) return 1;
    return ways(n-m,m) + ways(n,m-1);

}

int main(){
    cout<<ways(9,5);
}