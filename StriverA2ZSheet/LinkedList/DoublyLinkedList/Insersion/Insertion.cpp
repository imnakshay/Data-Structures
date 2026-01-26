#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode * next;
    ListNode * prev;

    ListNode(int data){
        val = data;
        next = nullptr;
        prev =  nullptr;
    }
    
    ListNode(int data, ListNode * prv, ListNode * nxt){
        val = data;
        next = nxt;
        prev = prv;
    }
};

ListNode * makeDLL(vector<int> & arr){
    if(arr.empty()) return nullptr;
    ListNode  * head = new ListNode (arr[0]);
    ListNode  * curr = head;
    for(int i = 1 ; i < arr.size();i++){
        curr->next = new ListNode(arr[i],curr,nullptr);
        curr = curr->next;
    }
    return head;
}

void traverse(ListNode * head){
    while(head){
        cout<<head->val<<" ";
        head=  head->next;
    }
}

void insertAtHead(ListNode *& head, int data){
    if(!head){
        head = new ListNode (data);
        return;
    }
    head = new ListNode (data,nullptr,head);
    head ->next->prev = head;
    return;
}

void insertAtTail(ListNode *& head, int data){
    if(!head){
        head = new ListNode(data);
        return ;
    }
    ListNode * curr = head;
    while(curr->next){
        curr =  curr->next;
    }
    curr->next = new ListNode(data,curr,nullptr);
}

void kthElement(ListNode*& head, int data, int k){
    if(k == 0){
        if(!head){
            head = new ListNode (data);
            return;
        }
        head = new ListNode(data,nullptr,head);
        head->next->prev = head;
        return;
    }
    ListNode * curr = head;
    int count = 1;
    while(curr){
        if(count == k){
            ListNode* nxt = curr->next;
            if(nxt){
                curr->next = new ListNode(data,curr,nxt);
                nxt->prev = curr->next;
            }
            else{
                curr->next= new ListNode(data,curr,nullptr);
            }
            return ;
        }
        count++;
        curr = curr->next;
    }
}
int main(){
    vector<int> arr = {1,1,2,3,4,7};
    ListNode * head = makeDLL(arr);

    // insertAtHead(head,0);
    // insertAtTail(head,7);
    kthElement(head,100,1);
    traverse(head);
}