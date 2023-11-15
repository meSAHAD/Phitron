#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int x;
    Node *next;

    Node(int x, Node *next = NULL)
    {
        this->x = x;
        this->next = next;
    }
};

void tailInsert(Node *&head, Node *&tail, int x)
{
    Node *node = new Node(x);
    if (head == NULL)
    {
        head = node;
        tail = head;
        return;
    }
    tail->next = node;
    tail = tail->next;
}

int main(){
    Node *head = NULL;
    Node *tail = NULL;

    int big = INT_MIN;
    int sml = INT_MAX;
    while (true){
        int v;
        cin >> v;
        if (v == -1)
        {
            break;
        }
        big = max(big, v);
        sml = min(sml, v);

        tailInsert(head, tail, v);
    }
    cout << big << " " << sml;
}
