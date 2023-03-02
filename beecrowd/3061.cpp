#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define endl '\n'

typedef vector<int> vi;

vector<bool> vis;
vector<vector<int>> adj;
vector<pair<int, int>> v;

int n, m;
queue<int> q;

void dfs()
{

    int i = q.front(); 
    q.pop(); 
    vis[i] = true;
    int x = v[i].first;
    int y = v[i].second;

    // esquerda
    if (y - 1 >= 0)
    {
        int id = adj[x][y - 1];
        if (id >= 0 && !vis[id])
            q.push(id); 
    }
    // abaixo
    if (x + 1 < n)
    {
        int id = adj[x + 1][y];
        if (id >= 0 && !vis[id])
            q.push(id); 
    }
    // direita
    if (y + 1 < m)
    {
        int id = adj[x][y + 1];
        if (id >= 0 && !vis[id])
            q.push(id); 
    }
    // acima
    if (x - 1 >= 0)
    {
        int id = adj[x - 1][y];
        if (id >= 0 && !vis[id])
            q.push(id); 
    }
}

int main()
{

    cin >> n >> m;
    int id = 0;
    adj.resize(n + 1, vi(m + 1));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                adj[i][j] = id;
                id++;
                v.push_back({i, j});
            }
            else
                adj[i][j] = -1;
        }
    }

    vis.resize(v.size(), false);

    int ans = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (!vis[i])
        {
            q.push(i); 
            while (!q.empty())
                dfs();
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
