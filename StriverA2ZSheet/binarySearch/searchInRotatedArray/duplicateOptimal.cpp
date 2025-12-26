#include <bits/stdc++.h>
using namespace std;

bool position(vector<int> &arr, int target)
{
    int n = arr.size();
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return true;

        // check if the the left  = mid = right;
        if (arr[left] == arr[mid] && arr[mid] == arr[right])
        {
            left++;
            right--;
            continue;
        }
        // check whether the first half is sorted or not
        if (arr[left] <= arr[mid])
        {
            if (target >= arr[left] && target <= arr[mid])
                right = mid - 1;
            else
                left = mid + 1;
        }
        else
        {
            if (target >= arr[mid] && target <= arr[right])
                left = mid + 1;
            else
                right = mid - 1;
        }
    }
    return false;
}

int main()
{
    vector<int> arr = {1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1}; // it is the most difficult test case for that kind of question
    int target = 1;
    cout << position(arr, target);
}