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

// LENGTH OF A LINKED LIST
int getlength(Node *head)
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
void insertHead(Node *&head, Node *&tail, int data)
{
    // empty list
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {

        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

//INSERT AT TAIL
void insertTail(Node *&head, Node *&tail, int data)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }

    else
    {
        Node *temp = new Node(data);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertHead(head, tail, 5);

    print(head);

    insertHead(head, tail, 2);
    insertTail(head, tail, 4);
    insertHead(head, tail, 8);
    print(head);

    // cout << getlength(head);

    return 0;
}