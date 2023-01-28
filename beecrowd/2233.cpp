// Beecrowd - 2233 - Etiquetas Coloridas
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

    ll r,g,b; 
    cin >> hex >> r >> g >> b; 
    ll ans = 0; 
    
    ll red = 1; 
    ll green = floor(r/(double)g); 
    green *= green; 
    ll blue = floor(g/(double) b); 
    blue *= blue; 
    blue *= green; 
    ans = red + green + blue;

    cout << hex << ans << endl; 

    return 0;
}
