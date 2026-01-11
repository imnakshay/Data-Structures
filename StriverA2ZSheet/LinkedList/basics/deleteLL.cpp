#include<bits/stdc++.h>
using namespace std;

struct Node{
    Node* next;
    int data;
    Node(int x){
        data=x;
        next = NULL; 
    }
};

void removeNode(Node*&head,int key){
    //check for head
    if(!head) return ;
    while(head && head->data == key){
        Node * temp = head;
        head = head->next;
        delete temp;
    }
    Node * current = head;
    while(current && current ->next){
        if(current->next && current->next->data == key){
            Node * todelete = current->next;
            current->next = todelete->next;
            delete todelete;
            continue;
        }
        current = current->next;
    }
}

int main(){
    Node * n1 = new Node(1);
    Node * n2 = new Node(2);
    Node * n3 = new Node(2);
    Node * n4 = new Node(2);
    Node * n5 = new Node(2);

    Node * head = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next =n5;


    // remove the node whose data is 2;
    removeNode(head,3);

    // traverse full ll
    Node * temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}