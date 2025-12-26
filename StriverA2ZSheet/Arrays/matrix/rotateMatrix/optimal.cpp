#include<bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>> & arr,int &n){
    for(int i = 0; i<=n;i++){
        for(int j = 0; j<=i;j++){
            swap(arr[j][i],arr[i][j]);
        }
    }
}

void rotateMatrix(vector<vector<int>> &arr){
    int n = arr.size()-1;
    transpose(arr,n);
    for(int i = 0 ; i<=n;i++){
        reverse(arr[i].begin(),arr[i].end());
    }
}

int main(){
    vector<vector<int>> arr = {
        {5, 1, 9, 11},
        {2, 4, 8, 10},
        {13, 3, 6, 7},
        {15, 14, 12, 16}
    };
    rotateMatrix(arr);

    for (auto i : arr)
    {
        for (auto x : i)
            cout << x << " ";
        cout << endl;
    }
}