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

bool check(ll n)
{
    if(n == 1) return true; 
    
    for(int i = 2; i <= sqrt(n); i++)
        if(n%i == 0) return false; 
    return true; 
}

int main()
{
    _

    ll n; cin >> n; 

    if(check(n)) cout << "N\n"; 
    else cout << "S\n"; 

    return 0;
}
