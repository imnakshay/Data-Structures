#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low,int mid,int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left < mid+1 && right < high+1){
        if(arr[left]<=arr[right]) temp.push_back(arr[left++]);
        else temp.push_back(arr[right++]);
    }
    while(left<mid+1) temp.push_back(arr[left++]);
    while(right<=high) temp.push_back(arr[right++]);

    // copy back into original array;
    for(int i = low ; i<=high;i++){
        arr[i] = temp[i-low];
    }
}

void mergeSort (vector<int> &arr,int low,int high){
    if(low >= high) return;
    int mid = (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);

}

int main(){
    vector<int> arr = {1,2,5,4,2,3,6,8,9,7,0};
    size_t size = arr.size();
    mergeSort(arr,0,size-1);
    for (auto i :arr) cout<< i <<" ";
}