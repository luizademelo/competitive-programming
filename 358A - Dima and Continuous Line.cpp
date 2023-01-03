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
 
    int n; cin >> n; 
    vii v; 
    int arr[n]; 
    for(int i = 0; i < n; i++) cin >> arr[i]; 
    for(int i = 1; i < n; i++)
    {
        int a = max(arr[i-1], arr[i]); 
        int b = min(arr[i-1], arr[i]); 
        v.push_back(make_pair(b, a)); 
        //cout << a << " " << b << endl; 
    }
 
    bool ans = false; 
    for(int i =0; i < v.size(); i++)
    {
        for(int j = 0; j < v.size(); j++)
        {
            if(v[i].first < v[j].first && v[i].second < v[j].second && v[i].second > v[j].first) 
            {
                ans = true; 
                break; 
            }
        }
    }
    if(ans) cout << "yes\n"; 
    else cout << "no\n"; 
 
    return 0;
}
