#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr){
    int size = arr.size();
    for(int i = 0 ; i < size-1;i++){
        int min = i;
        for(int j = i+1 ; j < size ; j ++ ){
            if(arr[j]<arr[min]) min = j;
        }
        swap(arr[min] , arr[i]);
    }
}

int main(){
    vector<int> arr = {2,3,5,2,5,7,8,4,3,2,1};
    selectionSort(arr);
    for(auto value : arr) cout<<value<<" ";

}