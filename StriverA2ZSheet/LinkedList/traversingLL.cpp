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

void traverseLL(Node * head){
    Node * temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    Node * head = new Node (2);
    head -> next = new Node (3);
    head ->next->next = new Node (4);
    head->next->next->next = new Node(5);

    traverseLL(head);
}