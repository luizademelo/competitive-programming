// problem link: https://codeforces.com/gym/102951/problem/A
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

    int n ; cin >> n;
    vi x(n), y(n);  
    for(int i = 0 ; i < n; i++)
        cin >> x[i]; 
    for(int i= 0; i < n ; i++)
        cin >> y[i]; 

    int ans = 0; 
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i != j)
            {
                int dist = pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2); 
                ans = max(ans, dist); 
            }
        }
    }
    cout << ans << endl; 

    return 0;
}
