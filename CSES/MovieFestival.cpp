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

bool cmp(ii a, ii b)
{
    return a.second < b.second; 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n; cin >> n; 
    vii v(n); 

    for(int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second; 
    
    sort(v.begin(), v.end(), cmp); 

    int last = 0; 
    int movies = 1; 

    for(int i = 1; i < n; i++)
    {
        if(v[last].second <= v[i].first){
            movies++; 
            last = i; 
        }
    }

    cout << movies << endl  ; 

    return 0;
}
