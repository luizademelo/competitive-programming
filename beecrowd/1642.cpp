#include <bits/stdc++.h>
#include <stdlib.h>

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fLL
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define MOD 1000000007
#define MAXN 20

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;


int main()
{
    _

    int n; 
    while(cin >> n, n != 0)
    {
        string s; 
        getline(cin, s); 
        getline(cin, s); 

        vi v(400); 
        int sol = 0, keys = 0; 
        int begin = 0;
        for(int i =0; i < s.size(); i++)
        {
            //s[i] = toupper(s[i]); 
            v[s[i]]++; 
            if(v[s[i]] == 1) 
                keys++;  
            if(keys > n)
            {
                while(true)
                {
                    v[s[begin]]--; 
                    if(v[s[begin]] == 0)
                        break; 
                    begin++;
                }
                begin++; 
                keys--;
            }
            sol = max(sol, i - begin + 1); 
        }        
        cout << sol << endl; 
    }

    return 0;
}
