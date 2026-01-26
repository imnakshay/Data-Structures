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

int add(ListNode* head){
    if(!head) return 1;
    int carry = add(head->next);
    if(head->val+carry <= 9){
        head->val += carry;
        carry = 0;
    }
    else{
        carry = 1;
        head->val = 0;
    }
    return carry;
}

void addOne(ListNode*& head){
    int carry = add(head);
    if(carry == 1){
        head = new ListNode(1,head);
    }
}

int main(){
    ListNode* head = new ListNode(9);
    head->next = new ListNode(9);
    head->next->next = new ListNode(9);
    head->next->next->next = new ListNode(9);
    head->next->next->next->next = new ListNode(9);

    addOne(head);

    traverse(head);
}