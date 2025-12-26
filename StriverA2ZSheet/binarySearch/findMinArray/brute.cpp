#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int> & arr){
    int n = arr.size();
    if(n == 0) return 0;
    int mini = arr[0];
    for(auto x : arr){
        mini = min(mini,x);
    }
    return mini;
}

int main(){
    vector<int> arr = {1,2,3,1,2,3};
    cout<<findMin(arr);
}