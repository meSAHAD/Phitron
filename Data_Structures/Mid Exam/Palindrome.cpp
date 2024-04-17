#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val, Node *next = NULL)
    {
        this->val = val;
        this->next = next;
    }
};

void tailinsertion(Node *&head, Node *&tail, int val)
{
    Node *node = new Node(val);
    if (head == NULL)
    {
        head = node;
        tail = head;
        return;
    }

    tail->next = node;
    tail = tail->next;
}

void reverse(Node *pre, Node *&start, bool *flag)
{
    if (pre == NULL)
    {
        return;
    }

    reverse(pre->next, start, flag);

    if (pre->val == start->val)
    {
        start = start->next;
    }
    else
    {
        *flag = false;
        return;
    }
}
bool checkpalindrom(Node *head)
{
    bool flag = true;
    reverse(head, head, &flag);

    return flag;
}

int main()
{
    Node *head = NULL;
    Node *tail = head;

    int a;
    while (true)
    {
        cin >> a;
        if (a == -1)
        {
            break;
        }

        tailinsertion(head, tail, a);
    }

    if (checkpalindrom(head) == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}