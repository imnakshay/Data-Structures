#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> arr, int target)
{
    int n = arr.size();
    set<vector<int>> result_set;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    int sum = arr[i] + arr[j] + arr[k] + arr[l];
                    if (sum == target)
                    {
                        vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
                        sort(temp.begin(), temp.end());
                        result_set.insert(temp);
                    }
                }
            }
        }
    }
    vector<vector<int>> result(result_set.begin(), result_set.end());
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