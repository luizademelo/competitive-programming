/*
ID: ludemel2
TASK: test
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
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

    int d;
    while (cin >> d, d > 0)
    {
        char c;
        cin >> c;
        if (c == 'S')
        {
            string s;
            cin >> s;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < d; j++)
                {
                    if (i == 0)
                    {
                        switch (s[j])
                        {
                        case '1':
                        case '2':
                        case '5':
                        case '8':
                            cout << "*.";
                            break;
                        case '3':
                        case '4':
                        case '6':
                        case '7':
                            cout << "**";
                            break;
                        case '9':
                        case '0':
                            cout << ".*";
                            break;
                        }
                    }
                    if (i == 1)
                    {
                        switch (s[j])
                        {
                        case '1':
                        case '3':
                            cout << "..";
                            break;
                        case '2':
                        case '6':
                        case '9':
                            cout << "*.";
                            break;
                        case '4':
                        case '5':
                            cout << ".*";
                            break;
                        case '7':
                        case '8':
                        case '0':
                            cout << "**";
                            break;
                        }
                    }
                    if (i == 2)
                    {
                        cout << "..";
                    }
                    if (j < d - 1)
                        cout << " ";
                }
                cout << endl;
            }
        }
        else if (c == 'B')
        {
            char m[3][d * 2];
            for (int i = 0; i < 3; i++)
                for (int j = 0; j < d * 2; j += 2)
                    cin >> m[i][j] >> m[i][j + 1];
            for (int j = 0; j < d * 2; j += 2)
            {
                if (m[0][j] == '*' && m[0][j + 1] == '.' && m[1][j] == '.' && m[1][j + 1] == '.')
                    cout << 1;
                else if (m[0][j] == '*' && m[0][j + 1] == '.' && m[1][j] == '*' && m[1][j + 1] == '.')
                    cout << 2;
                else if (m[0][j] == '*' && m[0][j + 1] == '*' && m[1][j] == '.' && m[1][j + 1] == '.')
                    cout << 3;
                else if (m[0][j] == '*' && m[0][j + 1] == '*' && m[1][j] == '.' && m[1][j + 1] == '*')
                    cout << 4;
                else if (m[0][j] == '*' && m[0][j + 1] == '.' && m[1][j] == '.' && m[1][j + 1] == '*')
                    cout << 5;
                else if (m[0][j] == '*' && m[0][j + 1] == '*' && m[1][j] == '*' && m[1][j + 1] == '.')
                    cout << 6;
                else if (m[0][j] == '*' && m[0][j + 1] == '*' && m[1][j] == '*' && m[1][j + 1] == '*')
                    cout << 7;
                else if (m[0][j] == '*' && m[0][j + 1] == '.' && m[1][j] == '*' && m[1][j + 1] == '*')
                    cout << 8;
                else if (m[0][j] == '.' && m[0][j + 1] == '*' && m[1][j] == '*' && m[1][j + 1] == '.')
                    cout << 9;
                else if (m[0][j] == '.' && m[0][j + 1] == '*' && m[1][j] == '*' && m[1][j + 1] == '*')
                    cout << 0;
            }
            cout << endl;
        }
    }

    return 0;
}
