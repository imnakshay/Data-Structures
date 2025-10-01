#include<bits/stdc++.h>
using namespace std;

void mergeArray(vector<int> &arr1,vector<int> & arr2){
    for(int i = 0;i<arr1.size();i++){
        if(arr1[i]<=arr2[0]) continue;
        else{
            swap(arr1[i],arr2[0]);
            int temp = arr2[0];
            int j = 0;
            while(j<arr2.size()-1 && temp>arr2[j+1]){
                arr2[j] = arr2[j+1];
                j++;
            }
            arr2[j] = temp;
        }
    }
}

int main(){
    vector<int> arr1 = {1,7,8,9,11};
    vector<int> arr2 = {2,3,5,11};
    mergeArray(arr1,arr2);
    for(auto x : arr1) cout<<x<<" ";
    for(auto x : arr2) cout<<x<<" ";
}