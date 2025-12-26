#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> setZero(vector<vector<int>> &arr)
{
    vector<vector<int>> temp(arr.begin(),arr.end());
    int m = arr.size();
    int n = arr[0].size();
    vector<int> row={0};
    vector<int> col={0};

    // selection of every element;
    for (int i = 0; i < m; i++){
        for(int j = 0 ;j<n;j++){
            if(arr[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for(int i = 0 ; i <m;i++){
        for(int j = 0 ;j < n ;j++){
            if(row[i]||col[j]){
                arr[i][j] = 0;
            }
        }
    }
    return arr;

}

int main()
{
    vector<vector<int>> arr = {{1, 1, 1,1},
                               {1, 0, 1,1},
                               {1, 1, 1,1}};
    arr = setZero(arr);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}