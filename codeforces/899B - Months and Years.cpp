/*
PROB: gift1
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

struct person
{
    string name;
    int money = 0;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    bool can = false;
    int n;
    cin >> n;
    vi v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int count = 0;
    bool leap = false;
    for(int i = 0; i < 12; i++)
    {
        count = 0; 
        for (int j = 0; j < n; j++)
        {
            if (v[j] == month[(i+j)%12])
                count++; 
            else if(v[j] == 29 && month[(i+j)%12] == 28)
            {
                count++; 
                if(leap) count = 0; 
                else leap = true;
            }
            else count = 0; 
        }
        if(count == n) 
            can = true; 
    }

    if(can)
        cout << "Yes\n";
    else cout << "No\n";

    return 0;
}
