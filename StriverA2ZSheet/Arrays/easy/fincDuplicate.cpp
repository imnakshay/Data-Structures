#include<bits/stdc++.h>
using namespace std;

unordered_set<int> duplicate(vector<int> &arr){
    unordered_set<int> m;
    unordered_set<int> r ;
    for(int i = 0 ;i < arr.size();i++){
        if(m.find(arr[i])!= m.end()){
            r.insert(arr[i]);
        }
        m.emplace(arr[i]);
    }
    return r;
}

int main(){
    vector<int> arr = {1,3,4,3,4};
    for(auto i : duplicate(arr))cout<<i<<" ";
}