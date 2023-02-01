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

    string cifra,crib; 
    cin >> cifra >> crib; 
    int ans = 0; 
    int i = 0; 
    while((i+crib.size()-1 < cifra.size()))
    {
        bool can = true; 
        for(int k = 0; k < crib.size(); k++)
        {
            if(crib[k] == cifra[k+i])
            {
                can = false; 
                break; 
            }
        }   
        if(can) ans++; 

        i++; 
    }

    cout << ans << endl; 

    return 0;
}
