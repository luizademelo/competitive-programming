/*
ID: ludemel2
TASK: test
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <bits/stdc++.h>
#include <stdlib.h>

#define INF 10000000000
#define MOD 1000000007
#define endl '\n'

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

bool isPrime(int n)
{
    if(n == 1) return false;
    for(int i = 2; i <= sqrt(n); i++)
        if(n%i == 0) 
            return false; 
    return true; 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; 
    set<int> primes; 

    primes.insert(2); 
    primes.insert(3); 
    primes.insert(5); 
    primes.insert(7); 

    while(cin >> n)
    {
        bool super = true;
        bool prime = false;
        if(isPrime(n))
            prime = true;
        while(n > 0)
        {
            if(!primes.count(n%10))
            {
                super = false; 
                break; 
            }
            n /= 10; 
        }
        if(prime && super) cout << "Super\n"; 
        else if(prime) cout << "Primo\n"; 
        else cout << "Nada\n"; 

    }

    return 0;
}
