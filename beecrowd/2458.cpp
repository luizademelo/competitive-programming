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

int n; 
int vis[502][502]; 
char v[502][502]; 



int dfs(int i, int j)
{
    if(i >= n or j >= n or i < 0 or j < 0) return 0; 
    if(vis[i][j] >= 0)
    {
        return vis[i][j];
    }
    vis[i][j] = 1; 

    int ans = 1; 
    if(v[i][j] == '>')
        ans = dfs(i, j+1);
    if(v[i][j] == '<')
        ans = dfs(i, j-1);
    if(v[i][j] == 'V')
        ans = dfs(i+1, j);
    if(v[i][j] == 'A')
        ans = dfs(i-1, j);
    if(ans == 0){
        vis[i][j] = 0; 
        return 0; 
    }else
    {
        return 1; 
    }
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n; 
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> v[i][j]; 
    memset(vis, -1,sizeof(vis)); 

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(vis[i][j] == -1)
            {
                int lixo = dfs(i,j); 
            }
        }
    }
    int ans = 0; 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(vis[i][j] == 1)
                ans++; 
        }

    }
    cout << ans << endl; 
    

    return 0;
}
