#include<bits/stdc++.h>
using namespace std;

struct ArrayStack{
    int st[1000];
    int top = -1;

    void push(int x){
        st[++top] = x;
    }
    int pop(){
        if(top == -1) {
            cout<<"The stack is empty";
            return -1;
        }
        return st[top--];
    }
    int peek(){
        if(top == -1){ 
            cout<<"The stack is empty.";
            return -1;
        }
        return st[top];
    }
    bool isEmpty(){
        return top == -1;
    }
    int size(){
        return top+1;
    }
};

int main(){
    ArrayStack st;
    st.push(3);
    st.push(2);
    st.pop();
    st.pop();
}