#include <iostream>

#include <map>

using namespace std; 

int main() {


    int n; 
    cin >> n; 
    while(n != 0) {

        map<string, int> m; 
        for(int i = 0; i < n; i++) {
            string time; 
            int p; 
            cin >> time >> p;
            m[time] = p; 
        }

        for(int i = 0; i < n/2; i++) {
            string time1, time2;
            int placar1, placar2;

            cin >> time1 >> placar1;
            m[time1] += 3*placar1;

            cin >> time2; // descarte do hifen

            time2.erase(time2.begin());

            placar2 = stoi(time2);
            cin >> time2;
            m[time2] += 3*placar2;

            if (placar1 == placar2) {
                m[time1] += 1;
                m[time2] += 1;
            }

            else if (placar1 < placar2)
                m[time2] += 5;

            else
                m[time1] += 5;
        }

        string vencedor; 
        int pts = -1; 
        for(auto it = m.begin(); it != m.end(); it++){
            if(it->second > pts)
            {
                vencedor = it->first; 
                pts = it->second; 
            }
        }

        if(vencedor == "Sport")
            cout << "O Sport foi o campeao com " << pts << " pontos :D\n\n"; 
        else 
            cout << "O Sport nao foi o campeao. O time campeao foi o " << vencedor << " com " << pts << " pontos :(\n\n"; 

        cin >> n; 
    }

    return 0;
}
