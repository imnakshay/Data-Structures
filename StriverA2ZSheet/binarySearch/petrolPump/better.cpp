#include <bits/stdc++.h>
using namespace std;

long double maxMinDistance(vector<long double> &arr, int pumps)
{
    int n = arr.size();
    if(n <= 1) return 0;
    vector<int> sectors(n - 1, 1);
    priority_queue<pair<long double, int>> pq;
    for (int i = 0; i < n - 1; i++)
    {
        pq.emplace(arr[i + 1] - arr[i], i);
    }
    while (pumps != 0)
    {
        int pos = pq.top().second;
        sectors[pos]++;
        long double preDist = pq.top().first;
        pq.pop();
        pq.emplace(preDist * (sectors[pos] - 1) / sectors[pos],pos);
        pumps--;
    }
    return pq.top().first;
}

int main()
{
    vector<long double> arr = {1, 2,3,4,5};
    int pumps =8;
    cout << maxMinDistance(arr, pumps);
}