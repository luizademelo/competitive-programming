#include  <bits/stdc++.h> 

using namespace std; 

int main(){

    int n,m; cin >> n >> m; 

    int ans =0; 
    for(int i = 0; i < n; i++){
        int cnt = 1; 
        for(int j = 0; j < m; j++){
            int x; cin >> x; 
            cnt = cnt & (x > 0); 
        }
        ans += cnt; 
    }
    cout << ans << endl; 

    return 0; 
}
