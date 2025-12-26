#include<bits/stdc++.h>
using namespace std;

int noOfSubArrays(vector<int> &arr,int k){
    size_t size = arr.size();
    int sum = 0, count = 0;
    for(int i = 0 ; i<size; i ++){
        sum = 0;
        for(int j = i ;j < size;j++){
            sum+=arr[j];
            if(sum == k) count++;
        }
    }
    return count;
    
}

int main(){
    int k = 6;
    vector<int> arr = {1,2,5,4,2,3,6,8,9,7,0};
    int result = noOfSubArrays(arr,k);
    cout<< result;
}