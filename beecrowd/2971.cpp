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
#define MAXN 1005

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int n,k; 
vector<string> jogadores; 
map<char,int> mp = {
	{'A', 1}, {'2', 2}, {'3', 3}, {'4', 4}, 
	{'5', 5}, {'6', 6}, {'7', 7}, {'8', 8}, 
	{'9', 9}, {'D', 10}, {'Q', 11}, {'J', 12}, {'K', 13}
}; 

int main()
{
    _
    
    cin >> n >> k; 
	  jogadores.resize(n); 
	  for(int i = 0; i < n; i++)
		  cin >> jogadores[i];
	

	

    return 0;
}
