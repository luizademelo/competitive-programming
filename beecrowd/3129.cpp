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

    int n;
    cin >> n;
    int rep = 0;
    set<int> s;
    while (n--)
    {
        int fig;
        cin >> fig;
        if (s.count(fig))
            rep++;
        else
            s.insert(fig);
    }

    cout << s.size() << endl;
    cout << rep << endl;

    return 0;
}
