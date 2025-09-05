#include<bits/stdc++.h>
using namespace std;

vector<int> arr = {1,2,3,4,5,6,7};
int size = arr.size();

void revArr(int l=0){
    int r =  size-l-1;
    if(l>=r) return;
    swap(arr[l],arr[r]);
    revArr(l+1);
    return ;
}

int main(){
    
    revArr();
    for(auto x : arr) cout<<x<<" ";
}