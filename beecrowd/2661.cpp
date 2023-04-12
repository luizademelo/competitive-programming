#include <bits/stdc++.h>
#include <stdlib.h>

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fLL
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define MOD 1000000007
#define MAXN 20

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int main()
{
    _

    ll n; cin >> n; 

    unordered_set<int> s; 
    int fator = 2; 
    while(n > 1 and fator <= 1000000)
    {
        while(n%fator == 0)
        {
            s.insert(fator); 
            n /= fator; 
        }
        fator++; 
    }

    if(n > 1 ) s.insert(n); 

    cout << (1 << s.size()) - s.size() -1 << endl; 

    return 0;
}
