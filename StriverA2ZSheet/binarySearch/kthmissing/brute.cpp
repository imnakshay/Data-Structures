#include<bits/stdc++.h>
using namespace std;

int kthMissing(vector<int>  &arr,int k){
    set<int> missingNumbers;
    int large = *max_element(arr.begin(),arr.end());
    
    for(int i = 1;i<=large;i++) missingNumbers.insert(i);

    for(auto x : arr) missingNumbers.erase(x);

    int n = missingNumbers.size();
    if(n<k){
        int result = large+k-n;
        return result;
    }
    auto it = missingNumbers.begin();
    advance(it,k-1);
    return *it;
}

int main(){
    vector<int> arr = {2,3,4,7,11};
    int k = 7;
    cout<<kthMissing(arr,k);
}