// na função backtrack tive que passar o vetor por referência, senão dava TLE
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

int n, m;
int sol = -1;

void backtrack(vector<vector<int>> &v, int count, int i, int j)
{

    // diagonal direita pra frente
    if (i + 2 < n and j + 2 < m and v[i + 1][j + 1] == 2 and v[i + 2][j + 2] == 0)
    {
        v[i][j] = 0;
        v[i + 1][j + 1] = 0;
        v[i + 2][j + 2] = 1;
        backtrack(v, count + 1, i + 2, j + 2);
        v[i][j] = 1;
        v[i + 1][j + 1] = 2;
        v[i + 2][j + 2] = 0;
    }

    // diagonal esquerda pra frente
    if (i + 2 < n and j - 2 >= 0 and v[i + 1][j - 1] == 2 and v[i + 2][j - 2] == 0)
    {
        v[i][j] = 0;
        v[i + 1][j - 1] = 0;
        v[i + 2][j - 2] = 1;
        backtrack(v, count + 1, i + 2, j - 2);
        v[i][j] = 1;
        v[i + 1][j - 1] = 2;
        v[i + 2][j - 2] = 0;
    }

    // diagonal direita pra trás
    if (i - 2 >= 0 and j - 2 >= 0 and v[i - 2][j - 2] == 0 and v[i - 1][j - 1] == 2)
    {
        v[i][j] = 0;
        v[i - 1][j - 1] = 0;
        v[i - 2][j - 2] = 1;
        backtrack(v, count + 1, i - 2, j - 2);
        v[i][j] = 1;
        v[i - 1][j - 1] = 2;
        v[i - 2][j - 2] = 0;
    }

    // diagonal esquerda pra trás
    if (j + 2 < m and i - 2 >= 0 and v[i - 1][j + 1] == 2 and v[i - 2][j + 2] == 0)
    {
        v[i][j] = 0;
        v[i - 1][j + 1] = 0;
        v[i - 2][j + 2] = 1;
        backtrack(v, count + 1, i - 2, j + 2);
        v[i][j] = 1;
        v[i - 1][j + 1] = 2;
        v[i - 2][j + 2] = 0;
    }

    sol = max(sol, count);
}

int main()
{
    _

    while (cin >> n >> m, n != 0 and m != 0)
    {
        vector<vector<int>> v(n, vector<int>(m));
        vector<pair<int, int>> ones;
        int x = 0, y = 0;
        for (int i = 0; i < ceil(n * m / 2.0); i++)
        {
            int c;
            cin >> c;
            v[x][y] = c;
            if (c == 1)
                ones.push_back({x, y});
            y += 2;
            if (y >= m)
            {
                if (x % 2 == 0)
                    y = 1;
                else
                    y = 0;
                x++;
            }
        }

        // for(int i  =0 ; i <n ;i++)
        // {
        //     for(int j = 0; j < m; j++)
        //         cout << v[i][j];
        //     cout << endl;
        // }

        sol = 0;
        for (auto p : ones)
            backtrack(v, 0, p.first, p.second);
        cout << sol << endl;
    }

    return 0;
}
