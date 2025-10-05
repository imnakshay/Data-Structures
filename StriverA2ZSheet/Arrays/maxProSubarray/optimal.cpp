#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& arr){
    if(arr.size()==0) return 0;
    if(arr.size()==1) return arr[0];
    int suffix = 1;
    int prefix = 1;
    int maxpro = INT_MIN;
    for(int i = 0 ; i<arr.size();i++){
        suffix *= arr[i];
        prefix *= arr[arr.size()-1-i];
        
        maxpro = max(maxpro,max(suffix,prefix));
        if(suffix == 0) suffix = 1;
        if(prefix == 0) prefix = 1;
    }
    return maxpro;
    
}

int main(){
    vector<int> arr = {-3,0,1,-2};
    cout<<maxProduct(arr);
}