#include<bits/stdc++.h>
using namespace std;

int max1Row(vector<vector<int>>& matrix){
    int m = matrix.size();
    int n = matrix[0].size();
    if(m == 0 || n == 0) return -1;
    int maxrow = -1;
    int maxone = 0;
    for(int i = 0 ; i<m;i++){
        int count = 0;
        for(auto x : matrix[i]){
            if(x == 1) count++;
        }
        if(count > maxone){
            maxone = count;
            maxrow = i;
        }
    }
    return maxrow;
}

int main(){
    vector<vector<int>> matrix = {
                                  {0,0,0,1},
                                  {0,1,1,0},
                                  {1,1,1,0}
                                            };
    cout<<max1Row(matrix);
}