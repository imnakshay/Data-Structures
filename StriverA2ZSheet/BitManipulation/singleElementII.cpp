#include<bits/stdc++.h>
using namespace std;

int singleElement(vector<int> & nums){
    int one = 0, two = 0;
    for(auto x : nums){
        one = (one ^ x) & (~two);
        two = (two ^ x) &  (~one);
    }
    return one;
}

int main(){
    vector<int> nums=  {1,1,1,2,2,2,3,4,4,4,5,5,5};
    cout<<singleElement(nums);
}