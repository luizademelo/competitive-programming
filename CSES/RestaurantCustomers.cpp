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


    int n; cin >> n;
    vector<ll> arr(n); 
    vector<ll> exit(n); 

    for(int i = 0; i < n; i++)
        cin >> arr[i] >> exit[i]; 


    sort(arr.begin(), arr.end()); 
    sort(exit.begin(), exit.end()); 

    int  i = 1, j = 0; 
    int customers = 1; 
    int max_customers = 1; 

    while(i < n && j < n)
    {
        if(arr[i] <= exit[j])
        {
            customers++; 
            i++; 
        }
        else
        {
            j++;
            customers--; 
        }
        if(customers > max_customers)
            max_customers = customers; 
    }

    cout << max_customers << endl; 

    return 0;
}
