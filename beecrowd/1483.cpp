#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main(){

    ios::sync_with_stdio(false); cin.tie(0);
    
    double v;
    string n,m; 

    while(cin >> v >> n >> m, v != 0)
    {
        while(n.size() < 6)
            n = '0' + n; 
        while(m.size() < 6)
            m = '0' + m; 
        
        double ans = 0; 

        if(n.substr(2, 4) == m.substr(2,4)){
            ans = v * 3000; 
        }else if(n.substr(3,3) == m.substr(3,3)){
            ans = v * 500; 
        }else if(n.substr(4,2) == m.substr(4,2)){
            ans = v * 50; 
        }else{
            vector<set<string>> groups(25); 
            string g1 = n.substr(4,2);
            string g2 = m.substr(4,2); 


            groups[24].insert("00"); 
            int idx = 0; 
            for(int i = 1; i <= 99; i++){
                string s = to_string(i); 
                if(s.size() == 1) 
                    s = '0' + s; 
                
                groups[idx].insert(s); 

                if(i%4 == 0){
                    if(groups[idx].count(g1) && groups[idx].count(g2)){
                        ans = v * 16; 
                        break; 
                    }
                    idx++; 
                }
            }
        }

        cout << fixed << setprecision(2) << ans << endl; 
    } 


    return 0; 
}
