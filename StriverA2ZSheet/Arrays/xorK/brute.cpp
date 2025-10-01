#include<bits/stdc++.h>
using namespace std;

int xorK(vector<int> &arr,int target){
    int n = arr.size();
    int count = 0;
    for(int i = 0;i<n;i++){
        int _xor = 0;
        for(int j = i;j<n;j++){
            _xor ^= arr[j];
            if(_xor == target) count++;
        }
    }
    return count;
    
}

int main(){
    int target = 6;
    vector<int> arr = {4,2,2,6,4};
    cout<<xorK(arr,target);
}