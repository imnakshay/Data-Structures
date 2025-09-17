#include<bits/stdc++.h>
using namespace std;

bool checkSorted(vector<int> arr){
    vector<int> v(arr.begin(),arr.end());
    sort(arr.begin(),arr.end());
    for(int i = 0; i<arr.size();i++){
        if(v[i]!=arr[i]) return false;
    }
    return true;

}

int main(){
    vector<int> arr = {1,2,6,4,5,6,7};
    cout<<checkSorted(arr);
    cout<<"The complexity is sorting - O(nlogn)+n=O(n*logn)";
}