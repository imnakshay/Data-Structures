#include<bits/stdc++.h>
using namespace std;

int merge(vector<int> & arr, int left, int mid, int right){
    int i = left,  j = mid+1;
    vector<int> temp;
    int count=0;
    while(i<=mid && j<=right){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else if(arr[i]>arr[j]){
            count+=mid - i + 1;
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid) temp.push_back(arr[i++]);
    while(j<=right) temp.push_back(arr[j++]);

    for(int i = left; i<=right;i++){
        arr[i] = temp[i-left];
    }
    return count;
}

int mergeSort(vector<int> & arr, int left , int right){
    int count = 0;
    if(left>=right) return 0;
    int mid = left + (right-left)/2;
    
    count += mergeSort(arr,left,mid);
    count += mergeSort(arr,mid+1,right);
    count += merge(arr,left,mid,right);
    return count;
    
}

int reversePair(vector<int> & arr){
    return mergeSort(arr,0 , arr.size()-1);
}

int main(){
    vector<int> arr = {5,3,2,1,4};
    cout<<reversePair(arr);
}