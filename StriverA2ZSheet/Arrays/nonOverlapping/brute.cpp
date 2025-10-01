#include <bits/stdc++.h>
using namespace std;

void nonOverlapping(vector<vector<int>> &nums)
{
    sort(nums.begin(),nums.end());
    int n = nums.size();
    int i = 0;
    while (i < n-1)
    {
        if (nums[i][1] >= nums[i+1][0]) //checking whether operlap or not.
        {
            nums[i] = {nums[i][0],max(nums[i][1],nums[i+1][1])};  //make the ith term as new non overlapping
            for(int j = i+2;j<n;j++){
                nums[j-1] = nums[j];  //remove the second element which overlpapped .
            }
            nums.pop_back();
            n = nums.size();
        }
        else{
            i++;
        }
    }
    return ;
}

int main()
{
    vector<vector<int>> arr = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    nonOverlapping(arr);
    for(auto i : arr){
        for (auto x : i){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}