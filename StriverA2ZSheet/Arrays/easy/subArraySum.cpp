#include<bits/stdc++.h>
using namespace std;

int longestSubArray(vector<int> & arr,int k){
    int maxCount = 0;
    for(int  i = 0 ; i < arr.size()-maxCount;i++){
        int count = 0;
        int sum = 0;
        for(int j = i ; j<arr.size();j++){
            sum += arr[j];
            if(sum>k) break;
            count++;
            if(sum == k) {
                maxCount = max(maxCount,count);
            }
            
        }
    }
    return maxCount;
}

int main(){
    vector<int> arr = {1,2,3,6,3,8,9,3,6,9,7};
    int k = 23;
    cout<<longestSubArray(arr,k);

}