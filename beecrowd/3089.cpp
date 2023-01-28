// Beecrowd 3089 - Presentes de Natal - Accepted
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

    int n; 
    cin >> n; 

    while(n != 0)
    {
        vector<ll> v(2*n); 
        for(int i = 0; i < 2*n; i++)
            cin >> v[i]; 
        
        vector<int> p; 
        
        int j = 2*n-1;
        for(int i = 0; i < j; i++,j--)
        {
            p.push_back(v[i]+v[j]); 
        }
        sort(p.begin(), p.end()); 
        
        cout << p[p.size()-1] << " " << p[0] << endl;
        

        cin >> n; 
    }

    return 0;
}
