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
#define MAXN 1005


using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;



int main()
{
    _
    
  
    int n; cin >> n; 
    vi v(n+1); 
    for(int i = 1; i <= n; i++)
        cin >> v[i]; 
    
    vi cost(n+1);
    cost[0] = cost[1] = 0; 

    for(int i = 2; i <= n; i++) 
    {
        if(i == 2) 
            cost[i] = abs(v[i] - v[i-1]); 
        else 
            cost[i] = min(cost[i-2] + abs(v[i] - v[i-2]), cost[i-1] + abs(v[i] - v[i-1])); 
    }

    cout << cost[n] << endl; 

    return 0;
}