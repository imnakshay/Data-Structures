#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node * next;

    Node(int val){
        data = val;
        next = nullptr;
    }
    
    Node(int val, Node* nxtptr){
        data = val;
        next = nxtptr;
    }
};

int lengthLL(Node * head){
    int count = 0;
    Node * temp = head;
    while(temp){
        count ++;
        temp = temp->next;
    }
    return count;
}

int main(){
    Node * head = new Node (2);
    head -> next = new Node (3);
    head ->next->next = new Node (4);
    head->next->next->next = new Node(5);

    cout<<lengthLL(head);
}