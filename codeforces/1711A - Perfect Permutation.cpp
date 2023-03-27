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


void solve()
{
    int n; cin >> n; 
    vi v; 
    v.push_back(n); 
    for(int i = 1; i <= n-1; i++)
        v.push_back(i); 
    for(int i = 0; i < n; i++)
        cout << v[i] << " "; 
    cout << endl; 
}

int main()
{
    _

    int t; cin >> t; 
    while(t--)
    {
        solve(); 
    }

    return 0;
}
