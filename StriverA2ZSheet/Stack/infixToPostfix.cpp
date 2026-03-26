#include<bits/stdc++.h>
using namespace std;

int precedence(char symbol){
    if(symbol == '+' || symbol == '-') return 1;
    if(symbol == '*' || symbol == '/') return 2;
    if(symbol == '^') return 3;
    else return 0;
}

string infixToPostfix(string &s){
    string result = "";
    stack<char> st;

    for(auto x : s){
        if(isalnum(x)) result.push_back(x);
        else{
            if(x == '(' ||  st.empty() || precedence(x) > precedence(st.top()) || x == '^') st.push(x);
            else if( x == ')' ){
                while(st.top() != '('){
                    result.push_back(st.top());
                    st.pop();
                }
                st.pop();
            }
            else{
                while(!st.empty() && (precedence(st.top()) >= precedence(x))){
                    result.push_back(st.top());
                    st.pop();
                }
                st.push(x);
            }
            
        }
    }
    while(!st.empty()){
        result.push_back(st.top());
        st.pop();
    }
    return result;
}

int main(){
    string s;
    cout << "Enter a expression: ";
    cin >> s;
    cout << infixToPostfix(s);
}