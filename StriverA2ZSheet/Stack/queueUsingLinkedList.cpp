#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int data;
    ListNode * next;

    ListNode(int x){
        data = x;
        next = nullptr;
    }
    ListNode(int x, ListNode * y){
        data = x;
        next = y;
    }
};

struct QueueLL{
    ListNode * rear = nullptr;
    ListNode * front = nullptr;

    void push(int x){
        if(rear == nullptr){
            rear = new ListNode (x);
            front = rear;
            return ;
        }
        rear->next = new ListNode (x);
        rear = rear->next;
    }

    void pop(){
        if(front == nullptr) {
            cout<<"Already empty";
            return ;
        }
        if(front == rear){
            delete front;
            front = nullptr;
            rear = nullptr;
            return ;
        }
        ListNode * temp = front->next;
        delete front;
        front = temp;
    }

    int peek(){
        if(front == nullptr){
            cout<<"empty"<<endl;;
            return -1;
        }
        return front->data;
    }
    bool isEmpty(){
        return rear == nullptr;
    }

};

int main(){
    QueueLL q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.pop();
    q.pop();
    q.pop();
    cout<<q.peek();
}