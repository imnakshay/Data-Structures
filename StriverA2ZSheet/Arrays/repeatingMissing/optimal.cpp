#include<bits/stdc++.h>
using namespace std;

pair<int,int> missRepeat(vector<int> arr){
    long long n = arr.size();
    long long sn = (n*(n+1))/2 , sn2 = (n*(n+1)*(2*n+1))/6;
    long long s = 0 , s2 = 0;

    for(int i = 0 ;i < n;i++){
        s+=(long long)arr[i];
        s2+=(long long)arr[i]*(long long)arr[i];
    }
    long long v1,v2;
    v1 = sn - s;
    v2 = (sn2 - s2)/v1;
    long long x = (v1+v2)/2;
    long long y = v2-x;
    
    return {(int)x,(int)y};


}

int main(){
    const vector<int> arr = {1,6,4,2,5,2}; // 3missing and 2repeating
    pair<int,int> temp =  missRepeat(arr);
    cout<<temp.first<<" "<<temp.second;
}