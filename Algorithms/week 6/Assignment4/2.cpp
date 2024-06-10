#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1000000;
vector<int> dp(MAX_N, -1);

bool knapsack(int n, int p)
{
    if (p == n)
        return true;
    if (p > n)
        return false;
    if (dp[p] != -1)
        return dp[p];

    bool op1 = knapsack(n, 2 * p);
    bool op2 = knapsack(n, p + 3);
    return dp[p] = op1 || op2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
            cout << "YES" << endl;
        else
        {
            fill(dp.begin(), dp.end(), -1); 

            if (knapsack(n, 1))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
