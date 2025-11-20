#include<bits/stdc++.h>
using namespace std;

int kthElement(vector<int>&nums1,vector<int> & nums2,int k){
    int m = nums1.size();
    int n = nums2.size();

    int count = 0;
    int i = 0, j = 0;
    while(i < m && j<n){
        count++;
        if(nums1[i]<=nums2[j]){
            if(count == k) return nums1[i];
            i++;
        }
        else{
            if (count == k)return nums2[j];
            j++;
        }
    }
    while(i<m){
        count++;
        if(count == k) return nums1[i];
        i++;
    }
    while(j<n){
        count++;
        if(count == k ) return nums2[j];
        j++;
    }
    return -1;
}

int main(){
    vector<int> nums1 = {3,5,7,9};
    vector<int> nums2 = {5,8,10,34};
    int k = 5;
    cout<<kthElement(nums1,nums2, k );
}