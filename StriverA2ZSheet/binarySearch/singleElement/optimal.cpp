#include<bits/stdc++.h>
using namespace std;

int singleElement(vector<int> &arr){
    int n = arr.size();
    int left = 0,right= n-1;
    while(left < right){
        int mid = left+(right-left)/2;
        if(mid % 2 !=0) mid--;

        if(arr[mid+1]==arr[mid]){
            left = mid+2;
        }else{
            right = mid;
        }
    }
    return arr[left];
}

int main(){
    vector<int> arr = {2,2,3,4,4,6,6,7,7,8,8};
    cout<<singleElement(arr);
}