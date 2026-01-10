#include<bits/stdc++.h>
using namespace std;

int timeRotated(vector<int> & nums){
    int n = nums.size();
    int rotated = 0 ;
    for(int i = 1 ; i<n;i++){
        if(nums[i]<nums[i-1]) rotated = i;
    }
    return rotated;
}

int main(){
    vector<int> arr = {1,2,3};
    cout<<timeRotated(arr);
}
