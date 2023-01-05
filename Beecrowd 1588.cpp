// Beecrowd - 1588 - Ajude a Federação -- Accepted
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

typedef struct team
{
    string nome = "";
    int pts = 0;
    int vitorias = 0;
    int gols = 0;
    int pos; 
} team;

bool cmp(team t1, team t2)
{
    if (t1.pts != t2.pts)
        return t1.pts > t2.pts;
    else if (t1.vitorias != t2.vitorias)
        return t1.vitorias > t2.vitorias; 
    else if(t1.gols != t2.gols)
        return t1.gols > t2.gols; 
    else return t1.pos < t2.pos; 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<team> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].nome;
            v[i].pos = i; 
        }
        while (m--)
        {
            int x, y;
            cin >> x;
            string a, b;
            cin >> a;
            cin >> y >> b;
            if (x > y)
            {
                for (int i = 0; i < n; i++)
                {
                    if (v[i].nome == a)
                    {
                        v[i].vitorias += 1;
                        v[i].pts += 3;
                        v[i].gols += x;
                    }
                    if (v[i].nome == b)
                    {
                        v[i].gols += y;
                    }
                }
            }
            else if (x == y)
            {
                for (int i = 0; i < n; i++)
                {
                    if (v[i].nome == a)
                    {
                        v[i].pts += 1;
                        v[i].gols += x;
                    }
                    if (v[i].nome == b)
                    {
                        v[i].pts += 1;
                        v[i].gols += y;
                    }
                }
            }
            else if (x < y)
            {
                for (int i = 0; i < n; i++)
                {
                    if (v[i].nome == a)
                    {
                        v[i].gols += x;
                    }
                    if (v[i].nome == b)
                    {
                        v[i].vitorias += 1;
                        v[i].pts += 3;
                        v[i].gols += y;
                    }
                }
            }
        }
        sort(v.begin(), v.end(), cmp);
        for(int i = 0; i < n; i++)
            cout << v[i].nome << endl; 
    }

    return 0;
}
