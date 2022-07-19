#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// DOUBLY LINKED LIST
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

// PRINT ALL ELEMENTS IN LINKEDLIST
void print(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{

    Node *node1 = new Node(10);
    Node *node2 = new Node(12);
    Node *node3 = new Node(15);
    Node *head = node1;

    node1->next = node2;
    node2->next = node3;
    node2->prev = node1;
    node3->prev = node2;

    cout << "Element before node2 is " << node2->prev->data << endl;

    print(head);

    return 0;
}