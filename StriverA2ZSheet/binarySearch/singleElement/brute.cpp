#include<bits/stdc++.h>
using namespace std;

int singleElement(vector<int> &arr){
    int xorr= 0;
    for(auto x: arr) xorr^=x;
    return xorr;
}

int main(){
    vector<int> arr = {1,1,2,3,3,4,4,5,5};
    cout<<singleElement(arr);
}