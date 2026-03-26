#include <bits/stdc++.h>
using namespace std;

string infixToPostfix(string &s)
{
    if (s.size() == 0)
        return "";
    stack<char> op;
    string result = "";

    for (auto x : s)
    {
        if(x == ' ') continue;
        if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
        {
            result.push_back(x);
        }
        else
        {
            if(x == '(') op.push('(');
            else if (x == ')')
            {
                while (!op.empty() && op.top() != '(')
                {
                    result.push_back(op.top());
                    op.pop();
                }
                op.pop();
            }
            else if (x == '+' || x == '-')
            {
                if (op.empty() || op.top()=='(')
                    op.push(x);
                else
                {
                    while ((!op.empty() && op.top()!='('))
                    {
                        result.push_back(op.top());
                        op.pop();
                    }
                    op.push(x);
                }
            }
            else if( x == '*' || x == '/'){
                if(op.empty() || op.top() == '+' || op.top() == '-' || op.top()=='(') op.push(x);
                else{
                    while(!op.empty() && (op.top() == '*' || op.top() == '/' || op.top() == '^')){
                        result.push_back(op.top());
                        op.pop();
                    }
                    op.push(x);
                }
            }
            else if(x =='^'){
                op.push(x);
            }
        }
    }
    while(!op.empty()){
        result.push_back(op.top());
        op.pop();
    }
    return result;
}

int main()
{
    string s;
    cout << "Enter a expression: ";
    cin >> s;
    cout << infixToPostfix(s);
}