#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {2,4,6,8};
    int x = 9;
    cout<<lower_bound(arr.begin(),arr.end(),x)-arr.begin();
}