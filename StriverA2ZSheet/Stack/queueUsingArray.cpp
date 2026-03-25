#include<bits/stdc++.h>
using namespace std;

struct ArrayQueue{
    int arr[100];
    int size = 0;
    int right = -1;
    int left = -1;

    void push(int x){
        if(size == 100) cout<<"queue is already filled";
        else if(size == 0) {
            right = 0;
            left = 0;
            arr[0] = x;
            size++;
        }
        else{
            right = (right + 1) % 100;
            arr[right] = x;
            size++;
        }
    }
    void pop(){
        if(size == 0) cout<<"Queue is already empty.";
        else{
            left = (left + 1) % 100;
            size--;
        }
    }
    int top(){
        if(size ==0 ){
            return -1;
        }
        else return arr[left];
    }
    bool isEmpty(){
        return size == 0;
    }
};

int main(){
    ArrayQueue q;
    q.push(4);
    q.push(5);
    q.push(6);
    q.pop();
    q.pop();
    cout<<q.top();
}