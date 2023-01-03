//  Beecrowd - 2922 - Salas De Aula -- Accepted
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

    int b,u; 
    while(scanf("%d %d", &b, &u) != EOF)
    {
        if (u != b)
            cout << abs(u - b ) -1 << endl; 
        else cout << 0 << endl; 
    }

    return 0;
}
