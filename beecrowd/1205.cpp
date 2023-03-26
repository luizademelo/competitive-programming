// nao precisa de usar vector<vector<pair<int,int>>> pro grafico, só vector<vector<int>> já basta
// mas na minha ideia original precisava, aí resolvi não tirar 
#include <bits/stdc++.h>
#include <stdlib.h>

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fLL
#define pb push_back
#define mp make_pair
#define MOD 1000000007
#define MAXN 1005

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

int n, m, b;
vector<vector<pair<int, int>>> adj; // first = id do vertice, second = qtd de soldados no vertice
vector<int> atiradores;
int s, t;
vector<int> d;
vector<bool> vis;

int main()
{
    _

        double k;
    while (cin >> n >> m >> b >> k)
    {
        adj.clear();
        adj.resize(MAXN);
        atiradores.clear();
        atiradores.resize(MAXN, 0);
        d.clear();
        d.resize(MAXN, INF);
        vis.clear();
        vis.resize(MAXN, false);
        for (int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].pb(mp(v, 0));
            adj[v].pb(mp(u, 0));
        }
        int a;
        cin >> a;
        for (int i = 0; i < a; i++)
        {
            int x;
            cin >> x;
            atiradores[x]++;
        }


        cin >> s >> t;
        d[s] = 0;
        for (int i = 1; i <= n; i++)
        {
            int v = -1;
            for (int j = 1; j <= n; j++)
                if (!vis[j] and (v == -1 or d[j] < d[v]))
                    v = j;
            if (d[v] == INF)
                break;
            vis[v] = true;
            for (auto edge : adj[v])
            {
                int to = edge.first;
                int len = atiradores[edge.first]; 
                if (d[v] + len < d[to])
                {
                    d[to] = d[v] + len;
                }
            }
        }
        double ans = pow(k, atiradores[s] + d[t]);
       
        if (b < d[t])
            ans = 0;
        cout << fixed << setprecision(3) << ans << endl;
    }

    return 0;
}
