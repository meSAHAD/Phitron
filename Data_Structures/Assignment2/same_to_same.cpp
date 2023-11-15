#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int checkduplicate(Node *head1, Node *head2)
{
    int flag =1;
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->val != head2->val)
        {
            flag=0; 
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return flag;
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val1;
    int val2;
    int cnt1=0;
    int cnt2=0;

    while (true)
    { cnt1++;
        cin >> val1;
        if (val1 == -1)
        {
            break;
        }
        insert_tail(head1, tail1, val1);
    }
 
    while (true)
    {
        cnt2++;
        cin >> val2;
        if (val2 == -1)
        {
            break;
        }
        insert_tail(head2, tail2, val2);
    }
if (cnt1 != cnt2)    cout << "NO" << endl;
else {
    int flag = checkduplicate(head1, head2);

    if (flag)   cout << "YES" << endl;
    else        cout << "NO" << endl;  
}

return 0;
}
