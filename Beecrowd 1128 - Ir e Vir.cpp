/*
ID: ludemel2
TASK: test
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <bits/stdc++.h>

#define INF 10000000000
#define MOD 1000000007

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

bool vis[2002]; 
vector<vector<int>> adj(2002);

void dfs(int v)
{
    vis[v] = true;
    for (int u : adj[v])
        if (!vis[u])
            dfs(u);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    while (n != 0)
    {
        int v, w, p;

        for (int i = 0; i < m; i++)
        {
            cin >> v >> w >> p;
            adj[v].push_back(w);
            if (p == 2)
                adj[w].push_back(v);
        }

        bool ans = true;

        for (int i = 1; i <= n; i++)
        {
            for (int i = 0; i <= 2000; i++)
                vis[i] = false;
            dfs(i);
            for(int i = 1; i <= n; i++)
            {
                if(!vis[i])
                {
                    ans = false;
                    break; 
                }
            }
        }

        if (ans)
            cout << 1 << endl;
        else
            cout << 0 << endl;

        cin >> n >> m;
        for (int i = 0; i < 2002; i++)
            adj[i].clear();
    }

    return 0;
}
