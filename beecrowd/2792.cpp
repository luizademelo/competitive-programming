#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

class FenwickTree
{
private:
    vector<int> ft;

public:
    FenwickTree(int n)
    {
        ft.assign(n, 0);
    }

    int rsq(int b) // range square sum
    {
        int sum = 0;
        for (; b; b -= (b & -b))
        {
            sum += ft[b];
        }
        return sum;
    }

    void adjust(int i, int value)
    {
        for (; i < ft.size(); i += (i & -i))
        {
            ft[i] += value;
        }
    }
};

int main()
{
    int n;
    cin >> n;

    FenwickTree ft(n);
    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        int idx;
        cin >> idx;

        ft.adjust(idx, 1);

        ans[i] = idx - ft.rsq(idx - 1);
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i];
        if (i < n - 1)
        {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
