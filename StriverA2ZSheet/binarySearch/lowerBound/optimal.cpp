#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> & arr,int x){
    int n = arr.size();
    if(arr[n-1] < x) return n;
    if(arr[0]>=x) return 0;

    int low = 0;
    int high = n-1;
    while(low<=high){

        int mid = low+(high-low)/2;
        if(arr[mid]>=x && arr[mid-1]<x) return mid; //might occur here a mid - 1 but i solved that earlier.
        else if(arr[mid]<x) low = mid+1;
        else high = mid-1;
    }

    return n;
    
}

int main(){
    vector<int> arr = {1,1,1,1,1,1};
    int x = 1.5;
    cout<<lowerBound(arr,x);
}