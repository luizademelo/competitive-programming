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

struct query{
    char player; 
    char dir; 
    int num; 
}; 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    int r = 0, h = 0, c = 0, p = 0; 


    vector<query> v(k); 

    for (int i = 0; i < k; i++)
    {
        query q; 
        char player;
        if(i%4 == 0) player = 'r'; 
        if(i%4 == 1) player = 'h'; 
        if(i%4 == 2) player = 'c'; 
        if(i%4 == 3) player = 'p'; 
        q.player = player; 
        cin >> q.dir >> q.num;
        v[i] = q ; 
    } 

    vector<bool> row(n, false), col(m, false); 

    vector<vector<char>> adj(n+1, vector<char>(m+1, 'a'));

    for(int i = k-1; i >= 0; i--)
    {
        query q = v[i]; 
        if(q.dir == 'L')
        {
            if(row[q.num-1] == true) continue; 

            for(int j = 0; j < m; j++)
            {
                if(adj[q.num-1][j] == 'a')
                    adj[q.num-1][j] = q.player; 
            }
            row[q.num-1] = true; 
        }else
        {
            if(col[q.num-1] == true) continue; 

            for(int j = 0; j < n; j++)
            {
                if(adj[j][q.num-1] == 'a')
                    adj[j][q.num-1] = q.player; 
            }
            col[q.num-1] = true; 
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j =0 ; j < m; j++)
        {
            if(adj[i][j] == 'r') r++; 
            if(adj[i][j] == 'h') h++; 
            if(adj[i][j] == 'c') c++; 
            if(adj[i][j] == 'p') p++; 
        }
    }
    
    cout << "R" << r << " " <<  "H" << h << " C" << c << " P" << p << endl;  

    return 0;
}
