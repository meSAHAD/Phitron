#include <bits/stdc++.h>
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
    Node a(10);
    Node b(20);

    a.next=&b;

    cout << a.value << endl;       // print a
    cout << a.next->value << endl; // print b
    return 0;
}