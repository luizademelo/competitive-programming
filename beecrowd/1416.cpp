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
#define MAXN 20

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

typedef struct team
{
    int p = 0;    // problemas resolvidos
    int tp = 0;   // tempo de penalidade do problema
    int tent = 0; // numero de tentativas
} team;

bool cmp(team &t1, team &t2)
{
    if (t1.p > t2.p)
        return true;
    if (t2.p > t1.p)
        return false;
    if (t1.tp + t1.tent * 20 < t2.tp + t2.tent * 20)
        return true;
    else
        return false;
}

int main()
{
    //_

    int t, p;
    int count = 1; 
    while (scanf("%d %d", &t, &p), t != 0)
    {
        vector<team> v(t);
        for (int i = 0; i < t; i++)
        {

            for (int j = 0; j < p; j++)
            {
                int a, s;
                string str;
                cin >> str;
                stringstream ss(str);
                getline(ss, str, '/');
                a = stoi(str);
                getline(ss, str, '/');
                if (str != "-")
                    s = stoi(str);
                else
                    s = -1;
                // scanf("%d/%d", &a, &s);
                if (s <= 300 and s >= 0) // verifica se não é o caractere '-'
                {
                    v[i].tp += s;
                    v[i].tent += (a - 1);
                    v[i].p += 1;
                }
                // else
                // {
                //     v[i].tent += a;
                // }
                // cout << a << " " << s << endl;
            }
            count++; 
        }
        sort(v.begin(), v.end(), cmp);
        int mx = INF, mn = 1;
        for (int i = 1; i < t; i++)
        {
            // cout << v[i-1].tp << " " << v[i-1].tent << " " << v[i-1].p << endl ;
            if (v[i - 1].p == 0)
                continue;
            if (v[i - 1].p == v[i].p and v[i - 1].tent * 20 + v[i - 1].tp == v[i].tent * 20 + v[i].tp)
            {
                mx = mn = 20;
                break;
            }
            else if (v[i - 1].p == v[i].p)
            {
                for (int ep = 1; ep <= 3000; ep++)
                {
                    if ((v[i - 1].tp + v[i - 1].tent * ep) < (v[i].tp + v[i].tent * ep))
                    {
                        mn = max(ep, mn);
                        break;
                    }
                }
                for (int ep = 3000; ep >= 0; ep--)
                {
                    if ((v[i - 1].tp + v[i - 1].tent * ep) < (v[i].tp + v[i].tent * ep))
                    {
                        mx = min(ep, mx);
                        break;
                    }
                }
                // if (v[i - 1].tent < v[i].tent)
                //     continue;
            }
        }
        if (mx == 3000 or mx == INF)
            cout << mn << " *\n";
        else
            cout << mn << " " << mx << endl;
    }

    return 0;
}
