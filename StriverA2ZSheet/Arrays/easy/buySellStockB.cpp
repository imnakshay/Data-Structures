#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int >& nums){
    int maxProfit = 0;
    for(int b = 0 ;b < nums.size()-1;b++){
        for(int s = b+1;s<nums.size();s++){
            maxProfit = max(maxProfit,nums[s]-nums[b]);
        }
    }
    return maxProfit;
}

int main(){
    vector<int> arr = {2,3,5,3,1};
    cout<<maxProfit(arr);
}