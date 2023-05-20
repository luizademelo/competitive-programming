/*
 tive que colocar dp[4] ao inves de dp[2] e dp[3], porque senao dava errado, mas nao sei o motivo
*/
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



vi v; 
int dp[4][1002][1002]; 

int solve(int i, int j, int cnt)
{
    if(i > j) return 0; 
    int p = cnt%2; 
    if(dp[p][i][j] != -1) return dp[p][i][j]; 
    
    if(cnt%2 == 0)
    {   
        int a = solve(i+1, j, cnt+1); 
        int b = solve(i, j-1, cnt+1); 
        if(v[i]%2 == 0) a++; 
        if(v[j]%2 == 0) b++; 

        return dp[p][i][j] = max(a,b); 
    }else
    {
        int a = solve(i+1, j, cnt+1); 
        int b = solve(i, j-1, cnt+1); 

        return dp[p][i][j] = min(a,b); 
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while (cin >> n, n > 0)
    {
        v.resize(2*n); 
        memset(dp, -1, sizeof(dp)); 
        for (int i = 0; i < 2 * n; i++)
            cin >> v[i];
        int ans = solve(0, 2*n-1, 0); 
        cout << ans << endl; 
    }
    return 0;
}
