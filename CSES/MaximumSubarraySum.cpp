#include <bits/stdc++.h>
#include <stdlib.h>

#define INF 0x3f3f3f3f
#define MOD 1000000007
#define endl '\n'

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<ll> v(n); 
    for(int i = 0; i < n; i++)
        cin >> v[i]; 
    
    ll sum = 0, ans = -INF; 
    for(int i = 0; i < n; i++){
        sum += v[i]; 
        ans = max(ans, sum);
        if(sum < 0) sum = 0; 
    }
    cout << ans << endl; 

    return 0;
}
