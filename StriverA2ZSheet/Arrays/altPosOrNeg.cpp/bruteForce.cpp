#include <bits/stdc++.h>
using namespace std;

void alternate(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i = i + 2)
    {
        if (arr[i] < 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] >= 0)
                {
                    swap(arr[j], arr[i]) ;
                    break;
                }
            }
        }
        if (arr[i + 1] > 0)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[j] < 0)
                {
                    swap(arr[j], arr[i + 1]);
                    break;
                }
            }
        }
    }
}

int main()
{
    vector<int> arr = {-2, 5, 4, -5, 6, -1, -7};
    alternate(arr);
    for (auto x : arr)
        cout << x << " ";
}