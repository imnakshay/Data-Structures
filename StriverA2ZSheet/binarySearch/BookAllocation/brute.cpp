#include<bits/stdc++.h>
using namespace std;

int studentAllocated(vector<int> & arr,int pages){
    int count = 1;
    long long sum = 0;
    for(int i = 0 ; i < arr.size();i++){
        if(sum+arr[i]<= pages) sum+=arr[i];
        else {
            count++;
            sum  = arr[i];
        }
    }
    return count;
}

int minMaxPages(vector<int> & arr,int m){
    int n = arr.size();
    if(m>n) return -1;

    int minPages = *max_element(arr.begin(),arr.end());
    int maxPages = 0;
    for(auto x : arr) maxPages += x;
    
    for(int i = minPages ; i <= maxPages; i++){
        if(studentAllocated(arr,i) == m) return i;
    }
    return minPages;
}

int main(){
    vector<int> arr = {12,24,67,90};
    int m = 4;
    cout<<minMaxPages(arr,m);
}