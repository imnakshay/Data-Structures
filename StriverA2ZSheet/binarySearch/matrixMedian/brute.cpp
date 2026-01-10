#include<bits/stdc++.h>
using namespace std;

int median(vector<vector<int>> & mat){
    int m = mat.size();
    int n = mat[0].size();
    vector<int> temp;
    for(auto x:mat){
        for(auto y : x){
            temp.push_back(y);
        }
    }
    sort(temp.begin(),temp.end());
    return temp[m*n/2];

    
}

int main(){
    vector<vector<int>> mat = {{1,2,3,5,6},{2,3,6,7,10},{3,4,8,12,14}};
    cout<<median(mat);
}