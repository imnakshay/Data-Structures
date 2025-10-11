#include<bits/stdc++.h>
using namespace std;

int noOfTimesRotated(vector<int> & arr){
    //find the index where the minimum element is present that times the array is rotated.
    int minIndex = 0;
    int minElement = arr[0];
    for(int i = 0 ; i<arr.size();i++){
        if(minElement > arr[i]){
            minIndex = i;
        }
        minElement = min(minElement,arr[i]);
    }
    return minIndex;
}

int main(){
    vector<int> arr = {5,6,7,0,1,2,3};
    cout<<noOfTimesRotated(arr);
}