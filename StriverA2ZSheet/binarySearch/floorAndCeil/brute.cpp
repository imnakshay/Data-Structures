#include<bits/stdc++.h>
using namespace std;

pair<int,int> floorAndCeil(vector<int> &nums,int target){
    //find the position or lower bound of the number.
    int floor = -1;
    int ceil = -1;
    int n = nums.size();

    if(nums[0]>= target){
        ceil = nums[0];
        return {floor,ceil};
    }
    if(nums[n-1]<target){
        floor= nums[n-1];
        return {floor,ceil};
    }
    for(int i = 1;i<n;i++){
        if(nums[i]==target){
            floor = nums[i];
            ceil = nums[i];
            break;
        }
        if(nums[i]>target){
            floor = nums[i-1];
            ceil = nums[i];
            break;
        }
        
    }
    return {floor,ceil};
}

int main(){
    vector<int> arr = {3, 4, 4, 7, 8, 10};
    int x  = 5;
    pair<int,int> result = floorAndCeil(arr,x);
    cout<<result.first<< ' '<<result.second;

}