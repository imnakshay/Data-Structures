#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>threeSum(vector<int> &arr){
    int n = arr.size();
    int sum = 0;
    vector<vector<int>> result;
    vector<int> zerosum;
    set<vector<int>> s;

    for(int i = 0; i<=n-3;i++){
        for(int j = i+1 ; j<=n-2;j++){
            for(int k = j+1;k<=n-1;k++){
                sum = arr[i]+arr[j]+arr[k];
                if(sum == 0){
                    zerosum = {arr[i],arr[j],arr[k]};
                    sort(zerosum.begin(),zerosum.end());
                    s.emplace(zerosum);
                }
                zerosum.clear();
                sum = 0;
            }
        }
    }
    for(auto x:s){
        result.push_back(x);
    }
    return result;
    
}

int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    vector<vector<int>> arr = threeSum(nums);
    for (auto i :arr){
        for(auto x: i){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}