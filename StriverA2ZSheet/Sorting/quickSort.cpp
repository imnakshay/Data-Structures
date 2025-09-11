#include<bits/stdc++.h>
using namespace std;

int findIndex(vector<int> & arr, int low , int high){
    int i = low; //pivot
    int j = high;

    while(i<j){
        while(arr[i]<=arr[low] && i<=high) i++;
        while(arr[j]>=arr[low] && j>=0) j--;
        if(i < j ) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}

void quickSort(vector<int> &arr,int low, int high){
    if(high<=low) return;
    //we will find the index of pivot
    int pIndex = findIndex(arr,low,high);
    quickSort(arr,low,pIndex-1);
    quickSort(arr,pIndex+1,high);
}

int main(){
    vector<int> arr = {1,3,5,4,2,0};
    quickSort(arr,0,arr.size()-1);
    for (auto i :arr) cout<< i <<" ";
}