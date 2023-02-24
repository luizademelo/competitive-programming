#include <bits/stdc++.h>
#include <stdlib.h>

#define INF 10000000
#define MOD 1000000007
#define endl '\n'

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m,s; cin >> m >> s; 

    if(s >= 1 && s <= 9*m)
    {

        string mx = "", mn;
        int sum = s; 
        for(int i = 0; i < m; i++)
        {
            int digit = min(9, sum); 
            sum -= digit; 
            mx += '0' + digit; 
        }
        
        if(sum > 0) 
        {
            cout << "-1 -1\n";
            return 0; 
        }
        mn = mx; 
        sort(mn.begin(), mn.end()); 
      
        // checking leading zeroes
        if(mn[0] == '0')
        {
            mn[0]++; 
            for(int i = 1; i < m; i++) 
                if(mn[i] > '0') 
                {
                    mn[i]--; 
                    break; 
                }
        }

        cout << mn << " " << mx << endl; 


    }else if(s == 0 && m == 1) cout << "0 0\n"; 
    else cout << "-1 -1\n"; 

    

    return 0;
}
