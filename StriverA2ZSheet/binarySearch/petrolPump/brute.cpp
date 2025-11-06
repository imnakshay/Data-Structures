#include<bits/stdc++.h>
using namespace std;

double minMaxDistance(vector<double> & arr, int pumps){
    int n = arr.size();
    if(pumps<=0) return 0;
    if(n < 2) return 0;

    vector<int> sectors(n-1,1);
    
    while(pumps != 0){
        double maxDiff = 0;
        int maxPos = 0;

        for(int i = 0 ; i < n-1;i++){
            double diff = (arr[i+1]- arr[i])/sectors[i];
            if(diff > maxDiff){
                maxDiff = diff;
                maxPos = i;
            }
        }
        sectors[maxPos]++;
        pumps--;
    }
    double maxDiff = 0;
    for(int i = 0 ; i<n-1;i++){
        double diff = (arr[i+1] - arr[i])/sectors[i];
        maxDiff = max(diff,maxDiff);
    }
    return maxDiff;
}
int main(){
    vector<double> arr = {1,7};
    int pumps = 2;
    cout<<minMaxDistance(arr,pumps);
}