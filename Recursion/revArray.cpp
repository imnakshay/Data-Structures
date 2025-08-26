// here we are using tail recursion approach to solve the problem....

#include<bits/stdc++.h>
using namespace std;

vector<int> rev;

vector<int> revArr(vector<int>  a,int size){
    if(size ==1){
        rev.push_back(a[0]);
        return rev;
    }
    rev.push_back(a[size-1]);
    return revArr(a,size-1);
}

int main(){
    vector<int> arr = {1,2,3,4,5,6};
    vector<int> rev=revArr(arr,arr.size());
    for(auto x: rev){
        cout<<x<<" ";
    }
}