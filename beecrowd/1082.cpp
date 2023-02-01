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

vector<bool> vis; 
vector<vector<int>> adj; 
vector<int> print; 

void dfs(int u)
{
    vis[u] = true; 
    print.push_back(u); 
    for(int v : adj[u])
        if(!vis[v])
            dfs(v); 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n; 
    for(int k = 1; k <= n; k++)
    {
        int v,e; cin >> v >> e; 
        adj.clear(); 
        vis.clear(); 
        adj.resize(26); 
        vis.resize(26, false); 
        for(int i = 0; i < e; i++)
        {
            char u,w; cin >> u >> w; 
            u -= 97; 
            w -= 97; 
            adj[u].push_back(w); 
            adj[w].push_back(u); 
        }
        int comp = 0; 
        cout << "Case #" << k << ":\n"; 

        for(int i = 0; i < v; i++)
        {
            if(!vis[i])
            {
                dfs(i); 
                sort(print.begin(), print.end()); 
                for(int j = 0; j < print.size(); j++)
                    cout << char(print[j]+97) << ","; 
                cout << endl; 
                comp++; 
            }
            print.clear(); 
        }
        cout << comp << " connected components\n\n"; 

    }

    return 0;
}
