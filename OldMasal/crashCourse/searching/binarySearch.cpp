#include<iostream>
using namespace std;
 
 int binarySearch(int arr[],int low, int high,int num){
    if(low >high){
        return -1;
    }
    int mid = (low + high )/2;
    if(arr[mid]==num){
        return mid;
    }
    else if(arr[mid]>num){
        return  binarySearch(arr,low, mid,num);
    }else{
        return binarySearch(arr,mid+1,high,num);
    }
 }
 int main(){
    int arr [6]= {1,2,3,5,5,33};
    int low = 0;
    int high = 5;
    int s = binarySearch(arr,low,high,33);
    if(s!=-1){
        cout<<"the position is "<<s;
    }else{
        cout<<"The number is not found in array";
    }
 }