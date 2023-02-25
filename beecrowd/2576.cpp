// Explicação
/**
 
 acho que o codigo ficou meio confuso, mas basicamente criei um grafo nao direcionado, utilizando o struct edge. Esse struct tem o atributo "u", que representa a ponta da aresta
 e tem o atributo "to" que representa o sentido original da aresta. 
 Se temos uma aresta de a para b, então criamos um edge de a para b e de b para a. Porém, o atributo "to" sempre vai ta apontando pra b. 
 
 pra calcular os custos dos caminhos utilizei o dijkstra. Se precisamos percorrer um caminho que precise inverter uma seta, então o peso desse caminho sera 1. Se nao
 precisa inverter seta, então o custo do caminho será 0. 
 
 
**/

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

struct edge {
    int u;  
    int to; // determina o sentido original da seta 
}; 

vector<vector<edge>> adj; 
vi dist; 
vi p; 
int n,m; // vertices, arestas 
int source, dest; // source, destination

void dijkstra()
{    
    dist.assign(n+1, INF); 
    p.assign(n+1, -1); 
    vector<bool> u(n+1, false); 

    dist[source] = 0; 

    for(int i = 1; i <= n; i++)
    {
        int vertice = -1; 
        for(int j = 1; j <= n; j++)
        {
            if(!u[j] && (vertice == -1 || dist[j] < dist[vertice]))
                vertice = j; 
        }

        if(dist[vertice] == INF) break; 

        u[vertice] = true; 
        
        for(auto edge : adj[vertice])
        {
            int to = edge.u; 
            int len = (edge.to == to)? 0 : 1; // se precisar inverter a seta então o peso será 1. senão será 0; 

            if(dist[vertice] + len < dist[to])
            {
                dist[to] = dist[vertice] + len; 
                p[to] = vertice; 
            }
        }

    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m >> source >> dest; 
    adj = vector<vector<edge>>(n+1); 
    dist.resize(n+1); 
    p.resize(n+1); 

    for(int i = 0; i < m; i++)
    {
        edge e1; 
        int c1,c2; cin >> c1 >> c2; 
        e1.u = c2; 
        e1.to = c2;
        adj[c1].push_back(e1); 
        e1.u = c1; 
        adj[c2].push_back(e1); 
    }

    dijkstra(); 
    int a = dist[dest]; 

    swap(source,dest); 
    dijkstra(); 
    int b = dist[dest]; 

    if(a < b)
    {
        cout << "Bibi: " << a << endl; 
    }else if(b < a)
    {
        cout << "Bibika: " << b << endl; 
    }else 
    { 
        cout << "Bibibibika\n"; 
    }

    return 0;
}
