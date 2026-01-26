#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode * next;

    ListNode(int data){
        val = data;
        next = nullptr;
    }

    ListNode (int data, ListNode* nxt){
        val = data;
        next = nxt;
    }
};

void traverse(ListNode * head){
    while(head){
        cout<<head->val<<" ";
        head = head->next;
    }
}

void removeDuplicate(ListNode*& head){
    if(!head) return;
    ListNode * curr = head;
    ListNode * nextNode = head->next;
    while(nextNode){
        if(curr->val == nextNode->val){
            nextNode = nextNode->next;
            delete curr->next;
            curr->next = nextNode;
        }
        else{
            curr = curr->next;
            nextNode = nextNode->next;
        }
    }

}

int main(){
    ListNode * head = new ListNode(1);
    head ->next = new ListNode (1);
    head ->next->next = new ListNode (2);
    head ->next->next->next = new ListNode (2);
    head ->next->next->next->next = new ListNode (2);
    head ->next->next->next->next->next = new ListNode (3);
    head ->next->next->next->next->next->next = new ListNode (4);
    head ->next->next->next->next->next->next->next = new ListNode (4);
    head ->next->next->next->next->next->next->next->next = new ListNode (5);
    head ->next->next->next->next->next->next->next->next->next = new ListNode (6);
    head ->next->next->next->next->next->next->next->next->next->next = new ListNode (6);
    
    removeDuplicate(head);
    traverse(head);
}