#include<bits/stdc++.h>
using namespace std;

int fIndex(vector<int> &arr, int low, int high){
    int i  =low;
    int j = high;
    int pivot = arr[low];
    while(i<j){
        while(arr[i]<=pivot && i<j) i++;
        while(arr[j]>=pivot && j>low) j--;
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[j],arr[low]);
    return j;
}

void qs(vector<int> &arr,int low, int high){
    if(high<=low) return;
    int pIndex = fIndex(arr, low,high);
    qs(arr,low,pIndex-1);
    qs(arr,pIndex+1,high);
}

int main(){
    vector<int> arr = {1,2,5,4,2,3,6,8,9,7,0};
    qs(arr,0,arr.size()-1);
    for (auto i :arr) cout<< i <<" ";
}