#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    string line;
    getline(cin, line);
    stringstream ss(line);
    ss >> t;

    while (t--)
    {
        getline(cin, line);
        stringstream ss2(line);
        int cn, c_size;
        ss2 >> c_size;
        vector<int> c;
        while (ss2 >> cn)
        {
            c.push_back(cn);
        }

        int d, k;
        getline(cin, line);
        stringstream ss3(line);
        ss3 >> d;
        getline(cin, line);
        stringstream ss4(line);
        ss4 >> k;

        int idx = 0, sum = 0;
        while (sum < k)
        {
            idx += 1;
            sum += d * idx;
        }

        long long bm = 0;
        for (int i = 0; i < c_size + 1; i++)
        {
            long long sm = c[i];
            if (i > 0 && c[i] > 0)
            {
                sm = sm * pow(idx, i);
            }
            bm += sm;
        }

        cout << bm << endl;
    }

    return 0;
}
