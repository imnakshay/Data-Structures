#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode *prev;

    ListNode(int data)
    {
        val = data;
        next = prev = nullptr;
    }
    ListNode(int data, ListNode *prv, ListNode *nxt)
    {
        val = data;
        prev = prv;
        next = nxt;
    }
};
ListNode *makeDLL(vector<int> & arr)
{
    if (arr.empty())
        return nullptr;
    ListNode * head = new ListNode ( arr[0] );
    ListNode * curr = head;
    for(int i = 1 ; i<arr.size();i++){
        curr ->next = new ListNode (arr[i],curr,nullptr);
        curr = curr->next;
    }
    return head;
}

void traverse(ListNode * head){
    while(head){
        cout<<head->val<<" ";
        head = head->next;
    }
}

void reverseDLL(ListNode *& head){
    if(!head || !head->next) return;
    ListNode * curr = head;
    while(curr){
        swap(curr->next,curr->prev);
        head = curr;
        curr = curr->prev;
    }
}

int main()
{
    vector<int> arr = {1,2};
    ListNode *head = makeDLL(arr);

    reverseDLL(head);
    reverseDLL(head);
    traverse(head);
}