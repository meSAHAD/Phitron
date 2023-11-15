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

void insert(Node *&head, Node *&tail, int x, int val)
{
    Node *node = new Node(val);
    if (head == NULL) {
        head = node;
        tail = node;
        cout << head->val << " " << tail->val << endl;
        return;
    }
    if (x == 0) {
        head->next = node;
        head = node;
    }
    else{
        tail->next = node;
        tail = node;
    }
    cout << head->val << " " << tail->val << endl;
}

int main(){
    Node *head = NULL;
    Node *tail = NULL;

    int t;
    cin >> t;
    while (t--){
        int x, val;
        cin >> x >> val;
        insert(head, tail, x, val);
    }
    return 0;
}