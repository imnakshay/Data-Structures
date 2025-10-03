#include<bits/stdc++.h>
using namespace std;

int reversePair(vector<int> & arr){
    int n = arr.size();
    int count = 0;
    for(int i = 0 ;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]>2*arr[j]) count++;
        }
    }
    return count;
}

int main(){
    vector<int> arr = {1,3,2,3,1};
    cout<<reversePair(arr);
}