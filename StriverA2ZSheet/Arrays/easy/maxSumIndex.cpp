#include<bits/stdc++.h>
using namespace std;

vector<int> maxSumIndex(vector<int> &nums){
    int sum = INT_MIN;
    int maxSum = 0;
    int start = -1,end = -1;
    for(int i = 0 ; i < nums.size(); i++){
        if(sum == 0) start = i;
        sum+=nums[i];
        if(sum < 0) sum = 0;
        if(sum>maxSum){
            end = i;
            maxSum = sum;
        }
        
    }
    return {start,end};
}

int main(){
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    for(auto x : maxSumIndex(arr)) cout<<x<< ' ';
}