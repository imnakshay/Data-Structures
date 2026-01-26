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

void traverseDLL(ListNode *head)
{
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
}

ListNode *arrayToDLL(vector<int> &arr)
{
    if(arr.empty()) return nullptr;
    // create the head
    ListNode *head = new ListNode(arr[0]);
    ListNode *curr = head;
    for (int i = 1; i < arr.size(); i++)
    {
        curr->next = new ListNode(arr[i], curr, nullptr);
        curr = curr->next;
    }
    return head;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    ListNode *head = arrayToDLL(arr);
    traverseDLL(head);
}