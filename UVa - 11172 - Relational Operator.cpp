// 1845	-- Efílogo -- Accepted
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
typedef pair<int,int> ii; 
typedef vector<ii> vii; 
typedef vector<int> vi; 


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t; 
    while(t--)
    {
        ll a,b; cin >> a >> b; 
        if(a == b)
            cout << "=\n"; 
        else if(a > b)
            cout << ">\n"; 
        else cout << "<\n"; 
    }

    return 0;
}