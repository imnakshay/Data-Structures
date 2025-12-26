#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int> &arr){
    int n = arr.size();
    int left = 0, right = n-1,mini = INT_MAX;
    while(left<=right){
        if(arr[left]<arr[right]) return mini = min(mini,arr[left]);
        int mid = left+(right-left)/2;
        mini = min(mini,arr[mid]);

        if(arr[left] == arr[mid] && arr[mid]== arr[right]){
            right --;
            left ++;
            continue;
        }
        
        if(arr[left]<=arr[mid]){
            mini = min(arr[left],mini);
            left = mid+1;
        }
        else{
            mini = min(arr[mid],mini);
            right = mid-1;
        }
    }
    return mini;
}

int main(){
    vector<int> arr = {2,3,4,5,1};
    cout<<findMin(arr);
}