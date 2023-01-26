// 1147 - Fuga do Cavalo -- Accepted
/*
ID: ludemel2
TASK: test
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <bits/stdc++.h>

#define INF 1000000000
#define MOD 1000000007
typedef long long ll;

using namespace std;
int m[9][9];

bool valid(int x, int y)
{
    if(x < 1 || x > 8 || y < 1 || y > 8) 
        return false; 
    bool ans = true;
    if (x + 1 <= 8 && y + 1 <= 8)
    {
        if (m[x+1][y+1] == 1) ans = false; 
    }
    if(x+1 <= 8 && y-1 >= 1)
    {
        if(m[x+1][y-1] == 1)  ans = false; 
    }
    return ans; 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string c;
    cin >> c;
    int t = 1;
    while (c.size() > 1)
    {
        for (int i = 0; i <= 8; i++)
            for (int j = 0; j <= 8; j++)
                m[i][j] = 0;
        int x = int(c[0]) - 48;
        int y = int(c[1]) - 96;

        for (int i = 0; i < 8; i++)
        {
            string s; cin >> s; 
            int a = int(s[0]) - 48; 
            int b = int(s[1]) - 96; 
            m[a][b] = 1; // significa que tem um peao inimigo
        }
        int ans = 8;
        // checando as casas
        if(valid(x-1, y-2) == false)
            ans--; 
        if(valid(x-2, y-1) == false)
            ans--; 
        if(valid(x-2, y+1) == false)
            ans--; 
        if(valid(x-1, y+2) == false)
            ans--; 
        if(valid(x+1, y+2) == false)
            ans--; 
        if(valid(x+2, y+1) == false)
            ans--; 
        if(valid(x+2, y-1) == false)
            ans--;
        if(valid(x+1, y-2) == false)
            ans--; 
        cout << "Caso de Teste #" << t << ": " << ans << " movimento(s).\n"; 
        cin >> c;
        t++;
    }

    return 0;
}
