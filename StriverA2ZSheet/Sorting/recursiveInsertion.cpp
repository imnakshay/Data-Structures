#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr,int size,int n){
    //base case
    int  j  = n;
    if(n >= size) return ;

    int key = arr[j];
    while(j>0 && arr[j-1]>key){
        arr[j] = arr[j-1];
        j--;
    }
    arr[j] = key;

    insertionSort(arr,size,j+1);
    
}

int main(){
    vector<int> arr = {1,2,5,4,2,3,6,8,9,7,0};
    insertionSort(arr,arr.size(),1);
    for (auto i :arr) cout<< i <<" ";
}