#include<bits/stdc++.h>
using namespace std;

int xorK(vector<int> &arr,int target){
    int n = arr.size();
    int count = 0;
    int _xor = 0;
    unordered_map<int,int> prexor;
    for(int i = 0 ; i<n;i++){
        _xor ^= arr[i];
        if(_xor== target ) count++;
        int rem = _xor ^ target;
        if(prexor.find(rem)!=prexor.end()){
            count += prexor[rem];
        }
        prexor[_xor]++;
    }
    return count;
    
}

int main(){
    int target = 6;
    vector<int> arr = {4,2,2,6,4};
    cout<<xorK(arr,target);
}