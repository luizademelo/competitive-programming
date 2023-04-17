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
int vencedor = -1; 

vector<string> jogadores; 
map<char,int> cards = {
	{'A', 1}, {'2', 2}, {'3', 3}, {'4', 4}, 
	{'5', 5}, {'6', 6}, {'7', 7}, {'8', 8}, 
	{'9', 9}, {'D', 10}, {'Q', 11}, {'J', 12}, {'K', 13}
}; 

bool cmp(char &c1, char &c2)
{
	return cards[c1] < cards[c2];
}

bool checa_vencedor(int v)
{
	for(int i = 1; i < jogadores[v].size(); i++)
		if(jogadores[v][i] != jogadores[v][i-1])
			return false; 
	return true; 
}

void processa_rodada()
{
	int atual = k-1; 
	for(int i = 0; i < n; i++)
	{
		sort(jogadores[atual].begin(), jogadores[atual].end(), cmp); 
		if(checa_vencedor(atual))
		{
			vencedor = atual+1; 
			break;
		}

		// tratar coringa
		

		// pegar menor carta
		int cartas = jogadores[atual].size(); 
		if(jogadores[atual][0] != jogadores[atual][1])
		{
			jogadores[(atual+1)%n] += jogadores[atual][0]; 
			jogadores[atual].erase(0,1); 
		}else if(jogadores[atual][cartas-1] != jogadores[atual][cartas-2])
		{
			jogadores[(atual+1)%n] += jogadores[atual][cartas-1]; 
			jogadores[atual].erase(cartas-1,1); 
		}

		atual++; 
	}
}

int main()
{
    _
    
    cin >> n >> k; 
	jogadores.resize(n); 
	for(int i = 0; i < n; i++)
		cin >> jogadores[i];
	
	int coringa = k-1; 
	while(vencedor < 1)
	{

	}

	cout << vencedor << endl; 


    return 0;
}
