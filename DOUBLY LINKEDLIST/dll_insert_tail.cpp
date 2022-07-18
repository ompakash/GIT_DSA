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

// INSERT AT HEAD
void insertHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

int main()
{

    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    // cout << "Element before node2 is " << node2->prev->data << endl;

    print(head);

    insertHead(head, 2);
    insertTail(tail, 4);
    insertHead(head, 5);
    print(head);

    // cout << getlength(head);

    return 0;
}