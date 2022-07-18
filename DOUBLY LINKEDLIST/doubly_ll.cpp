#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// DOUBLY LINKEDLIST NODE
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // CONSTRUCTOR
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;

    cout << node1->data << endl;
    cout << node1->prev << endl;
    cout << node1->next << endl;

    return 0;
}