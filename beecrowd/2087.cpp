#include <bits/stdc++.h>

using namespace std;
 
int main() {

    int n; 
    while(cin >> n, n != 0){
        vector<string> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        
        bool bom = true;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(i == j) continue; 
                if(v[i] == v[j] or v[i] == v[j].substr(0, v[i].size()) or v[j] == v[i].substr(0,v[j].size())){
                    bom = false;
                    break; 
                }
            }
            if(!bom) break;
        }
        if(bom)
            cout << "Conjunto Bom\n";
        else 
            cout << "Conjunto Ruim\n";
    }

    return 0;
}
