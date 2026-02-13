#include<bits/stdc++.h>
using namespace std;

void reverse(vector<int> &arr,int i){
    if(arr.size()/2 <= i) return ;
    swap(arr[i],arr[arr.size()-i-1]);
    reverse(arr,i+1);
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    reverse(arr,0);
    for(auto x: arr){
        cout<<x<<" ";
    }
}