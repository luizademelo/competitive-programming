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

int parent[100005]; 

void make_set(int v){
    parent[v] = v; 
}

int find_set(int v){
    if(parent[v] == v)
        return v; 
    return parent[v] = find_set(parent[v]); 
}

void union_sets(int v, int u){
    int a = find_set(v);
    int b = find_set(u); 
    parent[b] = a; 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k; cin >> n >> k; 
    for(int i = 1; i <= n; i++)
        make_set(i); 
    while(k--){
        char c; int a,b; 
        cin >> c >> a >> b;
        if(c == 'F'){
            union_sets(a,b); 
        }else{
            if(find_set(a) == find_set(b)){
                cout << "S\n";
            }else cout << "N\n"; 
        }
    }
    

    return 0;
}
