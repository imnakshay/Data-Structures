#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]={1,325,23,3,523,56,423,23};
    ///we want to sort this array from 3 to 23;
    sort(arr+2,arr+8);
    for(auto i:arr){
        cout<<i<<" ";
    }
}