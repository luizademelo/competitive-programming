#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>

using namespace std;

int n;
int n_tracks;
vector<int> durations;
vector<int> chosen;
int ans = 0;

void search(int i, int sum, vector<int> current_choices)
{

    if (i == n_tracks)
    {
        if (ans < sum)
        {
            ans = sum;
            chosen = current_choices;
        }
        return;
    }

    if (sum + durations[i] <= n)
    {
        current_choices.push_back(durations[i]);
        search(i + 1, sum + durations[i], current_choices);
        current_choices.pop_back();
    }
    search(i + 1, sum, current_choices);
}

int main()
{

    string s;
    while (getline(cin, s))
    {
        stringstream ss(s);

        ss >> n >> n_tracks;

        int x;
        while (ss >> x)
        {
            durations.push_back(x);
        }

        chosen.assign(false, 1000);

        search(0, 0, vector<int>());

        // cout << n_tracks;
        for (int i = 0; i < chosen.size(); i++)
        {
            cout << chosen[i] << " ";
        }

        cout << "sum:" << ans << endl;

        durations.clear();
        chosen.clear();
        ans = 0;
    }

    return 0;
}
