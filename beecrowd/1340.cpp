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

    int n;
    while (cin >> n)
    {
        bool pilha = true, p_fila = true, fila = true;
        bool impossible = false; 
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int type;
            cin >> type;
            int x;
            cin >> x;
            if (type == 1)
            {
                v.push_back(x);
            }
            else if (type == 2)
            {
                int pos = -1;
                int maior = -1;  
                for(int i = 0; i < v.size(); i++)
                {
                    if(v[i] > maior) maior = v[i]; 
                    if(v[i] == x) pos = i; 
                }
                if(x != maior) p_fila = false; 
                if(pos != (v.size()-1)) pilha = false; 
                if(pos != 0) fila = false; 
                if(pos == -1) 
                {
                    impossible = true; 
                } else v.erase(v.begin()+pos); 
            }
        }
        if(impossible) cout << "impossible\n"; 
        else if(pilha && fila && p_fila) cout << "not sure\n"; 
        else if(fila && p_fila) cout << "not sure\n";
        else if(p_fila && pilha) cout << "not sure\n"; 
        else if(pilha && fila) cout << "not sure\n"; 
        else if(fila) cout << "queue\n"; 
        else if(p_fila) cout << "priority queue\n"; 
        else if(pilha) cout << "stack\n"; 
        else cout << "impossible\n"; 
    } 

    return 0;
}
