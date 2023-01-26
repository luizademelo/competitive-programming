// Beecrowd - 1349 - Efeito Ruído -- Accepted
/*
ID: ludemel2
TASK: test
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <bits/stdc++.h>

#define INF 10000000000
#define MOD 1000000007

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l;
    cin >> l;
    while (l != 0)
    {
        int p[l][l];
        for (int i = 0; i < l; i++)
            for (int j = 0; j < l; j++)
                cin >> p[i][j];
        int m[l][l];
        for (int i = 0; i < l; i++)
            for (int j = 0; j < l; j++)
                cin >> m[i][j];
        double ans = 0;

        int valid1 = 0, valid2 = 0, valid3 = 0, valid4 = 0;
        int valid5 = 0, valid6 = 0, valid7 = 0, valid8 = 0;

        for (int i = 0; i < l; i++)
        {
            for (int j = 0; j < l; j++)
            {
                // posicao normal
                if (abs(p[i][j] - m[i][j]) <= 100)
                    valid1++;
                // virado pra direita
                if (abs(p[i][j] - m[j][l - i - 1]) <= 100)
                    valid2++;
                // virado ao contrario
                if (abs(p[i][j] - m[l - i - 1][l - j - 1]) <= 100)
                    valid3++;
                // virado pra esquerda
                if (abs(p[i][j] - m[l - j - 1][i]) <= 100)
                    valid4++;

                // posicoes quando o disco é inserido de cabeça pra baixo
                if (abs(p[i][j] - m[l - i - 1][j]) <= 100)
                    valid5++;
                if (abs(p[i][j] - m[j][i]) <= 100)
                    valid6++;
                if (abs(p[i][j] - m[i][l - j - 1]) <= 100)
                    valid7++;
                if (abs(p[i][j] - m[l - j - 1][l - i - 1]) <= 100)
                    valid8++;
            }
        }

        double prec = valid1 / double(l * l);
        if (prec > ans)
            ans = prec;
        prec = valid2 / double(l * l);
        if (prec > ans)
            ans = prec;
        prec = valid3 / double(l * l);
        if (prec > ans)
            ans = prec;
        prec = valid4 / double(l * l);
        if (prec > ans)
            ans = prec;
        prec = valid5 / double(l * l);
        if (prec > ans)
            ans = prec;
        prec = valid6 / double(l * l);
        if (prec > ans)
            ans = prec;
        prec = valid7 / double(l * l);
        if (prec > ans)
            ans = prec;
        prec = valid8 / double(l * l);
        if (prec > ans)
            ans = prec;
        ans *= 100; 
        cout << fixed << setprecision(2) << ans << endl;

        cin >> l;
    }

    return 0;
}
