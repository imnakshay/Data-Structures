#include<bits/stdc++.h>
using namespace std;

int countPumps(vector<long double> & arr,long double dist){
    int count = 0;
    for(int i = 0 ; i<arr.size()-1;i++){
        count += (arr[i+1]-arr[i] - 10e-6) / dist;
    }
    return count;
    
}

long double maxMinDistance(vector<long double> & arr, int pumps){
    int n = arr.size();
    long double left = 0;
    long double right = -1;
    for(int i = 0; i<n-1;i++){
        right = max(arr[i+1]-arr[i],right);
    }
    if(n<2) return 0 ;
    if(pumps<=0) return right;
    while(right - left > 10e-6){
        long double mid = left + (right-left)/2.0;
        if(countPumps(arr,mid) > pumps) left = mid;
        else right = mid ;
    }
    return right;
    
}

int main(){
    vector<long double> arr = {1,2,3,4,5};
    int pumps = 4;
    cout<<maxMinDistance(arr,pumps);
}