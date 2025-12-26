#include<bits/stdc++.h>
using namespace std;\

int paintersRequired(vector<int> & arr, int area){
    int painters = 1;
    long long sum = 0ll;
    for(int i = 0 ; i<arr.size();i++){
        if(arr[i]+sum <= area) sum+=arr[i];
        else {
            painters ++;
            sum = arr[i];
        }
    }
    return painters;
}

int minDays(vector<int> & arr, int painters){
    int n = arr.size();
    if(n == 0 || n<painters) return -1;
    int minimumDays = *max_element(arr.begin(),arr.end());
    long long maxDays = accumulate(arr.begin(),arr.end(),0ll);
    if(n == painters) return minimumDays;

    for(int i = minimumDays;i<=maxDays;i++){
        if(paintersRequired(arr,i)<=painters) return i;
    }
    return -1;
}

int main(){
    vector<int> arr = {10,20,30,40,50};
    int painters = 6;
    cout<<minDays(arr,painters);
}