// problem link: http://www.usaco.org/index.php?page=viewproblem2&cpid=663
#include <bits/stdc++.h>
#include <stdlib.h>

#define INF 10000000
#define MOD 1000000007
#define endl '\n'

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ifstream in("square.in");
    ofstream out("square.out");
    int x1, y1, x2, y2;
    int mx_x, mn_x, mx_y, mn_y;
    in >> x1 >> y1 >> x2 >> y2;
    mx_x = max(x1, x2);
    mx_y = max(y1, y2);
    mn_x = min(x1, x2);
    mn_y = min(y1, y2);

    in >> x1 >> y1 >> x2 >> y2;

    mx_x = max(mx_x, max(x1, x2));
    mx_y = max(mx_y, max(y1, y2));
    mn_x = min(mn_x, min(x1, x2));
    mn_y = min(mn_y, min(y1, y2));

    int ans = max(mx_x - mn_x, mx_y - mn_y); 
    ans = ans * ans; 
    out << ans << endl; 

    return 0;
}
