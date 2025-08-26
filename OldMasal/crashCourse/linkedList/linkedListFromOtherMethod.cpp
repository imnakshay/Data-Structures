#include <iostream>
using namespace std;

struct node
{
    int data;
    node *pointer;
};

int main()
{
    node *head =nullptr;
    for (int i = 0; i < 5; i++)
    {
        node *newNode = new node;
        newNode->data = 1;
        newNode->pointer = nullptr;
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            node *temp = head;
            while (temp->pointer != nullptr)
            {
                temp = temp->pointer;
            }
            temp->pointer = newNode;
        }
    }
    node* temp = head;
    while(temp!=nullptr){
        cout<<temp->data<<' ';
        temp= temp->pointer;
    }
}