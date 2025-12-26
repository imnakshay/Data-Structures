#include<bits/stdc++.h>
using namespace std;

int sumZero(vector<int> &arr){
    int maxlen = 0;
    int n = arr.size();
    if(n == 0) return 0;
    for(int i = 0;i<n;i++){
        int sum = 0 ;
        for(int j = i;j<n;j++){
            sum +=arr[j];
            if(sum == 0) maxlen = max(maxlen,j-i+1);
        }
    }
    
    return maxlen;
    
}

int main(){
    vector<int> arr = {9,-3,3,-1,6,-5};
    cout<<sumZero(arr);
}