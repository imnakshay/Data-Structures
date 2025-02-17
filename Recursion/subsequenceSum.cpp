#include<bits/stdc++.h>
using namespace std;

void subSum(vector<int> & ds, int index,vector<int> arr,int sum){
    if(index == arr.size()){
        int s = 0;
        for(auto x : ds){
            s +=x;
        }
        if(s==sum){
            for(auto x : ds) cout<<x<<" ";
           cout<<endl;
        }
        
        return;
        
    }
    ds.push_back(arr[index]);
    subSum(ds,index+1,arr,sum);
    ds.pop_back();
    return subSum(ds,index+1,arr,sum);
}

int main(){
    vector<int> arr = {3,1,2};
    int sum = 3;
    vector<int> ds;
    subSum(ds,0,arr,sum);
}