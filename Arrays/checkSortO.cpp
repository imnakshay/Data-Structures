#include<bits/stdc++.h>
using namespace std;

bool checkSort(vector<int> arr){
    for(int i= 0 ; i<(int)arr.size()-1;i++){
        if(arr[i]>arr[i+1]) return 0;

    }
    return 1;
}

int main(){
    vector<int> arr = {11,2,3,4,5,6,7,11};
    cout<<checkSort(arr);
}