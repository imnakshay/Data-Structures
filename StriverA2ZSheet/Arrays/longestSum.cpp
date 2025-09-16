#include<bits/stdc++.h>
using namespace std;

int maxLen(vector<int> &arr,int k){
    int max_len = 0;
    int sum = 0;
    int len = 0;
    map<int,int> map;
    int i = 0;

    while(i < arr.size()){
        sum += arr[i];
        if(sum == k ){
            max_len = i+1;
        }
        int rem = sum - k;
        if(map.find(rem)!= map.end()){
            len = i - map[rem];
            max_len = max(max_len,len);
        }
        if(map.find(sum)==map.end()){
            map[sum] = i;
        }
        i++;

    }
    return max_len;
}

int main(){
    vector<int> arr = {4,1,0,4,0,0,3};
    int k = 5;
    cout<<maxLen(arr,k);
}