// tem que pensar no problema da mochila (knapsack problem) 
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

    int t; cin >> t; 
    while(t--)
    {
        int n; cin >> n; 
        vi wt(n+1), val(n+1); 
        for(int i = 0; i < n; i++) 
            cin >> val[i] >> wt[i]; 

        int k,r; cin >> k >> r; 

        vector<vector<int>> dp(n+1, vector<int>(k+1)); 

        for(int i = 0; i <= n; i++)
        {
            for(int w = 0; w <= k; w++)
            {
                if(i == 0 || w == 0)
                    dp[i][w] = 0;
                else if(wt[i-1] <= w)
                    dp[i][w] = max(val[i-1] + dp[i-1][w-wt[i-1]], dp[i-1][w]); 
                else dp[i][w] = dp[i-1][w]; 
            }
        }
     
        // for(int i  =0; i <= n; i++)
        // {
        //     for(int j = 0; j <= k; j++)
        //         cout << dp[i][j] << " "; 
        //     cout << endl; 
        // }
        if(dp[n][k] >= r) 
            cout << "Missao completada com sucesso\n"; 
        else cout << "Falha na missao\n"; 
    }    

    return 0;
}
