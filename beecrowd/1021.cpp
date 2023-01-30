/*
ID: ludemel2
TASK: test
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
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

    double n;
    cin >> n;

    cout << "NOTAS:\n";
    cout << floor(n / 100) << " nota(s) de R$ 100.00\n";
    n -= floor(n / 100) * 100;
    cout << floor(n / 50) << " nota(s) de R$ 50.00\n";
    n -= floor(n / 50) * 50;
    cout << floor(n / 20) << " nota(s) de R$ 20.00\n";
    n -= floor(n / 20) * 20;
    cout << floor(n / 10) << " nota(s) de R$ 10.00\n";
    n -= floor(n / 10) * 10;
    cout << floor(n / 5) << " nota(s) de R$ 5.00\n";
    n -= floor(n / 5) * 5;
    cout << floor(n / 2) << " nota(s) de R$ 2.00\n";
    n -= floor(n / 2) * 2;

    cout << "MOEDAS:\n";
    n *= 100;
    cout << floor(n / 100) << " moeda(s) de R$ 1.00\n";
    n -= floor(n / 100) * 100;
    cout << floor(n / 50) << " moeda(s) de R$ 0.50\n";
    n -= floor(n / 50) * 50;
    cout << floor(n / 25) << " moeda(s) de R$ 0.25\n";
    n -= floor(n / 25) * 25;
    cout << floor(n / 10) << " moeda(s) de R$ 0.10\n";
    n -= floor(n / 10) * 10;
    cout << floor(n / 5) << " moeda(s) de R$ 0.05\n";
    n -= floor(n / 5 ) * 5;
    cout << floor(n) << " moeda(s) de R$ 0.01\n";

    return 0;
}
