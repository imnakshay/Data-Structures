#include<bits/stdc++.h>
using namespace std;

int nthRoot(int n,int nth){
    int left = 0, right = n;
    int ans = 0;
    
    while(left<=right){
        long long  mid = left+(right-left)/2;
        long long val = 1;
        for(int i = 0;i<nth;i++){
            val *=mid;
            if(val > n) break;
        }

        if(val == n) {
            ans = mid;
            break;
        }
        if(val < n){
            ans = mid;
            left = mid+1;
        }
        else right = mid-1;

    }
    return ans;
}

int main(){
    cout<<"Enter a number and nth value: ";
    int n;
    int nth;
    cin >> n >>nth;
    cout<<nthRoot(n,nth);
}