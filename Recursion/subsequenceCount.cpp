#include<bits/stdc++.h>
using namespace std;

int countSub(vector<int>&ds,vector<int>arr,int count,int sum,size_t index){
    if(arr.size() == index) {
        int s = 0;
        for(auto x : ds)  s+=x;
        if(s==sum) count ++;
        return count;
    }
    ds.push_back(arr[index]);
    count = countSub(ds,arr,count,sum,index+1);
    ds.pop_back();
    count = countSub(ds,arr,count,sum,index+1);
    return count;
}

int main(){
    vector<int> arr = {5,6,3,2,1};
    vector<int> ds;
    cout<<countSub(ds,arr,0,11,0);
}