#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int ans = 1;
    for (int i = 0; i < 4; i++)
    {
        int c;
        cin >> c;
        if (c == 1)
            ans = i + 1;
    }
    cout << ans << endl;

    return 0;
}
