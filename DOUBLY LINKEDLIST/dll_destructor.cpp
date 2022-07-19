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


    //DESTRUCTOR 
    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data " << val << endl;
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

// INSERT AT TAIL
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

void insertPosition(Node *&head, Node *&tail, int position, int data)
{
    if (position == 1)
    {
        insertHead(head, tail, data);
        return;
    }

    Node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertTail(head, tail, data);
        return;
    }

    Node *element = new Node(data);
    element->next = temp->next;
    temp->next->prev = element;
    temp->next = element;
    element->prev = temp;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    insertHead(head, tail, 2);
    insertTail(head, tail, 4);
    insertHead(head, tail, 5);
    print(head);

    insertPosition(head, tail, 2, 100);
    print(head);


    return 0;
}