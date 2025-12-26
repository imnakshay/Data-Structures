#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {0,0,0,0,1,0,1,1,0,0,1};
    sort(arr.begin(),arr.end());
    for(auto x : arr) cout<<x<<" ";
}