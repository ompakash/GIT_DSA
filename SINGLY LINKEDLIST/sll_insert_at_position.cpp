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


//INSERT ELEMENT AT A GIVEN POSITION
void insert_at_position(Node *&head, Node *&tail, int position, int data)
{
    // FOR THE FIRST POSITION
    if (position == 1)
    {
        insert_at_head(head, data);
        return;
    }

    int count = 1;
    Node *temp = head;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    // FOR LAST POSITION
    if (temp->next == NULL)
    {
        insert_at_last(tail, data);
        return;
    }

    Node *element = new Node(data);
    element->next = temp->next;
    temp->next = element;
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
    insert_at_position(head, tail, 3, 20);
    // PRINT THE LINKED LIST
    print(head);

    return 0;
}