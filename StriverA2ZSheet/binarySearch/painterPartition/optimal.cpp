#include<bits/stdc++.h>
using namespace std;\

int paintersRequired(vector<int> & arr, int area){
    long long sum = 0ll;
    int painters = 1;
    for(auto x : arr){
        if(sum + (long long) x <= area) sum += (long long) x;
        else {
            painters++;
            sum = (long long ) x;
        }
    }
    return painters;
}

int minDays(vector<int> & arr, int painters){
    int n = arr.size();
    if(n <= 0) return -1;
    int left = *max_element(arr.begin(),arr.end());
    long long right =  accumulate(arr.begin(),arr.end(),0ll);
    if(n >=  painters) return left;

    while(left<=right)    {
        int mid = left+(right-left)/2;
        if(paintersRequired(arr,mid)<=painters) right = mid -1;
        else left = mid + 1;
    }
    return left;
}

int main(){
    vector<int> arr = {10,20,30,40,50};
    int painters = 2;
    cout<<minDays(arr,painters);
}