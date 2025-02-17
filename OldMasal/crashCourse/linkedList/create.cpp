#include <iostream>
using namespace std;

struct node
{
    int data;
    node *nextPointer;
};
node* createList(int data){
    node* head = (node*)(malloc(sizeof(node)));
    head->data = data;
    head->nextPointer = nullptr;
    return head;
}
node* createNode(node* &cn,int data){
    node* newNode = (node*)(malloc(sizeof(node)));
    newNode->data = data;
    newNode->nextPointer = nullptr;
    cn->nextPointer = newNode;
    return newNode;

}
int  printList(node* currentNode,int n){
    cout<<currentNode->data<<"\n";
    for(int i = 1 ;i<n;i++){
        currentNode = currentNode->nextPointer;
        cout<<currentNode->data<< '\n';
    }

}
int main()
{
    node* head = createList(1);
    node*currentNode = head;
    int n;
    cout<<"Enter the number of node you want to create: ";
    cin>>n;
    for (int i = 1; i<n;i++){
        int data;
        cout<<"Enter a data: ";
        cin>>data;
        currentNode = createNode(currentNode,data);
    }
    printList(head,n);
    
}