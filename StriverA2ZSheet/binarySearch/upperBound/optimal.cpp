#include<bits/stdc++.h>
using namespace std;

int upperBound(vector<int> &arr,int x){
    //making it more optimal why to check if the numbers doesn't lie in search space..
    if(arr[0]>x) return 0;
    int n = arr.size();
    if(arr[n-1]<x) return n;

    int ans = n;
    int left = 0 , right = n-1;
    while(left<=right){
        int mid = left+(right-left)/2;
        if(arr[mid]>x){
            ans = mid;
            right = mid -1;
        }
        else left = mid+1;
    }
    return ans;
}

int main(){
    vector<int> arr = {2,2,2,3,3,4,5,8,9,9};
    int x = 10;
    cout<<upperBound(arr,x);
}