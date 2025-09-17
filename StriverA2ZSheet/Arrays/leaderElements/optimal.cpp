#include<bits/stdc++.h>
using namespace std;

vector<int>  leaders(vector<int> &arr){
    size_t size = arr.size();
    int maxEl = arr[size-1]; 
    vector<int> ll = {maxEl};
    for(int i = size-2;i>=0;i--){
        maxEl = max(arr[i],maxEl);
        if(ll.back() != maxEl) ll.push_back(maxEl);
    }   
    return ll;
}

int main(){
    vector<int> arr = {1,12,5,4,2,3,6,8,9,7,0};
    arr = leaders(arr);
    for (auto i :arr) cout<< i <<" ";
}