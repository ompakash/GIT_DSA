#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// DOUBLY LINKEDLIST
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
        this->next = NULL;
        this->prev = NULL;
    }
};

// PRINT ALL ELEMENT OF LINKED LIST
void print(Node *&head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// LENGTH OF A LINKED LIST
int getlength(Node *&head)
{
    Node *temp = head;
    int count = 0;
    while (temp)
    {
        count++;
        temp = temp->next;
    }
    return count;
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

    // cout << "Element before node2 is " << node2->prev->data << endl;

    print(head);

    cout << getlength(head);

    return 0;
}