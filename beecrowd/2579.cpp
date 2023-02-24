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

    int l, c, x, y;
    cin >> l >> c >> x >> y;

    if (c % 2 == 0)
    {
        if (y % 2 == 0)
            cout << "Direita\n";
        else
            cout << "Esquerda\n";
    }
    else
    {
        if (x % 2 == 0)
        {
            if (y % 2 == 0)
                cout << "Direita\n";
            else
                cout << "Esquerda\n";
        }
        else
        {
            if (y % 2 == 0)
                cout << "Esquerda\n";
            else
                cout << "Direita\n";
        }
    }

    return 0;
}
