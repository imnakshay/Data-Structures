#include<bits/stdc++.h>
using namespace std;

int squareRoot(int n ){
    int left = 1, right = n;
    while(left<=right){
        int mid = left + (right - left)/2;
        int pro = mid  * mid;
        if(pro == n) return mid;
        else if(pro < n)left = mid + 1;
        else right = mid - 1;
    }
    return right;
}

int main(){
    int n = 17;
    cout<<squareRoot(n);
}