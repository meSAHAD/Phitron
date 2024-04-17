#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> l;
    int dup;
    while (true){
        cin >> dup;
        if (dup == -1)
            break;

        l.push_back(dup);
    }
    l.sort();
    l.unique();
    for (auto x : l) cout << x << " ";
}