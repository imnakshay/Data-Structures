#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int data;
    ListNode *next;

    ListNode(int val)
    {
        data = val;
        next = nullptr;
    }
    ListNode(int val, ListNode *nxt)
    {
        data = val;
        next = nxt;
    }
};
struct LLStack
{
    ListNode *top = nullptr;

    void push(int x)
    {
        if (top == nullptr)
            top = new ListNode(x);
        else
        {
            ListNode *temp = top;
            top = new ListNode(x, temp);
        }
    }

    void pop()
    {
        if (top == nullptr)
            cout << "already empty.";
        else
        {
            ListNode *temp = top->next;
            delete top;
            top = temp;
        }
    }

    int peek()
    {
        if (top == nullptr)
            return -1;
        else
            return top->data;
    }

    bool isEmpty() { return top == nullptr; }
};

int main()
{
    LLStack st;
    st.push(1);
    st.push(2);
    st.pop();
    st.pop();
    cout<<st.peek();
}