#include<bits/stdc++.h>
using namespace std;

int longestSubsequence(vector<int> &arr){
    if(arr.size() == 0 ) return 0;
    if(arr.size() == 1) return 1;

    unordered_set<int> s;
    for(auto x : arr){
        s.emplace(x);
    }

    int maxCount = 1;
    int count = 1;
    for(auto x: s){
        if(s.find(x-1) == s.end()){
            int key = x;
            while(s.find(key+1)!=s.end()){
                count++;
                maxCount = max(maxCount,count);
                key++;
            }

        }
    }
    return maxCount;

    
}

int main(){
    vector<int> arr = {1,2,5,4,2,3,6,8,9,7,0};
    cout<<longestSubsequence(arr);
}