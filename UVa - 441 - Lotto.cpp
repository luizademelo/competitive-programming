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


    int k; 
    cin >> k; 
    while(k != 0)
    {
        vi v(k); 
        for(int i = 0; i < k; i++)
            cin >> v[i]; 
        
        for(int a = 0; a < k-5; a++)
            for(int b = a+1; b < k -4; b++)
                for(int c = b+1; c < k-3; c++)
                    for(int d = c+1; d < k-2; d++)
                        for(int e = d+1; e < k-1; e++)
                            for(int f = e+1; f < k; f++)
                                cout << v[a] << " " << v[b] << " " << v[c] << " " << v[d] << " " << v[e] << " " << v[f] << endl; 

        cin  >> k; 
        if(k != 0) cout << endl; 
    }

    return 0;
}
