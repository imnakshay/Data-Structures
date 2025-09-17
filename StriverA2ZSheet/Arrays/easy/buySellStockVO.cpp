#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &arr){

    if(arr.size()==0) return 0;

    int minNum = arr[0] ;
    int maxPr = 0;

    for(int i = 1; i<arr.size();i++){

        maxPr = max(arr[i]-minNum,maxPr);
        minNum = min(arr[i],minNum);
    }
    return maxPr;
}

int main(){
    vector<int> arr = {1,2,5,4,2,3,6,8,9,7,0};
    
    cout<<maxProfit(arr);
}