#include <bits/stdc++.h>
using namespace std;

int longestSubArray(vector<int> &arr, int k)
{
    int left = 0;
    int right = 0;
    int sum = 0;
    int maxLen = 0;
    while (right < arr.size())
    {
        sum = sum + arr[right];
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
            right++;
        }
        else if (sum > k)
        {
            sum -= arr[left++];
        }
        else
        {
            right++;
        }
    }
    return maxLen;
}
int main()
{
    vector<int> arr = {4,1,0,4,0,0,3};
    cout << longestSubArray(arr, 4);
}