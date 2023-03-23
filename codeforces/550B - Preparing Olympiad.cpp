#include <bits/stdc++.h>
#include <stdlib.h>

#define INF 0x3f3f3f3f
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,l,r,x; cin >> n >> l >> r >> x; 

    vector<ll> v(n); 
    for(int i = 0; i < n; i++) cin >> v[i]; 

    ll sol = 0; 
    for(ll i = 0; i < pow(2, n); i++)
    {
        ll mx = -INF; 
        ll mn = INF; 
        ll dif = 0; 
        for(int j = 0; j < n; j++)
        {
            if(i & (1 << j))
            {
                if(v[j] > mx) mx = v[j]; 
                if(v[j] < mn) mn = v[j]; 
                dif += v[j]; 
            }
        }
        if((mx-mn) >= x and dif >= l and dif <= r) sol++;
    }

    cout << sol << endl; 


    return 0;
}
