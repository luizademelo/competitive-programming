#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{

    int n; cin >> n;
    int p,q,r,s,x,y; 
    int i,j; 
    cin >> p >> q >> r >> s >> x >> y;
    cin >> i >> j;

    vector<int> a,b; 
    for(int k = 1; k <= n; k++) {
        a.push_back((p*i + q*k)%x); 
        b.push_back((r*k + s*j)%y); 
    }
    ll ans = 0;
    for(int k = 0; k < n; k++){
        ans += a[k] * b[k]; 
    }

    cout << ans << endl;

    return 0;
}
