#include<bits/stdc++.h>
using namespace std;

int findNumber(vector<int> &arr){
    map<int,int> fre;
    for(auto x : arr) {
        fre[x]++;
    }
    for(auto x : fre){
        if(x.second ==1) return x.first;
    }
}

int main(){
    // vector<int> arr = {1,4,8,1,4,3,8,7,6,3,6,9,7}; //missing 9;
    vector<int> arr = {2,2,1}; //missing 9;
    cout<<findNumber(arr);
}