#include <bits/stdc++.h>
using namespace std;

void zeroAtEnd(vector<int> &nums)
{
    int count = 0;
    for (int i = 0; i < nums.size() - 1-count;)
    {
        if (nums[i] == 0)
        {
            for (int j = i; j < nums.size() - 1 - count; j++)
            {
                swap(nums[j], nums[j + 1]);
            }
            count++;
        }
        if(nums[i]!=0) i++;

    }
}

int main()
{
    vector<int> arr = {1,0,4,3,0,0,0,5,4,6,0,3,2,0};
    // vector<int> arr = {0,0,1,1,0,0,2,3,0};
    zeroAtEnd(arr);
    for (auto i : arr)
        cout << i << " ";
}