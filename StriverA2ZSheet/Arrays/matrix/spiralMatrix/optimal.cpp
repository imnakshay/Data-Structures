#include <bits/stdc++.h>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>> &arr)
{
    vector<int> result;
    int rows = arr.size() - 1;
    int cols = arr[0].size() - 1;
    int left = 0;
    int top = 0;
    int right = cols;
    int bottom = rows;

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            result.push_back(arr[top][i]);
            cout << arr[top][i] << " ";
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            result.push_back(arr[i][right]);
            cout << arr[i][right] << " ";
        }
        right--;
        for (int i = right; i >= left; i--)
        {
            if (top <= bottom)
            {

                result.push_back(arr[bottom][i]);
                cout << arr[bottom][i] << " ";
            }
        }
        bottom--;
        for (int i = bottom; i >= top; i--)
        {
            if (left <= right)
            {

                result.push_back(arr[i][left]);
                cout << arr[i][left] << " ";
            }
        }
        left++;
    }

    return result;
}

int main()
{
    vector<vector<int>> arr = {
        {1, 2, 3, 4, 5},
        {14, 15, 16, 17, 6},
        {13, 20, 19, 18, 7},
        {12, 11, 10, 9, 8}
    };
    vector<int> arr2 = spiralMatrix(arr);
}