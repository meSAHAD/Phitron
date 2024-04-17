#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value, Node *next = NULL, Node *prev = NULL)
    {
        this->value = value;
        this->next = next;
        this->prev = prev;
    }
};

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

class sahadStack
{
    Node *head = NULL;
    Node *tail = NULL;
    int siz = 0;

public:
    void push(int value)
    {
        siz++;
        Node *node = new Node(value);
        if (tail = NULL)
        {
            head = node;
            tail = node;
            return;
        }
        tail->next = node;
        node->prev = tail;
        tail = tail->next;
    }

    void pop()
    {
        Node* dlt = tail;
        tail = tail->prev;
        if (tail = NULL)
            head = NULL;
        else
            tail->next = NULL;
        delete dlt;
        siz--;
    }

    int top()
    {
        return tail->value;
    }

    int size()
    {
        return siz;
    }

    bool empty()
    {
        if (siz == 0)
            return true;
        else
            return false;
    }
};

class SahadQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int siz = 0;

    void push(int value)
    {
        siz++;
        Node *node = new Node(value);
        if (tail = NULL)
        {
            head = node;
            tail = node;
            return;
        }
        tail->next = node;
        node->prev = tail;
        tail = tail->next;
    }

    void pop()
    {
        siz--;
        Node *dlt = head;
        head = head->next;
        if (head != NULL)
            head->prev = NULL;
        else
            tail = NULL;
        delete dlt;
    }
    int front()
    {
        return head->value;
    }
    int size()
    {
        return siz;
    }
    bool empty()
    {
        return siz == 0;
    }
};

int main()
{
    sahadStack st;
    SahadQueue qu;

    int m, n;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        qu.push(x);
    }
    if (n != m)
        cout << "NO";
    else
    {
        bool a = true;
        while (!st.empty())
        {
            if (st.top() != qu.front())
            {
                a = false;
                break;
            }
            st.pop();
            qu.pop();
        }
        if (a)
            cout << "YES";
        else
            cout << "NO";
    }

    return 0;
}