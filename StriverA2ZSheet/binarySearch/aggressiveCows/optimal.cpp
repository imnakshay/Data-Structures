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
    sort(arr.begin(),arr.end());
    int n = arr.size();
    if(n == 0) return -1;
    if(k>n) return -1;
    if(k==1) return arr.back()-arr.front();
    
    int left = 1; int right = arr.back()-arr.front();
    while(left<=right){
        int mid = left+(right-left)/2;
        if(canBePlaced(arr,mid,k)) left = mid+1;
        else right  = mid-1;
    }
    return right;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    int k = 4;
    cout << maxMinDistance(arr,k);
}
