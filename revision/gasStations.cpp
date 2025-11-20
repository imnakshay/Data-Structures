#include<bits/stdc++.h>
using namespace std;

int noPumps(vector<double> & nums, double distance){
    int pumps = 0;
    for(int i = 0; i<nums.size()-1;i++){
        double dist = nums[i+1]-nums[i];
        pumps = pumps +(ceil(dist / distance)) - 1;
    }
    return pumps;
}

double maxDistance(vector<double> & nums,int pumps ){
    int  n = nums.size();
    double right = 0 ;
    for(int i = 0 ; i<n-1;i++){
        right = max(right , nums[i+1]-nums[i]);
    }
    double left = 0;
    while((right - left) > 1e-6){
        double mid = left + (right - left)/2;
        if(noPumps(nums,mid)> pumps) left = mid;
        else right = mid;
    }
    return right ;
}

int main(){
    vector<double> nums = {1,2,3,4};
    int n = 3;
    cout<<maxDistance(nums,n);
}