#include<bits/stdc++.h>
using namespace std;

//The time complexity of this answer is 0(logn) due to insertion in minHeap is O(logn);

int maxProfit(vector<int>&arr){
    priority_queue<int,vector<int>,greater<int>> minHeap;
    int maxP = 0;
    for(int i =  1; i<arr.size();i++){
        minHeap.push(arr[i-1]);
        maxP = max(maxP,arr[i]-minHeap.top());
    }
    return maxP;

}

int main(){
    vector<int > arr = {1,5,7,3,9,11,9};
    cout<<maxProfit(arr);

}