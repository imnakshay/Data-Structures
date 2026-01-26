#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode * next;

    ListNode (int data){
        val = data;
        next = nullptr;
    }
    ListNode(int data,ListNode * nxt){
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
int lengthOfLoop(ListNode * head){
    if(!head || !head->next) return 0;
    ///find the length of loop.
    ListNode * slow , *fast;
    fast = slow = head;
    while(fast && fast ->next){
        slow = slow->next;
        fast = fast ->next->next;
        if(fast == slow){
            break;
        }
    }
    if(fast!=slow)  return 0;
    fast = fast->next;
    int count = 1;
    while(fast != slow){
        count++;;
        fast = fast->next;
    }
    return count;
}

int main(){
    ListNode * head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode (4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(6,head->next->next);
    // traverse(head);
    cout<<lengthOfLoop(head);
}