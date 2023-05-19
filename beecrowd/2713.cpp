#include <bits/stdc++.h>

#define INF 10000000
#define MOD 1000000007
#define endl '\n'

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int n,k,v;
vi x(1003),d(1003); 
double memo[1003][103]; 

double dp(int monstro, int mana)
{
    if(monstro < 0) return 0; 
    if(mana < 0 ) return INF; 
    if(memo[monstro][mana] != -1) 
        return memo[monstro][mana];

    if(mana == 0)
        return memo[monstro][mana] = dp(monstro-1, mana) + ((double) x[monstro] / v); 

    return memo[monstro][mana] = min(
            dp(monstro-1, mana) + ((double) x[monstro] / v),
            dp(monstro-1, mana-1) +  (double) x[monstro]/ (v + d[monstro])
    ); 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	while(cin >> n >> k >> v)
	{
		for(int i = 0; i < n;i++)
			cin >> x[i] >> d[i];
        
        for(int i = 0; i <= n; i++)
            for(int j = 0; j <= k; j++)
                memo[i][j] = -1; 

        double ans = dp(n-1, k); 
        cout << fixed << setprecision(4) << ans << endl; 
	}
   

    return 0;
}
