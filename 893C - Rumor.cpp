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
int n,m; 
vector<bool> vis; 
 
ll minimo = INF; 
vi gold; 
 
void dfs(int v)
{
    vis[v] = true; 
    if(gold[v] < minimo)
        minimo = gold[v]; 
    for(int u : adj[v])
    {
        if(!vis[u])
            dfs(u); 
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    cin >> n >> m; 
    vis.resize(n+1, false); 
    
    gold.resize(n+1); 
    for(int i = 1; i <= n; i++)
        cin >> gold[i]; 
 
    adj.resize(n+1); 
    for(int i= 0; i < m; i++)
    {
        int v,u; cin >> u >> v; 
        adj[v].push_back(u); 
        adj[u].push_back(v); 
    } 
    ll ans = 0; 
    for(int i = 1; i <= n; i++)
    {
        if(!vis[i])
        {
            dfs(i); 
            ans += minimo; 
            minimo = INF;
 
        }
    }
 
    cout << ans << endl; 
 
 
 
    return 0;
}
