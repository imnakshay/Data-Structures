#include<bits/stdc++.h>
using namespace std;

void sub(vector<int> &ds,int index,vector<int> arr,int size){
    if(index == size){
        for(auto i: ds){
            cout<<i<<" ";
        }
        if(ds.size()==0) cout<<"{}";
        cout<<endl;
        return;
    }
    ds.push_back(arr[index]);
    sub(ds,index+1,arr,size);
    ds.pop_back();
    return sub(ds,index+1,arr,size);
}

int main(){
    vector<int> arr = {3,1,2};
    vector<int> ds ;
    sub(ds,0,arr,arr.size());
}