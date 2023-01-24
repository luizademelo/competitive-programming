// ficou uma bagunça mas deu certo
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

ll fact(ll n)
{
    if (n == 1)
        return 1;

    ll ans = 1;
    while (n > 1)
    {
        ans *= n;
        ans = ans % MOD;
        n--;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, x;
    vii shift;
    cin >> n >> m >> x;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == 'S')
            {
                shift.push_back(make_pair(i, j));
            }
        }
    }
    int q;
    cin >> q;
    int ans = 0;
    set<char> s;
    set<char> no;
    for (int i = 0; i < q; i++)
    {
        char c;
        cin >> c;
        if (s.count(c))
        {
            ans++;
            continue;
        }
        if (no.count(c))
            continue;
        vii key;
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < m; k++)
            {
                if (v[j][k] == tolower(c))
                {
                    key.push_back(make_pair(j, k));
                }
            }
        }
        if (key.size() == 0)
        {
            cout << -1 << endl;
            return 0;
        }
        if (c >= 65 && c < 91)
        {

            if (shift.size() == 0)
            {
                cout << -1 << endl;
                return 0;
            }
            double dist = INF;
            for (int k = 0; k < key.size(); k++)
            {
                int x1 = key[k].first;
                int y1 = key[k].second;
                for (int i = 0; i < shift.size(); i++)
                    dist = min(dist, sqrt(pow(shift[i].first - x1, 2) + pow(shift[i].second - y1, 2)));
            }

            if ((dist) > x)
            {
                ans++;
                s.insert(c);
            }
            else
                no.insert(c);
        }
    }

    cout << ans << endl;

    return 0;
}
