#include <bits/stdc++.h>
using namespace std;

vector<int> unionArr(vector<int> &nums1, vector<int> &nums2)
{
    int i = 0;
    int j = 0;
    int lastPush;
    vector<int> arr;
    while (i < nums1.size() && j < nums2.size())
    {
        if (nums1[i] <= nums2[j])
        {
            if (i == 0 && j == 0)
            {
                arr.push_back(nums1[i]);
                lastPush = arr.back();
            }
            else if (nums1[i] != lastPush)
            {
                arr.push_back(nums1[i]);
                lastPush = arr.back();
            }
            i++;
        }
        else
        {
            if (i == 0 && j == 0)
            {
                arr.push_back(nums2[j]);
                lastPush = arr.back();
            }
            else if (nums2[j] != lastPush)
            {
                arr.push_back(nums2[j]);
                lastPush = arr.back();
            }
            j++;
        }
    }

    while (i < nums1.size())
    {
        if (i == 0 && j == 0)
        {
            arr.push_back(nums1[i]);
            lastPush = nums1[i - 1];
        }
        else if (nums1[i] != lastPush)
        {
            arr.push_back(nums1[i]);
            lastPush = nums1[i - 1];
        }
        i++;
    }

    while (j < nums2.size())
    {
        if (i == 0 && j == 0)
        {
            arr.push_back(nums2[j]);
            lastPush = nums2[j - 1];
        }
        else if (nums2[j] != lastPush)
        {
            arr.push_back(nums2[j]);
            lastPush = nums2[j - 1];
        }
        j++;
    }
    return arr;
}

int main()
{
    vector<int> arr = {1, 2, 3,5,7,99,100};
    vector<int> arr2 = {1,4,5,6,7,8,9};
    arr = unionArr(arr,arr2);
    for (auto i : arr)
        cout << i << " ";
}