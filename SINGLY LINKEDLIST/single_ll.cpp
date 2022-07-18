#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//CREATION OF A NODE WITH CONSTRUCTOR
class Node
{
public:
    int data;
    Node *next;

    // CONSTRUCTOR
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

int main()
{
    // CREATION OF A NODE
    Node *node1 = new Node(10);

    // HEAD & TAIL
    Node *head = node1;
    Node *tail = node1;

    cout << "node1 -> data " << node1->data << endl;
    cout << "node1 -> next " << node1->data << endl;
    cout << "head -> data " << head->data << endl;
    cout << "tail -> data " << tail->data << endl;

    return 0;
}