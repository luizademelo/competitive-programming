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

    int t; cin >> t; 
    while(t--)
    {
        int n; cin >> n; 
        int k = 2; 
        int sum = (pow(2,k)-1); 
        while(n%sum > 0)
        {
            k++;
            sum = (pow(2,k)-1); 
        }
        int x = n/sum; 
        cout << x << endl; 
    }

    return 0;
}
