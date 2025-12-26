#include<bits/stdc++.h>
using namespace std;

int peak(vector<int> &nums){
    int n = nums.size();
    for(int i = 0; i<n;i++){
        if((i == 0 || nums[i]>nums[i-1]) && (i == n-1 || nums[i]>nums[i+1])) return i;
    }
    return -1;
}

int main(){
    vector<int> arr = {1,2,2,2,4,5,3};
    cout<<peak(arr);
}