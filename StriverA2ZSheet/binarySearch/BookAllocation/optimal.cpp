#include<bits/stdc++.h>
using namespace std;

int studentAllocated(vector<int> & arr,int pages){
    int student = 0;
    long long  sum = 0ll;
    for(int i = 0 ; i<arr.size();i++){
        if(sum+arr[i] <= pages) sum += arr[i];
        else {
            student++;
            sum = arr[i];
        }
    }
    if(sum > 0) student++;
    return student;

}

int minMaxPages(vector<int> & arr,int m){
    int n = arr.size();
    int minPages = *max_element(arr.begin(),arr.end());
    long long maxPages = accumulate(arr.begin(),arr.end(),0);

    if(n<m) return -1;
    if(n==m) return minPages;

    int left = minPages, right  = maxPages;
    while(left<=right){
        int mid = left+(right-left)/2;
        if(studentAllocated(arr,mid)>m) left = mid+1;
        else right=  mid-1;
    }
    return left;
}

int main(){
    vector<int> arr = {12,34,67,90};
    int m = 2;
    cout<<minMaxPages(arr,m);
}