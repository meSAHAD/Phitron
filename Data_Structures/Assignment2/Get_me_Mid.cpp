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

void insert_tail(Node *&head, Node *&tail, int val)
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

void sort(Node *head)
{
    Node *tmp = head;
    for (auto i = tmp; i != NULL; i = i->next)
    {
        for (auto j = i->next; j != NULL; j = j->next)
        {
            if (i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
    }
}

void find_middle(Node *head, int cnt)
{
    int list_size = cnt-1;
    Node *tmp = head;

    if (list_size % 2 == 1)
    {
        int middle = (list_size / 2) + 1;

        for (int i = 1; i < middle; i++)
        {
            tmp = tmp->next;
        }

        cout << tmp->val<<endl;
    }

    else
    {
        int m1 = (list_size / 2);
        int m2 = (list_size / 2) + 1;

        for (int i = 1; i < m2; i++)
        {
            tmp = tmp->next;
            if (m1 == 1)
            {
                cout << head->val << " ";
            }
            else if (i == m1 - 1)
            {
                cout << tmp->val << " ";
            }
        }
        cout << tmp->val<<endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int a;
    int cnt=0;
    while (1)
    {
        cnt++;
        cin >> a;
        if (a == -1)
            break;

        insert_tail(head, tail, a);
    }

    sort(head);

    find_middle(head, cnt);
}