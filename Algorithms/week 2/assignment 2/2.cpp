#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

vector<int> adj[N];
int visited[N];
int level[N];

bool found = false;

void bfs(int node, int x)
{
    for(int i = 0; i < N; i++)
    {
        level[i] = -1;
        visited[i] = 0;
    }

    queue<int> q;
    q.push(node);
    visited[node] = 1;
    level[node] = 0;

    if(level[node] == x)
    {
        found = true;
    }

    while(!q.empty())
    {
        int cur = q.front();
        
        q.pop();

        for(auto v : adj[cur])
        {
            if(visited[v] == 0)
            {
                if(level[cur] + 1 == x)
                {
                    found = true;
                }
                q.push(v);
                level[v] = level[cur] + 1;
                visited[v] = 1;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int m;
    cin >> m;

    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int x;
    cin >> x;

    bfs(0, x);

    if(found)
    {
        for(int i = 0; i < N; i++)
        {
            if(level[i] == x) cout << i << " ";
        }
    }
    else
    {
        cout << -1;
    }
    
}