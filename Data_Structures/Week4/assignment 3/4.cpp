#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin >> t;
  while (t--){
    string s;
    cin >> s;

    stack<char> st;

    for (int i = 0; i < s.length(); ++i){
      char c = s[i];
      if (c == 'A'){
        if (!st.empty() && st.top() == 'B') st.pop();
        else  st.push(c);        
      }
      else if (c == 'B'){
        if (!st.empty() && st.top() == 'A')  st.pop();
        else  st.push(c);
        
      }
    }

    if (st.empty())  cout << "YES" << endl;
    else  cout << "NO" << endl;
  }
  return 0;
}
