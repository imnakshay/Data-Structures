#include<bits/stdc++.h>
using namespace std;

bool subsequenceOfSumK(vector<int> arr,int k,int index = 0,vector<int> arr2 = {},long long sum = 0){
    if(index >= arr.size()){
        if(sum == k){
            cout<<"{ ";
            for(auto x: arr2){
                cout<<x<<" ";
            }
            cout<<"}";
            cout<<endl;
            return true;
        }
        return false;
    }
    if(sum > k) return false;
    arr2.push_back(arr[index]);
    sum += arr[index];
    if(subsequenceOfSumK(arr,k,index+1,arr2,sum))return true;;

    sum-=arr[index];
    arr2.pop_back();
    if(subsequenceOfSumK(arr,k,index+1,arr2,sum))return true;
    return false;
}

int main(){
     vector<int> arr = {1,2,3,4};
     subsequenceOfSumK(arr,5);
}