#include<bits/stdc++.h>
using namespace std;

void sort(vector<int> & arr){
    int n = arr.size();
    int left = 0,right = n-1;

    while(left<right){
        while(left<n && arr[left] != 1 ) left++;
        while(right >= 0 && arr[right] != 0) right--;
        if(left<right) swap(arr[left++],arr[right--]);
    }
}

int main(){
    vector<int> arr = {0,0,0,0,1,0,1,1,0,0,1};

    sort(arr);
    for(auto x : arr) cout<<x<<" ";
}