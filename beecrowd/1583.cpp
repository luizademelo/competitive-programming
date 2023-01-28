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

int n, m;
char mapa[100][100];

void contaminate(int i, int j)
{
    // acima
    for (int k = i - 1; k >= 0 && mapa[k][j] != 'X'; k--)
    {
        if (mapa[k][j] == 'A')
        {
            mapa[k][j] = 'T';
            contaminate(k, j);
        }
    }
    // abaixo
    for (int k = i + 1; k < n && mapa[k][j] != 'X'; k++)
    {
        if (mapa[k][j] == 'A')
        {
            mapa[k][j] = 'T';
            contaminate(k, j);
        }
    }
    // esquerda
    for (int k = j - 1; k >= 0 && mapa[i][k] != 'X'; k--)
    {
        if (mapa[i][k] == 'A')
        {
            mapa[i][k] = 'T';
            contaminate(i, k);
        }
    }
    // direita
    for (int k = j + 1; k < m && mapa[i][k] != 'X'; k++)
    {
        if (mapa[i][k] == 'A')
        {
            mapa[i][k] = 'T';
            contaminate(i, k);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    while (cin >> n >> m, n != 0)
    {
        vii v;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mapa[i][j];
                if (mapa[i][j] == 'T')
                    v.push_back(make_pair(i, j));
            }
        }

        for (int i = 0; i < v.size(); i++)
            contaminate(v[i].first, v[i].second);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                cout << mapa[i][j];
            cout << '\n';
        }
        cout << '\n';
    }

    return 0;
}
