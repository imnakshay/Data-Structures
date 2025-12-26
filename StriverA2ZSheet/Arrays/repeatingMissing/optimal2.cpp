#include<bits/stdc++.h>
using namespace std;

pair<int,int> missRepeat(vector<int> &arr){
    int n = arr.size();
    int xorr = 0;
    for(int i = 0 ; i < n;i++){
        xorr ^= arr[i];
        xorr ^= i+1;
    }
    //xorr = missing^repeat;
    //we try to find the different bit where they survive.
    int diffBit = 0;
    while(true){
        if((xorr & (1<<diffBit)) != 0) break;
        diffBit++;
    }
    int zero = 0 , one = 0;
    for(int i = 0 ; i<n;i++){
        if((arr[i] & (1<<diffBit))==0){
            zero^=arr[i];
        }
        else {
            one ^= arr[i];
        }
        if((i+1)&1<<diffBit == 0) zero^=i+1;
        else one^=i+1;
    }
    for(int i = 0 ; i < n;i++){
        if(arr[i] == one) return {zero,one};
        else return {one,zero};
    }
    return {one ,zero};
} 

int main(){
    vector<int> arr = {6,3,5,4,2,6};
    pair<int,int> temp = missRepeat(arr);
    cout<<"missing: "<<temp.first<<"repeat: "<<temp.second;
}