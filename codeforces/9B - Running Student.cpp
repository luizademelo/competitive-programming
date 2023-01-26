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

    ll n, vb, vs;
    cin >> n >> vb >> vs;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    ll xu, yu;
    cin >> xu >> yu;

    double min = INF; 
    int index = 0;
    for (int i = 1; i < n; i++)
    {
        double time = arr[i] / (double)vb;
        ll dx = pow(xu - arr[i], 2);
        ll dy = pow(yu, 2);
        double d = (sqrt(dx + dy));
        time += d / (double)vs;
        if (time < min)
        {
            min = time;
            index = i + 1;
        }
        else if (time == min)
        {
            ll ddx = pow(xu - arr[index - 1], 2); 
            ll ddy = pow(yu, 2); 
            double du = sqrt(ddx + ddy);
            //cout << d << " " << du << endl; 
            if (round(d) < round(du))
            {
                // cout << "cheguei\n"; 
                index = i +1; 

            }
        }
        // cout << time << endl;
    }
    cout << index << endl;

    return 0;
}
