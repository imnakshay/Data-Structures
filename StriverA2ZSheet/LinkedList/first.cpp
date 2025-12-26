#include<bits/stdc++.h>
using namespace std;

struct Node{
    Node *next;
    int data;
};
int main(){
    Node* n1 = new Node();
    Node* n2 = new Node();
    Node*n3 = new Node();
    
    (*n1).data = 4;
    n1->next = n2;

    n2 -> data = 5;
    n2->next = n3;
    
    n3->data = 6;
    n3->next = NULL;

    //defining the head or starting pointer for this linked list

    Node * head = n1;

    // traversing in the linked list
    Node * temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}