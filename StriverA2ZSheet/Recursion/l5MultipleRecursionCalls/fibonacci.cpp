#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> m;

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    int prev;
    if (m.find(n - 1) != m.end())
    {
        prev = m[n - 1];
    }
    else
    {
        prev = fibonacci(n - 1);
        m[n - 1] = prev;
    }
    int pprev;
    if (m.find(n - 2) != m.end())
    {
        pprev = m[n - 2];
    }
    else
    {
        pprev = fibonacci(n-2);
        m[n - 2] = pprev;
    }
    m[n] = prev + pprev;
    return m[n];
}

int main()
{
    int n = 8;
    cout << fibonacci(8);
}