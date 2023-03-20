#include <bits/stdc++.h>
#include <stdlib.h>

#define INF 10000000000
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

    int n;
    cin >> n;
    vector<ll> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    ll max_sum = -INF;
    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + v[i];
        if (max_sum < sum)
            max_sum = sum;
        if (sum < 0)
            sum = 0;
    }
    cout << max_sum << endl;

    return 0;
}
