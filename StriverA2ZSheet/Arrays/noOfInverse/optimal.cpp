#include <bits/stdc++.h>
using namespace std;

void mergeCount(vector<int> &arr, int l,int m, int h,int &count){
    int mid = m, low = l,high = mid+1;
    vector<int> temp;
    while(low<=m && high<=h){
        if(arr[low]<=arr[high]) temp.push_back(arr[low++]);
        else {
            count = count+mid-low+1;
            temp.push_back(arr[high++]);
        }
    }
    while(low<=mid) temp.push_back(arr[low++]);
    while(high<=h) temp.push_back(arr[high++]);

    for(int i=l;i<=h;i++){
        arr[i] = temp[i-l];
    }
}

void  mergeSort(vector<int> &arr,int low ,int high,int &count){
    if(low>=high) return ;
    int mid = (low+high)/2;
    mergeSort(arr,low,mid,count);
    mergeSort(arr,mid+1,high,count);
    mergeCount(arr,low,mid,high,count);
}

int  inversePairs(vector<int> &arr)
{
    int count = 0;
    mergeSort(arr,0,arr.size()-1,count);
    return count;
}

int main()
{
    vector<int> arr = {5, 3, 2, 4,1};
    int  result = inversePairs(arr);
    cout<<result;
}