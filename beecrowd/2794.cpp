#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> montes(n);

    for (int i = 0; i < n; i++)
    {
        cin >> montes[i].first >> montes[i].second;
    }
    sort(montes.begin(), montes.end());
    bool valido = true;

    for (int i = 1; i < n; i++)
    {
        if (montes[i - 1].second < montes[i].second)
        {
            valido = false;
        }
    }
    if (valido)
        cout << "S\n";
    else
        cout << "N\n";

    return 0;
}
