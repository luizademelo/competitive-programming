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

    int a, b;
    char op;
    cin >> a >> op >> b;

    string s1 = to_string(a), s2 = to_string(b);

    for (int i = 0; i < s1.size(); i++)
        if (s1[i] == '7')
            s1[i] = '0';

    for (int i = 0; i < s2.size(); i++)
        if (s2[i] == '7')
            s2[i] = '0';

    a = stoi(s1);
    b = stoi(s2);

    if (op == '+')
    {
        int res = a + b;
        string s = to_string(res);
        for (int i = 0; i < s.size(); i++)
            if (s[i] == '7')
                s[i] = '0';
        res = stoi(s);
        cout << res << endl;
    }
    else
    {
        int res = a * b;
        string s = to_string(res);
        for (int i = 0; i < s.size(); i++)
            if (s[i] == '7')
                s[i] = '0';
        res = stoi(s);
        
        cout << res << endl;
    }

    return 0;
}
