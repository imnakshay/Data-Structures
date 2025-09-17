#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector <int> & arr){
    int n = arr.size()-1;
    // find the dipping point

    int pivot = -1;
    for(int i = n-1;i>=0;i--){
        if(arr[i]<arr[i+1]) pivot = i;
    }
    
    // if not element is dropping means the permuation is last and no valid next permutation present;
    if(pivot == -1){
        sort(arr.begin(),arr.end());
        return;
    }

    //finding the next greater element than the pivot;
    for(int i = n; i>0;i--){
        if(arr[i]>arr[pivot]) {
            swap(arr[pivot],arr[i]);
            break;
        }
    }
    
    //we found the next number now sort the array from pivot+1 point to n;
    sort(arr.begin()+pivot+1, arr.end());
}

int main(){
    vector<int> arr = {1,3,2};
    nextPermutation(arr);
    for(auto x: arr) cout<<x<< " ";
}