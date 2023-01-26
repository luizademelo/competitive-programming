#include <bits/stdc++.h>

#define INF 10000000000
#define MOD 1000000007

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t; 
    while(t--)
    {
        int n; cin >> n;
        ll v[n]; 
        cin >> v[0]; 
        ll prev = v[0];
        ll x = -1; 
        for(int i = 1; i < n; i++)
        {
            cin >> v[i]; 
            if(prev > v[i] && prev + v[i] > x)
                x = prev+v[i]; 
            prev = v[i]; 
        }

        if(x == -1) cout << 0 << endl; 
        else
        {
            x = ceil(x/2.0); 
            bool can = true; 
            for(int i = 1; i < n; i++)
            {
                if(abs(v[i-1] - x)> abs(v[i]-x)) 
                {
                    can = false; 
                }
            }

            if(can) cout << x << endl; 
            else cout << -1 << endl; 
        }

    }
    

    return 0;
}
