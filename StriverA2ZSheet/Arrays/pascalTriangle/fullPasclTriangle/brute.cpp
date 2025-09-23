#include<bits/stdc++.h>
using namespace std;

vector<int> pRow(int row){
    vector<int> result{1};
    int element = 1;
    for(int col = 1;col<row;col++){
        element *= (row-col)/col;
        result.push_back(element);
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