#include <bits/stdc++.h>
#include <stdlib.h>

#define INF 10000000
#define MOD 1000000007
#define endl '\n'

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,m,n; cin >> t >> m >> n; 
    vector<vector<int>> dp(t+2, vector<int>(n+2)); 
    for(int i = m; i <= n; i++)
        dp[1][i] = 1; 
    
    for(int i = 2; i <= t; i++){
        for(int j = m; j <= n; j++){
            dp[i][j] = (dp[i-1][j-1]%MOD + dp[i-1][j+1]%MOD)%MOD; 
        }
    }
    ll ans = 0; 
    for(int i = m; i <= n; i++){
        ans += dp[t][i] % MOD;
        ans = ans % MOD; 
    }
    cout << ans << endl; 

    return 0;
}
