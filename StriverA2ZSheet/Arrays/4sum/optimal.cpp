#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> arr, int target)
{
    int n = arr.size();
    vector<vector<int>> result;
    sort(arr.begin(),arr.end());
    for(int i = 0 ; i < n;i++){
        if(i>0 && arr[i] == arr[i-1]) continue;
        //prunning
        if((long long)arr[i]+arr[i+1]+arr[i+2]+arr[i+3] > target) break;
        if((long long) arr[i]+arr[n-1]+arr[n-2]+arr[n-3] < target) continue;
        
        for(int j = i+1; j<n-2;j++){
            //prunnig2
            if(j>i+1 && arr[j] == arr[j-1]) continue;   
            if((long long)arr[i]+arr[j]+arr[j+1]+arr[j+2] > target ) break;
            int left = j+1;
            int right = n-1;
            while(left<right) {
                long long rem = (long long) target - (arr[i]+arr[j]+arr[left]+arr[right]);
                if(rem>0) left++;
                else if(rem<0) right--;
                else{
                    result.push_back({arr[i],arr[j],arr[left],arr[right]});
                    left++;
                    right--;
                    while(left<right && arr[left] == arr[left-1]) left++;
                    while(left<right && arr[right] == arr[right+1]) right--;
                }
            }
        }
    }
    return result;
}

int main()
{
    vector<int> nums = {1, 2, 3,0, 1};
    vector<vector<int>> arr = fourSum(nums, 7);
    for (auto i : arr)
    {
        for (auto x : i)
        {
            cout << x << " ";
        }
        cout << endl;
    }
}