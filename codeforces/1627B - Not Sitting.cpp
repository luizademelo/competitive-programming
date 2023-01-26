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

    int t;cin >> t; 
    while(t--)
    {
        int n, m; cin >> n >> m;
        vi ans; 
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                ans.push_back(max(i, n-i-1) + max(j, m-j-1)); 
            }
        }
        sort(ans.begin(), ans.end()); 
        for(int i = 0; i < ans.size(); i++)
            cout << ans[i] << " "; 
        cout << endl; 
    }


    return 0;
}
