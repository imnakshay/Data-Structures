#include<bits/stdc++.h>
using namespace std;

int sumZero(vector<int> &arr){
    int maxlen = 0;
    int n = arr.size();
    int sum = 0 ;
    unordered_map<int,int> presum;
    for(int i = 0; i<n;i++){
        sum +=arr[i];
        if(sum == 0){
            maxlen = max(maxlen,i+1);
        }
        else{
            if(presum.find(sum)!=presum.end()){
                maxlen = max(maxlen,i-presum[sum]);
            }
        }
        if(presum.find(sum)==presum.end()){
            presum[sum] = i;
        }
    }
    
    return maxlen;
    
}

int main(){
    vector<int> arr = {9,-3,3,-1,6,-5};
    cout<<sumZero(arr);
}