#include<bits/stdc++.h>
using namespace std;

vector<int> singleElement(vector<int>& nums){
    int xorr = 0;
    for(auto x: nums){
        xorr ^= x;
    }
    int setBit = (xorr & (xorr-1) ^ xorr);
    int set = 0;
    int notSet = 0;
    
    for(auto x: nums){
        if(x & setBit) set ^= x;
        else notSet ^= x;
    }
    return {set,notSet};
}

int main(){
    vector<int> nums = {1,2,1,3,2,5,4,4};
    for(auto x : singleElement(nums)) cout<<x<<" ";
}