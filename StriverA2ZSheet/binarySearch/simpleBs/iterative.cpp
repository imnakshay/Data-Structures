#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 17;
    int n = arr.size();
    int left = 0, right = n-1;
    int pos = -1;
    while(left<=right){
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