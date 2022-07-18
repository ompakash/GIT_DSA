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

//INSERT A NODE AT THE HEAD OF A LINKED LIST
void insert_at_head(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
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

    return 0;
}