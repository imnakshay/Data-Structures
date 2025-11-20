#include<bits/stdc++.h>
using namespace std;

int kthElement(vector<int>&nums1,vector<int> & nums2,int k){
    int m = nums1.size();
    int n = nums2.size();
    if(m+n < k || k<0) return -1;
    if(m == 0) return nums2[k-1];
    if(n == 0) return nums1[k-1];
    if(m>n) return kthElement(nums2,nums1,k);
    int l1,l2,r1,r2;
    int left = 0,right = m;
    while(left<=right){
        l1 = l2 = INT_MIN;
        r1=r2 = INT_MAX;
        int mid = left+(right-left)/2;
        if(mid>0) l1 = nums1[mid-1];
        if(mid<k) l2 = nums2[k-mid-1];
        if(mid <m) r1 = nums1[mid];
        if(k-mid<n) r2 = nums2[k-mid];

        if(l1 <= r2 && l2 <= r1) break;
        if(l1>r2) right = mid - 1;
        if(l2 > r1) left = mid + 1;
    }
    return max(l1,l2);
}

int main(){
    vector<int> nums1 = {1,2};
    vector<int> nums2 = {3,4};
    int k = 4;
    cout<<kthElement(nums1,nums2, k );
}