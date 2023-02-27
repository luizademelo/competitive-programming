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

    int t;
    cin >> t;
    while (t--)
    {
        int n1, d1, n2, d2;
        char op1, op2, op3;
        cin >> n1 >> op1 >> d1 >> op2 >> n2 >> op3 >> d2;

        int n, d;

        if (op2 == '+')
        {
            n = (n1 * d2 + n2 * d1);
            d = (d1 * d2);
        }
        else if (op2 == '-')
        {
            n = (n1 * d2 - n2 * d1);
            d = (d1 * d2);
        }
        else if (op2 == '*')
        {
            n = (n1 * n2);
            d = (d1 * d2);
        }
        else
        {
            n = (n1 * d2);
            d = (d1 * n2);
        }
        int mdc = gcd(n, d);

        cout << n << "/" << d << " = "; 
        n = n/mdc; 
        d = d/mdc; 
        if(d < 0)
        {
           cout << -n << "/" << abs(d) << endl;
        }else
        {
            cout << n << "/" << d << endl;
        }
    }

    return 0;
}
