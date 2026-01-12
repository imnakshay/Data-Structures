#include<bits/stdc++.h>
using namespace std;

//structure of the node
struct Node {
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;

    }
    Node(int val,Node *nxtptr){
        data = val;
        next = nxtptr;
    }
};
int sizeOfLL(Node * head){
    int size = 0;
    while(head){
        size++;
        head= head->next;
    }
    return size;
}
//function for the traversal of every node in linked list.
void traverse(Node * head){
    if(!head){
        cout<<"The linked list empty.";
        return;
    }
    Node * temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

//function to remove the head of the linked list.
void removeHead(Node *& head){
    if(!head) return;
    Node * nextHead = head->next;
    delete head;
    head = nextHead;
}

//function ot remove the tail of the linked list.
void removeTail(Node *& head){
        //check if head is null or not
        if(!head) return;
        if(!head->next){
            delete head;
            head = nullptr;
            return ;
        }
        Node * pretail = head;
        while(pretail->next->next){
            pretail = pretail->next;
        }
        delete pretail->next;
        pretail->next = nullptr;
}

//delete the kth element of the linked list
void removeKthElement(Node *& head, int k){
    if(!head || k<0) return;
    if(k == 0) {
        Node * temp = head->next;
        delete head;
        head = temp;
        return;
    }
    Node * temp = head;
    for(int i = 0 ; i<k-1;i++){
        if(!temp->next) return;
        temp = temp->next;
    }
    // if(!temp->next) return;
    Node * n = temp->next;
    temp->next = temp->next->next;
    delete n;

}

//we have to remove the node whose has the given data.
void removeValue(Node*& head,int value){
    if(!head) return;
    if(head->data == value) {
        Node * temp = head->next;
        delete head;
        head = temp;
        return;
    }
    //we will stop at one node before the value node.
    Node * temp = head;
    while(temp && temp->next){
        if(temp->next->data == value){
            Node * toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
            return;
        }
        temp = temp->next;
    }
}

// it is the main function..
int main(){
    Node * head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node ( 3);
    head->next->next->next = new Node(4);
    // removeHead(head);
    // removeTail(head);
    // removeKthElement(head,4);
    removeValue(head,1);
    traverse(head);
    
}