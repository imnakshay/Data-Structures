#include<bits/stdc++.h>
using namespace std;

struct Node{
    Node * next;
    int data;
    Node(int x){
        data = x;
        next = NULL;
    }
};

Node * reverse(Node * & head){
    Node * curr = head;
    Node * prev = NULL;

    while(curr != NULL){
        Node * nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}
int main(){
    Node* n1 = new Node(1);
    Node * n2 = new Node(2);
    Node * n3 = new Node(3);
    
    Node * head = n1;

    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;
    

    // reversing the linked list;
    head = reverse(head);

    //traversing the Node

    Node * it = head;
    while(it != NULL){
        cout<<it->data<<" ";
        it = it->next;
    }
}