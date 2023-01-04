// achar o numero de componentes conexas e ir multiplicando por 2, pq cada coluna tem 2 possibilidades de movimento
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

vector<vector<int>> adj;
vi vis;

void dfs(int v)
{
    vis[v] = true;
    for (int u : adj[v])
    {
        if (!vis[u])
            dfs(u);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[2][n];
        for (int i = 0; i < n; i++)
            cin >> arr[0][i];
        for (int i = 0; i < n; i++)
            cin >> arr[1][i];
        adj.clear(); 
        adj.resize(n + 1);
        vis.resize(n + 1, false);
        for (int i = 0; i < n; i++)
        {
            int v = arr[0][i];
            int u = arr[1][i];
            adj[v].push_back(u);
            adj[u].push_back(v);
        }
        ll ans = 1;
        for(int i = 0; i <= n; i++) vis[i] = false; 
        for (int i = 1; i <= n; i++)
        {
            if (!vis[i])
            {
                dfs(i);
                ans = (ans * 2) % MOD ;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
