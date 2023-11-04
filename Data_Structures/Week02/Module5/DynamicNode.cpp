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
    Node* head =new Node(10);
    Node *a=new Node(20);

    head->next=a;
    cout<<head->value<<endl;
    cout<<a->value<<endl;
    cout<<head->next->value<<endl;
    return 0;
}