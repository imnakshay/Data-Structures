#include<bits/stdc++.h>
using namespace std;

vector<int> oppositePair(vector<int> &nums)
{
    vector<int> result(nums.size());
    int nIndex = 1,pIndex = 0;
    
    for(int i  = 0 ; i<nums.size();i++){
        if(nums[i]<0) {
            result[nIndex] = nums[i];
            nIndex +=2;
        }
        else{

            result[pIndex] = nums[i];
            pIndex+=2;
        } 
    }
    return result;
}

int main(){
    vector<int> arr = {-8,4,5,-2,-6,5,1,-6};
    for(auto x : oppositePair(arr)){
        cout<<x<<" ";
    }

}