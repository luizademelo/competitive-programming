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

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int v1,v2,t,d; 
    cin >> v1 >> v2 >> t >> d; 

    vi v(t); 
    v[0] = v1; 
    for(int i = 1; i < t; i++)
        v[i] = v[i-1] + d; 
    v[t-1] = v2; 

    for(int i = t-1; i >= 0; i--)
    {
        if(v[i-1] - v[i] > d)
        {
            v[i-1] = v[i] + d; 
        }
    }
    int ans = 0; 
    for(int i = 0; i < t; i++) ans += v[i]; 

    cout << ans << endl; 

    return 0;
}
