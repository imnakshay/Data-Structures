#include<bits/stdc++.h>
using namespace std;

vector<int> nby3times(vector<int> &arr){
    vector<int> result{};
    int el1,el2;
    int count1 = 0,count2=0;
    for(auto x:arr){
        if(count1==0 && el2!=x){
            el1 = x;
            count1++;
        }
        else if(count2==0 && el1!=x){
            el2=x;
            count2++;
        }
        else if(el1==x)count1++;
        else if(el2==x)count2++;
        else{
            count1--;
            count2--;
        }
    }
    if(count1!=0) result.push_back(el1);
    if(count2!=0) result.push_back(el2);
    return result;
}

int main(){
    vector<int> arr = {1,1,2,3,1};
    for(auto x : nby3times(arr)) cout<<x<<" ";
}