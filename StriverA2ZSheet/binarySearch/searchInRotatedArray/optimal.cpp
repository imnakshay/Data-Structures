#include<bits/stdc++.h>
using namespace std;

int position(vector<int> &arr,int target){
    int n = arr.size();
    int left  = 0, right = n-1;
    while(left<=right){
        int mid = left+(right-left)/2;
        if(arr[mid]==target) return mid;

        if(arr[mid]>=arr[left]){ //checking the first half is sorted or not.
            if(arr[left]<=target && arr[mid]>=target) right = mid-1;  //consider this half
            else left = mid+1;
        }
        else{
            if(arr[mid]<=target && arr[right]>=target) left = mid+1;
            else right = mid-1;
        }

    }
    return -1;
}

int main(){
    vector<int> arr = {2,2,2,3,4,2};
    int target = 2;
    cout<<position(arr,target);
}