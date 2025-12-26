#include<bits/stdc++.h>
using namespace std;

int element(int row,int col){
    col--;
    row--;
    int result  = 1;
    for(int i = 0;i<col;i++){
        result *= row-i;
        result /= i+1;
    }
    return result;
}

vector<int> nthRow(int row){
    vector<int> result;
    for(int i = 1 ;i <= row;i++){
        result.push_back(element(row,i));
    }
    return result;
}

int main(){
    int row;
    cout<<"Enter the rowNumber";
    cin>>row;
    for(auto x: nthRow(row)) cout<<x<<" ";
}