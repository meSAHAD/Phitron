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

void insertAtTail(Node * &head, int v)
{
    Node *newNode = new Node (v);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}

void printLinkedList(Node *head)
{
    Node *temp=head;
    cout<<"Your linked list is: ";
    while(temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    Node * head=NULL;
    while(true)
    {
       cout<< "option 1: Insert at tail"<<endl;
       cout<< "option 2: Print Linked list"<<endl;
       cout <<"option 3: Exit"<<endl;
       int n;
       cin>> n;
       if(n==1)
       {
        cout << "enter a value"<<endl;
        int val;
        cin>>val;
        insertAtTail(head,val);
       }
       else if (n==2)
       {
        printLinkedList(head);
       }
       else if (n==3)
       {
        break;
       }

    }
    return 0;
}