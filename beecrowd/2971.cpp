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
#define MANTER 1
#define PASSAR 2 

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int n,k; 
int vencedor = -1; 
int coringa; 
int state_coringa = MANTER; 

vector<string> jogadores; 
map<char,int> cards = {
	{'A', 1}, {'2', 2}, {'3', 3}, {'4', 4}, 
	{'5', 5}, {'6', 6}, {'7', 7}, {'8', 8}, 
	{'9', 9}, {'D', 10}, {'Q', 11}, {'J', 12}, {'K', 13}
}; 

// bool cmp(char &c1, char &c2)
// {
// 	return cards[c1] < cards[c2];
// }

bool checa_vencedor(int v)
{
	for(int i = 1; i < jogadores[v].size(); i++)
		if(jogadores[v][i] != jogadores[v][i-1])
			return false; 
	return true; 
}

void passa_carta(int atual)
{
    // tratar coringa

    // achando a carta que deve ser passada
    int menor = INF; 
    char carta; 
    for(int i = 0; i < jogadores[atual].size(); i++)
    {
        int cnt = count(jogadores[atual].begin(), jogadores[atual].end(), jogadores[atual][i]); 
        if(cnt == menor and cards[carta] < cards[jogadores[atual][i]])
            carta = jogadores[atual][i]; 
        
    }
}

int main()
{
    _
    
    cin >> n >> k; 
	jogadores.resize(n); 
	for(int i = 0; i < n; i++)
		cin >> jogadores[i];
	
	int atual = coringa = k-1; 
    
	while(vencedor < 1)
	{
        for(int i = 0; i < n; i++ )
        {
            passa_carta(atual); 
            atual++; 
            if(vencedor >= 0)
            {
                cout << vencedor+1 << endl; 
                break; 
            }
        }
	}



    return 0;
}
