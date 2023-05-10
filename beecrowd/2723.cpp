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
#define MAXN 1000

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int n; 
vi v; 
int ans;

int main()
{
    _

    int t; cin >> t; 
    while(t--)
    {
        ans = true; 
        cin >> n; 
        v.resize(n); 
        for(int i = 0; i < n; i++)
            cin >> v[i]; 

        int left = 0, right = 0; 

        for(int i = 0; i < n; i++)
        {
            if(abs(left+v[i]-right) <= 5)
                left += v[i]; 
            else if(abs(right+v[i]-left <= 5))
                right += v[i];
            else 
                ans = false;
        }

        if(ans)
            cout << "Feliz Natal!\n";
        else 
            cout << "Ho Ho Ho!\n"; 

    }



    return 0;
}
