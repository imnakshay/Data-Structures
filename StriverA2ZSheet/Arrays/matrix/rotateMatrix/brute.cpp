#include <bits/stdc++.h>
using namespace std;

vector < vector<int>> rotateMatrix(vector<vector<int>> &arr)
{
    int row = arr.size();
    int col = arr[0].size();
    vector<vector<int>> temp(col,vector<int>(row,{}));
    for(int i = 0 ;i < row;i++ ){
        for(int j = 0 ;j<col;j++){
            temp[i][j] = arr[j][i];
        }
    }

    //reverse ever row;
    for(auto &i : temp){
        reverse(i.begin(),i.end());
    }
    return temp;
}

int main()
{
    vector<vector<int>> arr = {
        {5, 1, 9, 11},
        {2, 4, 8, 10},
        {13, 3, 6, 7},
        {15, 14, 12, 16}
    };
    arr = rotateMatrix(arr);

    for (auto i : arr)
    {
        for (auto x : i)
            cout << x << " ";
        cout << endl;
    }
}