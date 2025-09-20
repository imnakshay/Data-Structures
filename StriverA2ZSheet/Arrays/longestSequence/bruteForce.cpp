#include<bits/stdc++.h>
using namespace std;

bool ls(vector<int> &arr,int key){
    for(int i = 0 ; i<arr.size();i++){
        if(arr[i] == key) return true;
    }
    return false;
}

int  longestSequence(vector<int> &arr){
    size_t size = arr.size();
    int count  =  1;
    int maxCount = 1;

    if(size ==0 ) return 0;

    for(int i = 0 ; i<size;i++){
        int key = arr[i]+1;

        while(ls(arr,key)){
            count++;
            maxCount = max(maxCount,count);
            key++;
        }
        count = 1;
    }


    return maxCount;
    
}

int main(){
    vector<int> arr = {1,2,5,4,2,3,6,8,9,7,0};
    cout<<longestSequence(arr);
}