/*
ID: ludemel2
TASK: test
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
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
        int ans = 0; 
        ll prev; cin >> prev; 
        for(int i = 1; i < n; i++) 
        {
            int x; cin >> x; 
            if(prev%2 == 0 && x%2 == 0)
            {
                ans++; 
                prev = prev * x; 
            }else if(prev%2 != 0 && x%2 != 0)
            {
                ans++; 
                prev = prev * x; 
            }
            else prev = x; 
        } 
        cout << ans << endl; 

    }

    return 0;
}
