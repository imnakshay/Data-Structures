#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr){
    size_t size = arr.size();
    for(int i = 0 ; i < size-1; i++){
        for(int j = 0 ; j < size-1-i; j++){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }   
    }
}

int main(){
    vector<int> arr = {1,2,5,4,2,3,6,8,9,7,0};
    bubbleSort(arr);
    for (auto i :arr) cout<< i <<" ";
}