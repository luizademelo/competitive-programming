#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007

using namespace std;

vector<bool> vis; 
vector<vector<pair<int,int>>> adj; 
ll cnt = 0; 

void dfs(int v){
    cnt++; 
    vis[v] = true;
    for(auto p : adj[v]){
        if(p.second == 0 and not vis[p.first]){
            dfs(p.first);
        }
    }
}


int main()
{

    ll n; cin >> n; 
    adj.resize(n+1); 
    for(int i = 0; i < n-1; i++){
        int a,b,c; 
        cin >> a >> b >> c;
        if(c == 1) continue; 
        adj[a].push_back({b,c}); 
        adj[b].push_back({a,c}); 
    }

    ll ans = n*(n-1)/2; 
    vis.resize(n+1);

    for(int i = 1; i <= n; i++){
        cnt = 0; 
        if(not vis[i] and adj[i].size() > 0){
            dfs(i); 
            ans -= (cnt*(cnt-1))/2; 
        }
    }
    cout << ans  << endl; 



    return 0;
}
