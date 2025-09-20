#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> setZero(vector<vector<int>> &arr)
{
    vector<vector<int>> temp(arr.begin(),arr.end());
    int m = arr.size();
    int n = arr[0].size();
    // selection of every element;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int key = arr[i][j];
            //check the row
            for (int k = 0; k < n;k++){
                if(arr[i][k] == 0){
                    temp[i][j]=0;
                    break;
                }
            }
            //checking the col;
            for(int k = 0 ;k<m;k++){
                if(arr[k][j] == 0){
                    temp[i][j] = 0;
                    break;
                }
            }
        }
    }
    return temp;
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