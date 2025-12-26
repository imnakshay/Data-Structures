#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>threeSum(vector<int> &arr){
    sort(arr.begin(),arr.end());
    int n = arr.size();
    vector<vector<int>> result;
    for(int i = 0; i<n-2;i++){
        if(i>0 && arr[i] == arr[i-1]) continue;
        int j = i+1;
        int k = n-1;
        while(j<k){
            int sum = arr[i]+arr[j]+arr[k];
            if(sum > 0 ) k--;
            else if(sum < 0 ) j++;
            else{
                result.push_back({arr[i],arr[j],arr[k]});
                j++;
                k--;
                while(j<k && arr[j] == arr[j-1]) j++;
                while(j<k && arr[k] == arr[k+1]) k--;
            }
        }
    }
    return result;
}

int main(){
    vector<int> nums = {-1,-2,-2,-2,-1,-1,0,0,0,2,2,2,2};
    vector<vector<int>> arr = threeSum(nums);
    for (auto i :arr){
        cout<<'{';
        for(auto x: i){
            cout<<" "<<x;
        }

        cout<<" }"<<endl;
    }
}