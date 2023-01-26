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
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int belong[1000001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int k = 1;
    while (t != 0)
    {
        cout << "Scenario #" << k++ << endl;
        vector<queue<int>> teams(t);
        queue<int> order;
        for (int i = 0; i < t; i++)
        {
            int num;
            cin >> num;
            while (num--)
            {
                int e;
                cin >> e;
                belong[e] = i;
            }
        }
        string s;
        cin >> s;
        while (s != "STOP")
        {
            if (s == "ENQUEUE")
            {
                int e;
                cin >> e;
                int team = belong[e];
                if (teams[team].size() == 0)
                    order.push(team);
                teams[team].push(e);
            }
            else
            {
                int team = order.front();
                int deq = teams[team].front();
                teams[team].pop();
                cout << deq << endl;
                if(teams[team].empty())
                    order.pop(); 
            }
            cin >> s;
        }
        cout << endl;
        cin >> t;
    }

    return 0;
}
