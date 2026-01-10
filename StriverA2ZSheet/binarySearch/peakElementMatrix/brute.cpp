#include <bits/stdc++.h>
using namespace std;

pair<int, int> peakElement(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    if (m == 0)
        return {-1, -1};
    int n = matrix[0].size();
    if (n == 0)
        return {-1, -1};
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int top = -1, bottom = -1, left = -1, right = -1;
            if (i > 0)
                top = matrix[i - 1][j];
            if (i < m - 1)
                bottom = matrix[i + 1][j];
            if (j > 0)
                left = matrix[i][j - 1];
            if (j < n - 1)
                right = matrix[i][j + 1];

            int num = matrix[i][j];
            if (num > top && num > bottom && num > left && num > right)
                return {i, j};
        }
    }
    return {-1, -1};
}

int main()
{
    vector<vector<int>> matrix = {{10, 20, 15}, {21, 30, 14}, {7, 16, 32}};
    pair<int, int> result = peakElement(matrix);
    cout << result.first << " " << result.second;
}