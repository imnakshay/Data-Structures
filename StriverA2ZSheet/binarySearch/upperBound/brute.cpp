#include<bits/stdc++.h>
using namespace std;

int upperBound(vector<int> & arr,int x){
    for(int i = 0 ;i < arr.size();i++){
        if(arr[i] > x) return i;
    }
    return arr.size();
}

int main(){
    vector<int> arr = {1,2,2,5,6,8};
    int x = 0;
    cout<<upperBound(arr,x);
}