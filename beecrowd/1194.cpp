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

    string pre, inf;

    void print(int i, int j, char root)
    {
        if(i >= j) 
        {
            cout << inf[i]; 
            return ; 
        }
        int pos;
        for (int k = i; k <= j; k++)
        {
            if (inf[k] == root)
            {
                pos = k;
                break;
            }
        }
        int new_pos = 100;
        
        // achando qual char vem primeiro na forma prefixa do lado esquerdo da raiz na string infixa
        for (int k = i; k <= pos - 1; k++)
        {
            if (pre.find(inf[k]) < new_pos)
                new_pos = pre.find(inf[k]);
        }
        if(i <= pos-1) print(i, pos - 1, pre[new_pos]);

        new_pos = 100;
        
        // achando qual char vem primeiro na forma prefixa do lado direito da raiz na string infixa
        for (int k = pos+1; k <= j; k++)
        {
            if (pre.find(inf[k]) < new_pos)
                new_pos = pre.find(inf[k]);
        }
        if(pos+1 <= j) print(pos+1, j, pre[new_pos]); 

        print(pos, pos, inf[pos]); 
    }

    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int c;
        cin >> c;
        while (c--)
        {
            int n;
            cin >> n;
            cin >> pre >> inf;
            print(0, n - 1, pre[0]);
            cout << endl; 
        }

        return 0;
    }
