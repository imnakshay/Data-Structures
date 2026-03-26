#include <bits/stdc++.h>
using namespace std;

int priority(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '^')
        return 3;
    else
        return 0;
}

string infixToPrefix(string &s)
{
    string result = "";
    stack<char> st;

    reverse(s.begin(), s.end());

    for (auto x : s)
    {
        if (isalnum(x))
            result.push_back(x);
        else
        {
            if (st.empty() || x == ')' || priority(st.top()) <= priority(x))
                st.push(x);

            else if (x == '(')
            {
                while (!st.empty() && (st.top() != ')'))
                {
                    result.push_back(st.top());
                    st.pop();
                }
                st.pop();
            }
            else
            {
                while (!st.empty() && (priority(x) < priority(st.top())))
                {
                    result.push_back(st.top());
                    st.pop();
                }
                st.push(x);
            }
        }
    }
    while (!st.empty())
    {
        result.push_back(st.top());
        st.pop();
    }
    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    while (true)
    {
        string s;
        cout << "\nEnter a expression: ";
        cin >> s;
        cout << infixToPrefix(s);
    }
}