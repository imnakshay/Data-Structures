#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>threeSum(vector<int> &arr){
    int n = arr.size();
    unordered_set<int> hashSet;
    set<vector<int>> resultSet{};
    for(int i = 0;i<n-1;i++){
        hashSet.clear();
        for(int j = i+1; j<n;j++){
            if(hashSet.find(-(arr[i]+arr[j])) != hashSet.end()){
                vector<int> temp;
                temp = {arr[i],arr[j],-arr[i]-arr[j]};
                sort(temp.begin(),temp.end());
                resultSet.emplace(temp);
            }
            hashSet.insert(arr[j]);
        }
    }
    vector<vector<int>> result(resultSet.begin(),resultSet.end());
    return result;


    
}

int main(){
    vector<int> nums = {1};
    vector<vector<int>> arr = threeSum(nums);
    for (auto i :arr){
        for(auto x: i){
            cout<<x<<" ";
        }
        cout<<endl;
    }
}