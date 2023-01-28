// 2568 - Ações -- Accepted
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

    int d, i, x, f; 
    cin >> d >> i >> x >> f; 
    d++; 
    for(int j = 0; j < f; j++)
    {
        if(d%2 == 0)
            i += x;
        else i -= x; 
        d++; 
    }
    // if(d%2 == 0) i += x; 
    cout << i << endl; 

    return 0;
}
