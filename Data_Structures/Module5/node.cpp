#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

int main()
{
    Node a, b;
    a.value = 10;
    b.value = 20;

    a.next = &b;
    b.next = NULL;

    cout << a.value << endl;       // print a
    cout << a.next->value << endl; // print b
    return 0;
}