// two pointers
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
 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi v(n);
        int ma, mi;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            s.insert(v[i]);
        }
 
        int i = 0, j = n - 1;
        while (i <= j)
        {
            ma = *(s.rbegin());
            mi = *(s.begin());
            bool can = true; 
            if (v[i] == mi || v[i] == ma)
            {
                s.erase(v[i++]); 
                can = false; 
            }
            if (v[j] == ma || v[j] == mi)
            {
                s.erase(v[j--]); 
                can = false; 
            }
            if(can) break; 
        }
        if(i <= j) cout << i+1 << " " << j+1 << endl; 
        else cout << -1 << endl; 
    }
 
    return 0;
}
