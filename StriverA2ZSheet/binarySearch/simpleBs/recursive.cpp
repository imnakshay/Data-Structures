#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> & arr,int left,int right,int target){
    if(left<right) return -1;
    int mid = (left+right)/2;
    if(arr[mid]== target) return mid;
    else if(arr[mid]<target) left = mid+1;
    else right = mid-1;
    return binarySearch(arr,left,right,target);
}

int main(){
    vector<int> arr = {1, 3, 5, 7, 9}; 
    int target =0;
    cout<<binarySearch(arr,0,arr.size()-1,target);
}