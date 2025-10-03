#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> inversePairs(vector<int> &arr)
{
    int size = arr.size();
    vector<pair<int, int>> result;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if(arr[j]<arr[i]) result.emplace_back(arr[i],arr[j]);
        }
    }
    return result;
}

int main()
{
    vector<int> arr = {5, 3, 2, 1, 4};
    vector<pair<int, int>> result = inversePairs(arr);
    cout<<result.size();
}