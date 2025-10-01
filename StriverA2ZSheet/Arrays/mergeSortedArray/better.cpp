#include<bits/stdc++.h>
using namespace std;

void mergeSort(vector<int> &arr1,vector<int> &arr2){
    int n = min(arr1.size(),arr2.size());
    int left = arr1.size()-1;
    int right = 0;
    for(int i = 0 ; i<n;i++){
        if(arr1[left]>arr2[right]) swap(arr1[left--],arr2[right++]);
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    return;
}

int main(){
    vector<int> arr1 = {1,5,6,8,11,15};
    vector<int> arr2 = {2,3,5,8,10};
    mergeSort(arr1,arr2);
    for(auto x: arr1) cout<<x<<" ";
    cout<<endl;
    for(auto x : arr2) cout<<x<<" ";

}