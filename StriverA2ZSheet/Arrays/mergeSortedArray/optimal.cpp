#include<bits/stdc++.h>
using namespace std;

void isGreaterSwap(vector<int>& arr1,vector<int>&arr2,int i,int j){
    if(arr1[i] > arr2[j]) swap(arr1[i],arr2[j]);
}

void sort(vector<int> & arr1, vector<int> & arr2){
    int n = arr1.size();
    int m = arr2.size();
    int len = n+m;
    int gap = len/2 + len%2;
    while(true){
        int left = 0;
        int right = left+gap;
        while(right<len){
            //if arr1 and arr2
            if(left<n && right>=n){
                isGreaterSwap(arr1,arr2,left,right-n);
            }
            //arr2 and arr2
            else if(left>=n){
                isGreaterSwap(arr2,arr2,left-n,right-n);
            }
            //arr1 and arr1
            else{
                isGreaterSwap(arr1,arr1,left,right);
            }
            left++;
            right++;
        }
        if(gap == 1) return;
        gap = gap/2+gap%2;
    }
}

int main(){
    vector<int> arr1 = {1,3,5,5,6,7,8,9,11};
    vector<int> arr2 = {4,5,6,9,21,22};
    sort(arr1,arr2);
    for(auto x: arr1) cout<<x<<" ";
    cout<<endl;
    for(auto x: arr2) cout<<x<<" ";
}