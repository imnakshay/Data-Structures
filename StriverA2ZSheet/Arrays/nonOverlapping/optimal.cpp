#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> nonOverlapping(vector<vector<int>> &nums)
{
    sort(nums.begin(),nums.end());
    int n = nums.size();
    vector<vector<int>> result{nums[0]};
    for(int i = 1 ; i<n;i++){
        if(result.back()[1] >= nums[i][0]){
            result.back()[1] = max(result.back()[1],nums[i][1]);
        }
        else{
            result.push_back(nums[i]);
        }
    }
    return result;
    
}

int main()
{
    vector<vector<int>> arr = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    arr = nonOverlapping(arr);
    for(auto i : arr){
        for (auto x : i){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}