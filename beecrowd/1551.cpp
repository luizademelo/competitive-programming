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
    string s; 
    getline(cin, s); 
    t = stoi(s); 
    while (t--)
    {
        string w;
        getline(cin, w);
        set<char> letras;
        for (int i = 0; i < w.size(); i++)
        {
            if (w[i] >= 97 && w[i] <= 122)
            {
                w[i] = tolower(w[i]);
                letras.insert(w[i]);
            }
        }

        if (letras.size() == 26)
        {
            cout << "frase completa" << endl;
        }
        else if (letras.size() >= 13)
        {
            cout << "frase quase completa" << endl;
        }
        else
            cout << "frase mal elaborada" << endl;
    }

    return 0;
}
