#include<bits/stdc++.h>
using namespace std;

bool canBePlaced(vector<int> &arr,int dis,int k){
    int count = 1, last = 0;
    for(int i = 1 ; i < arr.size();i++){
        if(arr[i]-arr[last] >= dis){
            last = i ;
            count++;
        }
        if(count >= k) return 1;
    }
    return 0;
}

int maxMinDistance(vector<int> & arr,int k){
    int n = arr.size();
    if(k>n) return -1;
    if(k==1) return arr.back()-arr.front();
    
    sort(arr.begin(),arr.end());
    for(int i = 0 ; i <= arr[n-1] - arr[0];i++){
        if(!canBePlaced(arr,i,k)) return i-1;
    }
    return -1;
}

int main(){
    vector<int> arr = {0,3,4,7,10,9};
    int k = 4;
    cout << maxMinDistance(arr,k);
}