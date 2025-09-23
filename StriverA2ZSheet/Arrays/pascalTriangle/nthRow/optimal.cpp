#include<bits/stdc++.h>
using namespace std;

vector<int> nthRow(int row){
    vector<int> result{1};
    int element = 1;
    for(int i = 1 ;i < row;i++){
        element = element*(row-i)/i;
        result.push_back(element);
    }
    return result;
}

int main(){
    int row;
    cout<<"Enter the rowNumber";
    cin>>row;
    for(auto x: nthRow(row)) cout<<x<<" ";
}