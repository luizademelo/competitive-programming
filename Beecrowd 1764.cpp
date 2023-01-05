// Beecrowd - 1764 - Itinerário do Papai Noel -- Accepted 
// Resolvido usando disjoint set union no algoritmo de Kruskal 
// Se resolver usando o Kruskal normal dá TLE 
/*
ID: ludemel2
TASK: test
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <bits/stdc++.h>

#define INF 1000000000
#define MOD 1000000007

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

typedef struct edge{
    int u,v, w; 
    bool operator<(edge const& other){
        return (w < other.w); 
    }
}; 

vi parent, ranking; 

void make_set(int v)
{
    parent[v]  = v; 
    ranking[v] = 0; 
}

int find_set(int v)
{
    if(v == parent[v])
        return v; 
    return parent[v] = find_set(parent[v]); 
}

void union_sets(int a, int b)
{
    a = find_set(a); 
    b = find_set(b); 
    if(a != b)
    {
        if(ranking[a] < ranking[b])
            swap(a,b); 
        parent[b] = a; 
        if(ranking[a] == ranking[b])
            ranking[a]++; 
    }
}


int m,n; 



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(cin >> n >> m,  n != 0)
    {
        int cost = 0; 
        vector<edge> edges; 
        for(int i = 0; i < m; i++)
        {
            edge e; 
            cin >> e.u >> e.v >> e.w; 
            edges.push_back(e); 
        }
        parent.resize(n); 
        ranking.resize(n); 
        for(int i = 0; i < n; i++)
            make_set(i); 

        sort(edges.begin(), edges.end()); 

        for(edge e : edges){
            if(find_set(e.u) != find_set(e.v))
            {
                cost += e.w; 
                union_sets(e.u, e.v); 
            }

        }
        cout  << cost << endl; 
    }

    return 0;
}
