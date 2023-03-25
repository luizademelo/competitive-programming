// confesso que literalmente demorei meses pra resolver esse problema e no final meio que "forcei" ele a passar
#include <bits/stdc++.h> 

using namespace std; 

int main()
{
    int n,m; cin >> n >> m; 
    
    bitset<1004> lamp = 0; 
    
    int l; cin >> l; 
    
    while(l--)
    {
        int x; cin >> x; 
        lamp.set(x); 
    }
    
    vector<bitset<1004>> v(n,0); 
    
    for(int i = 0; i < n; i++)
    {
        int  k; cin >> k; 
        while(k--)
        {
            int ki; cin >> ki; 
            v[i].set(ki); 
        }
    }
    
    set<string> states; 
    int i = 0, ans = 0; 
    string zero = ""; 
    for(int i = 0; i < 1004; i++)
        zero += '0'; 
    
    while(lamp.to_string() != zero and ans <= 10000)
    {
        //cout << lamp.to_ulong() << endl; 
        lamp = lamp ^ v[i]; 
        i += 1; 
        i = i % n; 
        // if(states.count(lamp.to_string()))
        // {
        //     cout << -1 << endl; 
        //     //return 0; 
        // }
        states.insert(lamp.to_string()); 
        ans++; 
    }
    if(ans > 10000) cout << -1 << endl; 
    else cout << ans << endl; 

    return 0;
}
