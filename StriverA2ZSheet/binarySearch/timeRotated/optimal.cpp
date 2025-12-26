#include <bits/stdc++.h>
using namespace std;

int noOfTimesRotated(vector<int> &arr)
{
    int n = arr.size();
    int left = 0, right = n - 1, minIndex = 0;

    while (left <= right)
    {
        if (arr[left] < arr[right])
        {
            if (arr[left] <= arr[minIndex])
                minIndex = left;
            break;
        }
        int mid = left + (right - left) / 2;
        if (arr[mid] <= arr[minIndex])
            minIndex = mid;

        if (arr[left] == arr[mid] && arr[mid] == arr[right])
        {
            left++;
            right--;
            continue;
        }
        if (arr[left] <= arr[mid])
        {
            if (arr[left] <= arr[minIndex])
                minIndex = left;
            left = mid + 1;
        }
        else
        {
            if (mid < n - 1 && arr[mid + 1] <= arr[minIndex])
                minIndex = mid;
            right = mid - 1;
        }
    }
    return minIndex;
}

int main()
{
    vector<int> arr = {1,1,1,1,0,1};
    cout << noOfTimesRotated(arr);
}