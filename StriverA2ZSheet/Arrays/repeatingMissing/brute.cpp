#include<bits/stdc++.h>
using namespace std;

pair<int,int> missRepeat(vector<int> arr){
    if(arr.size() == 0 || arr.size()==1) return {-1,-1};
    int repeat,missing;
    vector<int> temp(arr.size(),0);
    
    for(auto x: arr){
        temp[x-1]++;
        if(temp[x-1] == 2) repeat  = x;
    }
    for(int i = 1;i<=temp.size();i++) if(temp[i-1]==0){
        missing = i ;
        break;
    }

    return {repeat,missing};
}

int main(){
    const vector<int> arr = {1,6,4,2,5,2}; // 3missing and 2repeating
    cout<<"missing : "<<missRepeat(arr).first<<" repeating: "<<missRepeat(arr).second;
}