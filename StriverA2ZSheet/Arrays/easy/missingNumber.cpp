#include<bits/stdc++.h>
using namespace std;

int missingArr(vector<int> &arr){
    size_t size = arr.size();
    for(int i = 0; i<size;i++){
        bool flag = 0;
        for(int j = 0 ;j<size;j++){
            if(arr[i]==arr[j] && i!=j) flag = 1;
        }
        if(flag==0) return arr[i];
    }
    return -1;

    
}

int main(){
    vector<int> arr = {1,2,4,1,3,3,4,5,6,6,2,7,5,7,9,9};
    
    cout<<missingArr(arr);
}