#include<bits/stdc++.h>
using namespace std;

vector<int> secLargeAndSmall(vector<int> &arr){
    if(arr.size()<2) return {-1,-1};
    int largest = arr[0];
    int smallest = arr[0];
    int secLargest,secSmallest;
    secLargest = secSmallest = INT_MIN;
    for(auto i : arr){
        if(i>largest) {
            secLargest  = largest;
            largest = i;
        }
        if(i>secLargest) secLargest = i;
        //finding the secSmallest
        if(i<smallest){
            secSmallest = smallest;
            smallest = i;
        }
        if(i<secSmallest) secSmallest = i;
    }
    return {secSmallest,secLargest};
    
}

int main(){
    vector<int> arr = {1,2,5,4,2,3,6,8,9,7,0,11,-2};
    arr = secLargeAndSmall(arr);
    
    for (auto i :arr) cout<< i <<" ";
}