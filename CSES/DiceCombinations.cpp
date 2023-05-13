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
#define MAXN 1000

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

vector<ll> dp(1000005,-1); 

ll solve(ll dice)
{
    if(dice < 1) return 0; 
    if(dp[dice] != -1)
        return dp[dice]; 

    ll ways = dice >= 1 && dice <= 6 ? 1 : 0; 
    
    for(ll i =1; i <= 6 and i < dice; i++)
        ways += solve(dice-i) % MOD; 
    
    dp[dice] = ways % MOD;
    return dp[dice];
}


   
int main()
{
    _
    
    ll n; cin >> n; 
    dp[0] = 0; 
    dp[1] = 1; 
    ll ans = solve(n) % MOD; 
    cout << ans << endl;

    return 0;
}
