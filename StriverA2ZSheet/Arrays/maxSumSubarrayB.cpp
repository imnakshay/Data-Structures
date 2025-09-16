#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(vector<int> & arr){
    int maxSum = INT_MIN;
    int sum = 0;
    int i = 0;
    while( i < arr.size()){
        sum += arr[i];
        maxSum= max(sum,maxSum);
        if(sum<0) sum = 0;
        i++;
    }
    if(arr.size()==0) return 0;
    return maxSum;
}

int main(){
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArraySum(arr);
}