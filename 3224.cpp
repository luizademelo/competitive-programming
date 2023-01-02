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

    string s1,s2; cin >> s1 >> s2; 
    s1.size() >= s2.size()? cout << "go\n" : cout << "no\n"; 

    return 0;
}
