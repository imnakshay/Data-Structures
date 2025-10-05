#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& arr){
    if(arr.size()==0) return 0;
    if(arr.size()==1) return arr[0];
    int mproduct = INT_MIN;
    int pro = 1;
    for(int i = 0; i<arr.size();i++){
        for(int j = i;j<arr.size();j++){
            pro *=arr[j];
            mproduct = max(mproduct,pro);
        }
        pro = 1;
    }
    return mproduct;
    
}

int main(){
    vector<int> arr = {2,0,-1};
    cout<<maxProduct(arr);
}