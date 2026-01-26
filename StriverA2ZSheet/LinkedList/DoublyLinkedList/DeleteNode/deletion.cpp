#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val ;
    ListNode * next;
    ListNode * prev;

    ListNode(int data){
        val = data;
        next = nullptr;
        prev = nullptr;
    }
    ListNode(int data,ListNode *prv,ListNode * nxt){
        val = data;
        prev = prv;
        next = nxt;
    }
};

ListNode* makeDLL(vector<int> & arr){
    if(arr.empty()) return nullptr;
    //make head
    ListNode * head = new ListNode (arr[0]);
    ListNode * curr = head;
    for(int i = 1 ; i<arr.size();i++){
        curr->next = new ListNode(arr[i],curr,nullptr);
        curr = curr->next;
    }
    return head;
}

void traverseLL(ListNode* head){
    while(head){
        cout<<head->val<<" ";
        head = head->next;
    }
}

void headDeletion(ListNode *& head){
    if(!head) return ;
    ListNode * temp = head;
    head = head->next;
    if(head){
        head->prev = nullptr;
    }
    delete temp;
}

void tailDeletion(ListNode * &head){
    if(!head) return;
    if(!head->next){
        delete head;
        head = nullptr;
        return ;
    }
    ListNode * curr = head;
    while(curr->next){
        curr = curr->next;
    }
    ListNode * prevNode = curr->prev;
    prevNode->next = nullptr;
    delete curr;
}

void kthDelete(ListNode *& head,int k ){
    if(!head) return;
    ListNode * curr = head;
    while(curr){
        if(k == 0){
            ListNode * prevNode = curr->prev;
            if(!prevNode){
                head = curr->next;
                if(head) head->prev = nullptr;
                delete curr;
                return;
            }
            else{
                prevNode->next = curr->next;
                if(curr->next){
                    curr->next->prev = prevNode;
                }
                delete curr;
                return ;
            }
        }
        k--;
        curr= curr->next;
    }
}

void deleteNode (ListNode *& head, int k){
    if(!head ) return ;
    ListNode * curr = head;
    while(curr){
        if(curr->val == k){
            ListNode  * prevNode = curr->prev;
            if(!prevNode){
                head = head->next;
                if(head) head->prev = nullptr;
                delete curr;
                return;
            }
            prevNode->next = curr->next;
            if(curr->next) curr->next->prev = prevNode;
            delete curr;
            return ;
        }
        curr = curr->next;
    }
}
int main(){
    //basic setup
    vector<int> arr = {1,2,3,4,5,6};
    ListNode* head = makeDLL(arr);

    //deletion at head
    // headDeletion(head);

    //deletion at tail
    // tailDeletion(head);

    //deletion at kth index
    // kthDelete(head,0);

    //delete the node whose value in given
    deleteNode ( head,6);
    traverseLL(head);
}