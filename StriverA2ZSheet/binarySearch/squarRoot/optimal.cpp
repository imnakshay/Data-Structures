#include<bits/stdc++.h>
using namespace std;

int sqroot(int n){
    int left = 0, right = n;
    int ans = 0;
    while(left<=right){
        int mid = left+(right-left)/2;
        int sqr = mid*mid;

        if(sqr == n){
            ans = mid;
            break;
        }
        if(sqr < n){
            left = mid + 1;
            ans = mid;
        }
        else right = mid-1;
    }
    return ans;
}

int main(){
    int n ;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<sqroot(n);
}