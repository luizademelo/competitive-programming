// problem link: http://www.usaco.org/index.php?page=viewproblem2&cpid=963

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

    ifstream in("gymnastics.in"); 
    ofstream out("gymnastics.out"); 

    int k,n; 
    in >> k >> n; 
    int v[k][n]; 
    for(int i = 0; i < k; i++)
        for(int j = 0; j < n; j++)
            in >> v[i][j]; 
    
    int ans = 0; 
    for(int i = 1; i <= n; i++)
    {
        vector<bool> valid(n+1, true);
        for(int j = 0; j < k; j++)
        {
            for(int l = 0; l < n; l++)
            {
                if(v[j][l] == i) break;
                valid[v[j][l]] = false; 
            }
        }
        for(int j =1 ;  j <= n; j++)
            if(valid[j] == true and j != i)
                 ans++;
    }
    out << ans << endl; 

    return 0;
}
