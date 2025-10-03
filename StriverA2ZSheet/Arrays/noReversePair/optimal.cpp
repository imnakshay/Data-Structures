#include<bits/stdc++.h>
using namespace std;

int mergeCount(vector<int>&arr,int l,int m,int r){
    int left = l, right = m+1,count=0;
    vector<int> temp;
    while(left<=m && right<=r){ //we will sort the array first and store it in temp.
        if(arr[left]<=arr[right]) temp.push_back(arr[left++]);
        else temp.push_back(arr[right++]);
    }
    while(left<=m) temp.push_back(arr[left++]);
    while(right<=r) temp.push_back(arr[right++]);

    left = l;
    right = m+1;

    //we will count the reversePair then sort the origin array with the temp
    while(left<=m && right<=r){
        if(arr[left]>2*arr[right]){
            right++;
            count = count+m-left+1;
        }
        else{
            left++;
        }

    }
    for(int i = l;i<=r;i++){
        arr[i] = temp[i-l];
    }
    return count;
}

int mergeSort(vector<int>&arr,int left,int right){
    if(left>=right) return 0;
    int mid = (right+left)/2;
    int count = 0;
    count += mergeSort(arr,left,mid); 
    count += mergeSort(arr,mid+1,right);
    count += mergeCount(arr,left,mid,right); 
    return count;
}

int reversePair(vector<int> & arr){
     return mergeSort(arr,0,arr.size()-1);
}


int main(){
    vector<int> arr = {3,2,1,4};
    cout<<reversePair(arr);
}