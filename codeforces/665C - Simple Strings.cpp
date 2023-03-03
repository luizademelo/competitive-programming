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

    
    string s; cin >> s; 



    for(int i = 1; i < s.size(); i++)
    {
        if(s[i] == s[i-1])
        {
            for(char c = 'a'; c <= 'z'; c++)
            {
                if(c != s[i] && c != s[i-1])
                {
                    if(i+1 < s.size())
                        if(s[i+1] != c)
                             s[i] = c; 
                        else continue; 
                    else s[i] = c; 
                    break; 
                }
            }
        }
    }

    cout << s << endl; 

    return 0;
}
