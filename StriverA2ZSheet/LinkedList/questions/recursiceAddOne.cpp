#include<bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode * next;

    ListNode(int data){
        val = data;
        next = nullptr;

    }
    ListNode(int data,ListNode* nxt){
        val = data;
        next = nxt;
    }
};

void traverse(ListNode * head){
    while(head){
        cout<<head->val<<' ';
        head = head->next;
    }
}

void reverse(ListNode*&head){
    ListNode* curr = head;
    ListNode * prev = nullptr;
    while(curr){
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    head = prev;
}

void addOne(ListNode *& head){
    reverse(head);
    ListNode * curr =  head;
    int carry = 1;
    while(curr){
        if(curr->val+ carry <=9) {
            curr->val += carry;
            carry = 0;
        }
        else{
            curr->val = 0;
            carry = 1;
        }
        curr = curr->next;
    }
    reverse(head);
    if(carry == 1){
        head = new ListNode(1,head);
    }
}

int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(9);
    head->next->next = new ListNode(9);
    head->next->next->next = new ListNode(9);
    head->next->next->next->next = new ListNode(8);

    addOne(head);
    traverse(head);
}