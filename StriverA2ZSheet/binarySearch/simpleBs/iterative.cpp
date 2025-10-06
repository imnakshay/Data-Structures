#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1,4,6,8,9};
    int target = 4;
    int n = arr.size();
    int left = 0, right = n-1;
    int pos = -1;
    while(left<=right){
        if(left ==  right){
            if(arr[left]==target) pos = left;
            break;
        }
        int mid = (left+right)/2;
        if(arr[mid] ==target){
            pos = mid;
            break;
        }
        else if(arr[mid]>target){
            right = mid-1;
        }
        else left = mid+1;
    }
    cout<<pos;
}