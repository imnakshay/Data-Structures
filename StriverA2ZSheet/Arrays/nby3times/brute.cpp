#include<bits/stdc++.h>
using namespace std;

vector<int> nby3times(vector<int> &arr){
    unordered_map<int,int> freq;
    int size = arr.size();
    vector<int> result;
    for(auto x : arr){
        freq[x]++;
    }
    for(auto x:freq){
        if(x.second > size/3) result.push_back(x.first);
    }
    return result;
}

int main(){
    vector<int> arr = {11,33,33,11,33,11};
    for(auto x : nby3times(arr)) cout<<x<<" ";
}