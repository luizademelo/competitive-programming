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
#define f first
#define s second
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



int main()
{
    _
    
    int c = 50; 
    int t; cin >> t; 
    while(t--)
    {
        int pac; cin >> pac; 
        vii v(pac+1); 
        for(int i = 1; i <= pac; i++) 
            cin >> v[i].f >> v[i].s; 

        vector<vector<int>> m(pac+1, vector<int>(c+1));
        vector<bool> active(pac+1, false); 
        for(int i = 0; i <= pac; i++)
        {
            for(int j = 0; j <= c; j++)
            {
                if(i == 0 || j == 0) 
                {
                    m[i][j] = 0; 
                }
                else
                {
                    m[i][j] = m[i-1][j]; 
                    if(v[i].s <= j)
                    {
                        if(m[i-1][j-v[i].s] + v[i].f >= m[i][j]) 
                            m[i][j] = m[i-1][j-v[i].s] + v[i].f; 
                    }
            
                }
            }
        } 

        int peso = 0, uso = 0; 
        int i = pac, j = c; 
        // traçando os pacotes que foram incluidos
        while(i > 0 and j > 0)
        {
            if(m[i-1][j] == m[i][j]) // nao incluiu o i-esimo elemento
            {
                i--; 
                continue; 
            }
            peso += v[i].s; 
            uso++; 
            j -= v[i].s; 
            i--; 
        }

        cout << m[pac][c] << " brinquedos\n";
        cout << "Peso: " << peso << " kg\n"; 
        cout << "sobra(m) " << pac - uso << " pacote(s)\n\n"; 
    }

    return 0;
}
