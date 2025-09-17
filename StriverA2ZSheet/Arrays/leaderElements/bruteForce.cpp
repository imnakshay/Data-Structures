#include<bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int> &arr){
    size_t size = arr.size();
    vector<int> ll;
    for(int i = 0 ; i<size;i++){
        
        bool isLeader = true;
        for(int j = i+1 ; j<size;j++){
            if (arr[j]>arr[i]) {
                isLeader = false;
                break;
            }
        }
        if(isLeader == true) ll.push_back(arr[i]);
    }
    return ll;
    
}

int main(){
    vector<int> arr = {1,2,5,4,2,3,6,8,9,7,8,0}; //output will be 9 8 0;
    arr = leaders(arr);
    for (auto i :arr) cout<< i <<" ";
}