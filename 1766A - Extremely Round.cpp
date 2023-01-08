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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<ll> v;

    for(ll i = 1; i <= 999999; i *= 10)
    {
        for(ll j = i; j < i * 10; j+= (1*i))
        {
            v.push_back(j);
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ans = 0; 
        for(int i =0; i < v.size(); i++)
        {
            if(v[i] > n)
                break; 
            ans++; 
        }        
        
        cout << ans << endl;
    }

    return 0;
}
