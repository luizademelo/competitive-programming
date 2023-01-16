/*
ID: ludemel2
TASK: test
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <bits/stdc++.h>

#define INF 10000000000
#define MOD 1000000007

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int x, y;
bool vis[100][100];

bool valid = false;
char m[100][100];

void dfs(int i, int j, char dir)
{
    if(i < 0 || i >= x || j < 0 || j >= y) return; 
    if(vis[i][j]) return; // significa que deu loop 
    vis[i][j] = true;
    if(m[i][j] == '*')
    {
        valid = true;
    }
    else if (m[i][j] == '>' || (dir == '>' && m[i][j] == '.'))
    {
        dfs(i, j + 1, '>');
    }
    else if(m[i][j] == 'v' || (dir == 'v' && m[i][j] == '.'))
    {
        dfs(i+1, j, 'v'); 
    }
    else if(m[i][j] == '<' || (dir == '<' && m[i][j] == '.'))
    {
        dfs(i, j-1, '<'); 
    }
    else if(m[i][j] == '^' || (dir == '^' && m[i][j] == '.'))
    {
        dfs(i-1, j, '^'); 
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> y >> x;

    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
        {
            vis[i][j] = false;
            cin >> m[i][j];
        }

    dfs(0, 0, m[0][0]); 

    if(valid) cout << "*\n"; 
    else cout << "!\n"; 

    return 0;
}
