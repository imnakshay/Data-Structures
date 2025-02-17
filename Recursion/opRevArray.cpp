#include<bits/stdc++.h>
using namespace std;

vector<int> revArr(vector<int> & arr){
    int length = arr.size();
    for(int i = 1 ; i<length/2;i++){
        swap(arr[i-1],arr[length-i]);
    }
    return arr;

}

int main(){
    vector<int> arr = {1,2,4,5,3,6,7,8};
    vector<int> rev =  revArr(arr);
    for(auto x:rev){
        cout<<x<<" ";
    }
}