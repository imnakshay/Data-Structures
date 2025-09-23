#include<bits/stdc++.h>
using namespace std;

int pElement(int row,int col){
    row--;
    col--;
    int result = 1;
    for(int i = 0;i<col;i++){
        result *= row-i;
        result/=i+1;
    }
    return result;
}

vector<int> pRow(int row){
    vector<int> result;
    for(int col = 1;col<=row;col++){
        result.push_back(pElement(row,col));
    }
    return result;
}

vector<vector<int>> triangle(int rows){
    vector<vector<int>> result;
    for(int i = 1;i<=rows;i++){
        result.push_back(pRow(i));
    }
    return result;
}

int main(){
    int rows;
    cout<<"Eneter the number of rows: ";
    cin>>rows;
    vector<vector<int>> result = triangle(rows);
    for(auto x : result){
        cout<<endl;
        for(auto i : x){
            cout<<i<<" ";
        }
    }
}