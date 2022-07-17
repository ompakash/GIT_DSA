#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    //CONSTRUCTOR
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// INSERT A NODE AT THE HEAD OF A LINKED LIST
void insert_at_head(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

// INSERT A NODE AT LAST OF THE LINKED LIST
void insert_at_last(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

// PRINT THE LINKED LIST
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

int main()
{

    // CREATION OF NEW NODE
    Node *node1 = new Node(10);
    // HEAD & TAIL
    Node *head = node1;
    Node *tail = node1;

    insert_at_head(head, 9);
    insert_at_head(head, 8);
    insert_at_last(tail, 11);
    insert_at_last(tail, 12);

    // PRINT THE LINKED LIST
    print(head);

    return 0;
}