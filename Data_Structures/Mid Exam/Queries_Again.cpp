#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val, Node *next = NULL, Node *prev = NULL)
    {
        this->val = val;
        this->next = next;
        this->prev = prev;
    }
};

void insertHead(Node *&head, Node *&tail, int val)
{
    Node *node = new Node(val);

    node->next = head;

    if (head != NULL)
    {
        head->prev = node;
    }

    head = node;

    if (tail == NULL)
    {
        tail = head;
    }
}

void insertTail(Node *&head, Node *&tail, int val)
{
    Node *node = new Node(val);

    if (tail == NULL)
    {
        head = node;
        tail = node;
        return;
    }

    tail->next = node;
    node->prev = tail;
    tail = tail->next;
}

void insertAtPosition(Node *&head, int pos, int val)
{
    Node *node = new Node(val);
    Node *tmp = head;

    for (int i = 1; i < pos; i++)
        tmp = tmp->next;
    node->next = tmp->next;
    tmp->next = node;
    node->prev = tmp;
    node->next->prev = node;
}
void printList(Node *head)
{
    Node *tmp = head;

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

void printList_reverse(Node *tail)
{
    Node *tmp = tail;

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
}

int count(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x <= count(head))
        {
            if (x == 0)
                insertHead(head, tail, v);
            else if (x == count(head))
                insertTail(head, tail, v);
            else
                insertAtPosition(head, x, v);

            cout << "L -> ";
            printList(head);
            cout << endl;
            cout << "R -> ";
            printList_reverse(tail);
            cout << endl;
        }

        else
        {
            cout << "Invalid" << endl;
        }
    }
}