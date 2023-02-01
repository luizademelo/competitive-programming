// Dijkstra basicao 
#include <bits/stdc++.h>
#include <stdlib.h>

#define INF 10000000
#define MOD 1000000007
#define endl '\n'

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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m; 
    vector<pair<int,int>> adj[n+1];
    
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }
    int s;
    cin >> s;
    
    vi d(n+1, INF); 
    bool u[n+1]; 
    
    for(int i =0; i <= n; i++) u[i] = false; 
    
    d[s] = 0; 

    for(int i = 1; i <= n; i++)
    {
        int v = -1; 
        for(int j = 1; j <= n; j++)
        {
            if(!u[j] && (v==-1 || d[j] < d[v]))
                v = j; 
        }
        u[v] = true; 
        for(auto edge : adj[v])
        {
            int to = edge.first; 
            int len = edge.second; 
            if(d[v] + len < d[to])
            {
                d[to] = d[v] + len; 
            }
        }
    }


    int minimo = 10000000;
    int maximo = -1;
    for (int i = 1; i <= n; i++)
    {
        if (d[i] < minimo && d[i] > 0)
            minimo = d[i];
        if (d[i] > maximo && d[i] > 0)
            maximo = d[i];
    }

    cout << maximo - minimo << endl;

    return 0;
}
