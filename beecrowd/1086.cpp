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
#define MOD 1000000007
#define MAXN 1005

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

int n, m, l, k;

map<int,int, greater<int>> tab; 

int test()
{
    if ((n * 100) % l > 0)
        return -1;
    int need = (n * 100) / l;
    int got = 0; 
    int sol = 0; 
    for(auto it = tab.begin(); it != tab.end() and got < need; it++)
    {
        if(m%2 == 0 and it->first < m/2) break; 
        if(m%2 == 1 and it->first <= floor(m/2.0)) break; 
        if(it->first > m) continue; 
        if(it->first == m)
        {
            sol += min(it->second, need); 
            got += sol; 
        }else if(it->first != m-it->first) 
        {
            int t = min(need - got, min(it->second, tab[m-it->first])); 
            got += t; 
            sol += 2*t; 
        }else
        {
            int med = floor(it->second/2.0); 
            int t = min(need-got, med); 
            got += t; 
            sol += 2*t; 
        }
    }
    if(got == need) return sol; 
    else return -1; 
}

int main()
{
    _

    while (cin >> n >> m, n != 0)
    {
        cin >> l >> k;
        tab.clear(); 
        for (int i = 0; i < k; i++)
        {
            int x; cin >> x; 
            tab[x]++; 
        }
        int a = test(); 
        swap(n,m); 
        int b = test();
        
        if(a != -1 and b != -1) cout << min(a,b) << endl; 
        else if(a==-1 and b != -1) cout <<  b << endl; 
        else if(b==-1 and a != -1) cout << a << endl; 
        else cout << "impossivel\n"; 
    }

    return 0;
}
