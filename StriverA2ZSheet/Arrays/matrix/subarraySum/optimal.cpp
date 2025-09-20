#include<bits/stdc++.h>
using namespace std;

int noOfSubArrays(vector<int> &arr,int k){
    unordered_map<int,int> hashMap = {{0,1}}; //inserting becuase of initial calculations
    int count = 0;
    int sum = 0;
    for(int i = 0 ; i<arr.size();i++){
        sum = sum+arr[i];
        //finding the no of subarrays whose sum is sun-k;
        int rem = sum-k;
        if(hashMap.find(rem)!= hashMap.end()){
            count+=hashMap[rem];
        }
        hashMap[sum]
    }

    return count;
    
}

int main(){
    int k = 6;
    vector<int> arr = {1,2,5,4,2,3,6,8,9,7,0};
    int result = noOfSubArrays(arr,k);
    cout<< result;
}