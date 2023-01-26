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
 
    int t; cin >> t; 
    while(t--)
    {
        int n; cin >> n; 
        vector<bool> used(2*n+2, false); 
        int b[n+1]; 
        for(int i = 0; i < n; i++)
        {
            int x; cin >> x; 
            used[x] = true;
            b[i] = x;  
        }
        vector<int> a; 
        bool can = true; 
        for(int i  = 0; i < n; i++)
        {
            a.push_back(b[i]); 
            int x = b[i]; 
            while(used[x] == true && x < 2*n+1)
                x++; 
            if(used[x] == false && x < 2*n+1)
            {
                a.push_back(x); 
                used[x] = true; 
            }
            else can = false;
        }
        if(can)
        {
            for(int i = 0; i < a.size(); i++)
                cout << a[i] << " "; 
            cout << endl; 
        }else cout << -1 << endl; 
 
    }
 
    return 0;
}
