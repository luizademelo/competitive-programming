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
    while (n != 0)
    {
        vii v;
        for (int i = 01234; i <= 98765 / n; i++)
        {
            int num = i * n;
            int used = (i < 10000);
            int temp = num;
            while (temp)
            {
                used |= (1 << temp % 10);
                temp /= 10;
            }
            temp = i;
            while (temp)
            {
                used |= (1 << temp % 10);
                temp /= 10;
            }
            if (used == (1 << 10) - 1)
                v.push_back(make_pair(num, i));
        }

        if (v.size() == 0)
            cout << "There are no solutions for " << n << "." << endl;
        else
        {
            sort(v.begin(), v.end());
            for (int i = 0; i < v.size(); i++)
            {
                stringstream ss;
                cout << v[i].first << " / ";
                ss << v[i].second;
                string s2;
                ss >> s2;
                if (s2.size() < 5)
                    cout << "0";
                cout << s2 << " = " << n << endl; 
            }
        }
        cin >> n;
        if(n != 0) cout << endl; 
    }

    return 0;
}
