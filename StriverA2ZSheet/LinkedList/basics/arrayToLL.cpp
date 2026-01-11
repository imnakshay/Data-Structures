#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
    Node(int val, Node *nxtptr)
    {
        data = val;
        next = nxtptr;
    }
};

Node *arrayToLL(vector<int> &arr)
{
    int n = arr.size();
    if (n == 0)
        return nullptr;
    Node *head = new Node(arr[0]);
    Node *curr = head;
    for (int i = 1; i < n; i++)
    {
        Node *temp = new Node(arr[i]);
        curr->next = temp;
        curr = temp;
    }

    return head;
}

int main()
{
    vector<int> arr = {1, 2, 4, 6, 7};
    Node *head = arrayToLL(arr);

    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}