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

bool can = false; 

bool check(vi &v, vi &w)
{
    bool can1 = true, can2 = true; 
    for(int i = 0; i < w.size(); i++)
    {
        if(v[i] != w[i]) 
            can1 = false;
        if(v[w.size()-1-i] != w[i]) 
            can2 = false; 
    }
    if(can1 or can2) 
        return true; 
    return false; 
}

void dobra(vi &v, vi &w)
{
    if(v.size() < w.size()) return; 

    if(check(v,w)) 
    {
        can = true; 
        return; 
    }
    vi rev(v.size()); 
    for(int i = 0; i < v.size(); i++)
        rev[i] = v[v.size()-i-1]; 
    
    // pode ir só até v.size/2, porque depois disso o codigo faz chamadas para vetores que já olhamos e também dá TLE
    for(int i = 1; i <= v.size()/2; i++)
    {
        vi aux, aux2; 
        for(int j = i; j < v.size(); j++)
        {
            aux.pb(v[j]); 
            aux2.pb(rev[j]); 
        }
        for(int j = 0; j < i; j++)
        {
            if(j < aux.size())
            {
                aux[j] += v[i-j-1]; 
                aux2[j] += rev[i-j-1]; 
            }
            else 
            {
                aux.push_back(v[j]); 
                aux2.pb(rev[j]); 
            }
        }
        // if(aux2.size() >=   w.size())
        // {
        //     for(int j =0; j < aux2.size(); j++)
        //         cout << aux2[j] << " "; 
        //     cout << endl; 

        // }
        dobra(aux, w); 
        dobra(aux2, w); 
    }

    return;

}




int main()
{
    _

    int n; 
    while(cin >> n)
    {
        can = false; 
        vi v(n);
        for(int i = 0; i < n; i++) cin >> v[i]; 
        int m; cin >> m; 
        vi w(m); 
        for(int i = 0; i < m; i++) cin >> w[i]; 

        dobra(v, w); 
        if(can)
            cout << "S\n"; 
        else cout << "N\n"; 
    }

    return 0;
}
