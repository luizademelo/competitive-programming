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

    int t;
    cin >> t;
    int m[4][4];
    while (t--)
    {
        bool valid = true; 
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cin >> m[i][j];
                if(m[i][j] == 2048)
                    valid = false; 
            }

        }

        if(!valid) 
        {
            cout << "NONE\n"; 
            continue; 
        }

        bool up = false, right = false, left = false, down = false;
        // up
        for (int j = 0; j < 4; j++)
        {
            for (int i = 1; i < 4; i++)
            {
                if (m[i - 1][j] == m[i][j] and m[i][j] != 0)
                    up = true;
                if (m[i - 1][j] == 0 and m[i][j] != 0)
                    up = true;
            }
        }

        // down
        for (int j = 0; j < 4; j++)
        {
            for (int i = 1; i < 4; i++)
            {
                if (m[i - 1][j] == m[i][j] and m[i][j] != 0)
                    down = true;
                if (m[i - 1][j] != 0 and m[i][j] == 0)
                    down = true;
            }
        }

        // left
        for (int i = 0; i < 4; i++)
        {
            for (int j = 1; j < 4; j++)
            {
                if (m[i][j - 1] == m[i][j] and m[i][j] != 0)
                    left = true;
                if (m[i][j - 1] == 0 and m[i][j] != 0)
                    left = true;
            }
        }

        // right
        for (int i = 0; i < 4; i++)
        {
            for (int j = 1; j < 4; j++)
            {
                if (m[i][j - 1] == m[i][j] and m[i][j] != 0)
                    right = true;
                if (m[i][j - 1] != 0 and m[i][j] == 0)
                    right = true;
            }
        }

        vector<string> dir; 
        if(down == true) dir.push_back("DOWN"); 
        if(left == true) dir.push_back("LEFT"); 
        if(right == true) dir.push_back("RIGHT"); 
        if(up == true) dir.push_back("UP"); 

        if(dir.size() == 0) cout << "NONE\n"; 
        else
        {
            for(int i = 0; i < dir.size()-1; i++) cout << dir[i] << " "; 
            cout << dir[dir.size()-1] << endl; 
        }
    }

    return 0;
}
