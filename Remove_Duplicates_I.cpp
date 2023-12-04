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

void insert(Node *&head, Node *&tail, int value)
{
    Node *newNode =new Node( value);
    if (head==NULL)
    {
        head= newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void sort(Node *head)
{
    for(Node *i=head; i->next!=NULL; i=i->next)
    {
        for(Node *j=i->next; j!=NULL; j=j->next)
        {
            if(i->value>j->value)
            {
                swap(i->value, j->value);
            }
        }
    }
}

void print(Node *head)
{
    Node *temp =head;
    while(temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
}

void deleteDup(Node *head)
{
    Node *temp =head;
    while(temp->next!=NULL)
    {
        if(temp->value==temp->next->value)
        {
            temp->next=temp->next->next;
        }
        if(temp->next==NULL) break;
        else if (temp->value != temp->next->value){
            temp=temp->next;
        }
    }
}
int main()
{
    Node *head =NULL;
    Node *tail =NULL;
    while(true)
    {
        int n;
        cin>>n;
        if(n==-1) break;
        insert(head, tail, n);
    }
    sort(head);
    deleteDup(head);
    print(head);
    return 0;
}