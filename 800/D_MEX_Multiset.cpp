#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<long long, long long>;
using vi = vector<int>;
using vll = vector<long long>;

void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;

    vector<int> freq(n + 2, 0);
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= n)
            freq[a[i]]++; // values beyond n can't affect any mex
    }

    if (freq[0] == 1)
    {
        cout << "NO\n";
        return;
    }

    string res(n, 'A');

    if (freq[0] == 0)
    {
        // all mex are forced to 0 regardless of distribution
        cout << "YES\n"
             << res << "\n";
        return;
    }

    // freq[0] >= 2: build A/B with equal MEX, dump the rest (incl. value 0's extras) carefully
    int M2 = 0;
    while (M2 <= n && freq[M2] >= 2)
        M2++;

    vector<int> seen(n + 2, 0);
    for (int i = 0; i < n; i++)
    {
        int v = a[i];
        if (v == 0)
        {
            seen[0]++;
            res[i] = (seen[0] == 1) ? 'A' : 'B'; // never C for value 0
        }
        else if (v < M2)
        {
            seen[v]++;
            if (seen[v] == 1)
                res[i] = 'A';
            else if (seen[v] == 2)
                res[i] = 'B';
            else
                res[i] = 'C'; // safe: C already misses 0
        }
        else
        {
            res[i] = 'C';
        }
    }

    cout << "YES\n"
         << res << "\n";
}

int main()
{
    fast_io();

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}