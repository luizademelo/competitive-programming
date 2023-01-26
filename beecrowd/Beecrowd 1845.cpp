// 1845	-- Efílogo -- Accepted
/*
ID: ludemel2
TASK: test
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <bits/stdc++.h>

#define INF 1000000000
#define MOD 1000000007
typedef long long ll;

using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; 
    set<char> min; 
    min.insert('s'); 
    min.insert('j'); 
    min.insert('z'); 
    min.insert('p'); 
    min.insert('b'); 
    min.insert('v'); 
    min.insert('x'); 
    set<char> mai; 
    mai.insert('S'); 
    mai.insert('J'); 
    mai.insert('Z'); 
    mai.insert('P'); 
    mai.insert('B'); 
    mai.insert('V'); 
    mai.insert('X'); 
    while(getline(cin, s))
    {
        string str = ""; 
        for(int i = 0; i < s.size(); i++)
        {
            if(min.count(s[i]))
                s[i] = 'f'; 
            if(mai.count(s[i]))
                s[i] = 'F';
            if(i == 0) str += s[i]; 
            else 
            {
                if(toupper(s[i]) == toupper(s[i-1]) && toupper(s[i]) == 'F')
                    continue; 
                else str += s[i]; 
            }
        }

        cout << str << '\n'; 

    }

    return 0;
}
