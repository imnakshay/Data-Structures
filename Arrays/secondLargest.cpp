#include<bits/stdc++.h>
using namespace std;

int secSmallestElement(vector<int> arr){
    int small = arr.front();
    int secSmall = -1;

    for(auto i : arr){
        if(i<small){
            secSmall = small;
            small = i;
        }
        else if( i < secSmall) secSmall = i;
    }
    return secSmall;

}

int main(){
    int arr[] = {7,5,6};
    cout<<"The second smallesst element is : "<< secSmallestElement(vector<int> (arr,arr+sizeof(arr)/sizeof(arr[0])));
}