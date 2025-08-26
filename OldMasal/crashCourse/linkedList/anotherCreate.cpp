#include <iostream>
using namespace std;

struct node
{
    int data;
    node *nextPointer;
};

node *createNode(node *&cn, int data)
{
    node *newNode = (node *)(malloc(sizeof(node)));
    newNode->data = data;
    newNode->nextPointer = nullptr;
    cn->nextPointer = newNode;
    return newNode;
}
node *createNodeInsertion(node *&cn, node *nn, int data)
{
    node *newNode = (node *)(malloc(sizeof(node)));
    newNode->data = data;
    newNode->nextPointer = nn;
    cn->nextPointer = newNode;
    return newNode;
}
int printNode(node *cn, int n)
{
    cout << cn->data << " ";
    for (int i = 1; i < n; i++)
    {
        cn = cn->nextPointer;
        cout << cn->data << " ";
    }
}

int insertion(node *&cn, int pos, int data, int &n)
{
    // previous pointer
    node *pre;
    node *next;
    pre = next = cn;
    for (int i = 1; i < pos; i++)
    {

        if (i < pos - 1)
        {
            pre = pre->nextPointer;
        }
        else
        {
            next = pre->nextPointer;
        }
    }
    createNodeInsertion(pre, next, data);
    n++;
}

int main()
{
    int n;
    cout << "Enter the number of nodes you want to create: ";
    cin >> n;
    cout << "Enter the data 1 : ";
    int value;
    cin >> value;

    node *head = (node *)(malloc(sizeof(node)));
    head->data = value;
    head->nextPointer = nullptr;

    node *currentPointer = head;

    for (int i = 2; i <= n; i++)
    {
        cout << "Enter the data " << i << ": ";
        cin >> value;
        currentPointer = createNode(currentPointer, value);
    }

    printNode(head, n);
    // insertion
    int pos;
    cout << "Enter the pos:  ";
    ;
    cin >> pos;
    cout << "Enter the data : ";
    ;
    cin >> value;
    insertion(head, pos, value, n);
    printNode(head, n);
}