/*
ID: ludemel2
TASK: test
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <bits/stdc++.h>
#include <stdlib.h>

#define INF 10000000000
#define MOD 1000000007
#define endl '\n'

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin >> s; 

    bool ans = false; 

    for(int i = 0; i < s.size(); i++)
    {
        if(i+4 < s.size())
        {
            if(tolower(s[i]) == 'z' && tolower(s[i+1]) == 'e' && 
            tolower(s[i+2]) == 'l' && tolower(s[i+3]) == 'd' && tolower(s[i+4]) == 'a')
            {
                ans = true; 
                break; 
            }
        }
    }
    if(ans) cout << "Link Bolado\n"; 
    else cout << "Link Tranquilo\n"; 

    return 0;
}
