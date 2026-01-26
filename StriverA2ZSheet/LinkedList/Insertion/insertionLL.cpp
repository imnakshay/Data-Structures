#include<bits/stdc++.h>
using namespace std;

//defining the structure of the node
struct Node {
    int data;
    Node * next;
    
    Node(int val){
        data = val;
        next = nullptr;
    }
    Node(int val, Node * nxtptr){
        data =  val;
        next = nxtptr;
    }
};

//traversing the ll
void traverseLL(Node * head){
    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
}

// insertion at head
void insertAtHead(Node *& head,int val){
    Node * newHead = new Node(val,head);
    head = newHead;
}
//insert at tail
void insertAtTail(Node *& head, int val){
    if(!head){
        head = new Node(val);
        return;
    }
    Node * temp = head;
    while(temp && temp->next){
        temp=temp->next;
    }
    temp->next = new Node(val);
} 

//insert at k the element
void insertAtKthElement(Node * & head, int k , int val){
    if(k<0 || (!head && k>0)) return;
    if(k == 0){
        if(!head){
            head = new Node (val);
            return;
        }
        else{
            Node * newHead = new Node(val,head);
            head = newHead;
            return;
        }
    }
    int count = 0;
    Node * temp = head;
    while(temp){
        count++;
        if(count == k){
            temp->next= new Node(val,temp->next);
            return;
        }
        temp = temp->next;
    }
}   

//insert before value
void insertBefore(Node *& head,int num, int val){
    if(!head) return ;
    if(head->data == num){
        Node* newNode = new Node(val,head);
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next){
        if(temp->next->data == num){
            temp->next = new Node(val,temp->next);
            return;
        }
        temp = temp->next;
    }
} 

int main(){
    Node * head = new Node(1);
    head->next = new Node (2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    
    // insertAtHead(head,0);
    // insertAtTail(head,5);
    // insertAtKthElement(head,3,10);
    insertBefore(head,3,20);
    traverseLL(head);
}