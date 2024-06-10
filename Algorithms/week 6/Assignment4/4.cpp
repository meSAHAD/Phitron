#include <bits/stdc++.h>
using namespace std;
int dp[1000000] = {-1};

bool knapsack(int n, int p)
{
    // base case
    if (p == n)
        return true;
    if (p > n)
        return false;
    if (dp[p] != -1)
        return dp[p];

    if (p <= n)
    {
        bool op1 = knapsack(n, 2 * p);
        bool op2 = knapsack(n, p + 3);
        return dp[p] = op1 || op2;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // cout << knapsack(n) << endl;
        if (n == 1)
            cout << "YES" << endl;
        else
        {
            for (int i = 0; i <= n; i++)
            {
                dp[i] = -1;
            }

            if (knapsack(n, 1))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;

            // for(int i=0; i<=20; i++) cout <<dp[i] << " ";
        }
    }
    return 0;
}