#include<bits/stdc++.h>
using namespace std;

int maxElement(vector<int> &arr){
    size_t size = arr.size();
    if(size==0) return 0;
    int res = INT_MIN;
    for(auto x : arr){
        res = max(res,x);
    }
    return res;
}

int main(){
    vector<int> arr = {1,2,5,4,2,3,6,8,9,7,0};
    cout<<maxElement(arr);
}