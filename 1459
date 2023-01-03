// Beecrowd 1459 - Foco -- Accepted 
// só pensar naquele problema guloso de "scheduling" e fazer a lógica ao contrário
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

bool cmp(pair<ll,ll>  p1, pair<ll,ll> p2)
{
    // if(p1.first != p2.first)
    //     return p1.first < p2.first; 
    return p1.second > p2.second; 
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; 
    while(cin >> n)
    {
        vector<pair<ll,ll>> v(n); 
        for(int i = 0; i < n; i++)
            cin >> v[i].first >> v[i].second; 
        sort(v.begin(), v.end()); 

        ll ans = 1; 
        ll last = v[n-1].first; 
        for(ll i =n-2; i >= 0; i--)
        {
            if(v[i].second < last)
            {
                ans++; 
                last = v[i].first; 
            }
        }
        cout << ans << endl; 
    }

    return 0;
}
