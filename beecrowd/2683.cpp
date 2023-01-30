// tem que fazer a arvore geradora minima e a arvore geradora maxima
#include <bits/stdc++.h>
#include <stdlib.h>

#define INF 10000000000
#define MOD 1000000007
#define endl '\n'

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

struct edge
{
    int u, v, w;
    bool operator<(edge other)
    {
        return w < other.w;
    }
};

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

    int n;
    cin >> n;

    vector<edge> adj;
    for (int i = 0; i < n; i++)
    {
        edge e;
        cin >> e.u >> e.v >> e.w;
        adj.push_back(e);
    }

    vi tree_id(n + 1);
    for (int i = 1; i <= n; i++)
        tree_id[i] = i;
    int max_cost = 0;
    int min_cost = 0;

    sort(adj.begin(), adj.end());

    for (edge e : adj)
    {
        if (tree_id[e.u] != tree_id[e.v])
        {
            min_cost += e.w;
            int old_id = tree_id[e.u], new_id = tree_id[e.v];
            for (int i = 1; i <= n; i++)
                if (tree_id[i] == old_id)
                    tree_id[i] = new_id;
        }
    }
    for (int i = 1; i <= n; i++)
        tree_id[i] = i;

    for(int i = n; i >= 1; i--)
    {
        edge e = adj[i]; 
        if(tree_id[e.u] != tree_id[e.v])
        {
            max_cost += e.w; 
            int old_id = tree_id[e.u], new_id = tree_id[e.v]; 
            for(int j = 1; j <= n; j++)
                if(tree_id[j] == old_id)
                    tree_id[j] = new_id; 
        }
    }

    cout << max_cost << endl; 
    cout << min_cost << endl; 


    return 0;
}
