/*
ID: ludemel2
TASK: test
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <bits/stdc++.h>
 
#define INF 1000000000
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
 
    int n,k; cin >> n >> k; 
    int a[n]; 
    for(int i =0; i < n; i++)
        cin >> a[i]; 
    int minimo = INF; 
    int ans; 
    for(int i = 0; i < k; i++)
    {
        int comp = 0; 
        int start = i; 
        int cost = 0; 
        while(comp < n)
        {
            comp += k; 
            cost += a[start]; 
            start += k; 
            start = start % n; 
        }
        if(cost < minimo)
        {
            minimo = cost; 
            ans = i+1; 
        }
    }
    cout << ans << endl; 
 
    return 0;
}
