#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    // CONSTRUCTOR
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

int main()
{
    node *root = new node(1);
    root->left = new node(20);
    root->right = new node(30);

    cout << root->data << endl;
    cout << root->left->data << endl;
    cout << root->right->data << endl;

    root->left->right = new node(50);
    cout << root->left->right->data << endl;

    return 0;
}