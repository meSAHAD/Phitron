#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node (int value)
    {
        this->value =value;
        this->next=NULL;
    }
};

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    Node *temp = head;
    while (temp!=NULL)
    {
        cout<<temp->value<<endl;
        temp=temp->next;
    }
    
    return 0;
}