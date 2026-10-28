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
    vi a(n);
    for (auto &x : a)
        cin >> x;

    vi F, P; // F = fixed-1 positions, P = candidate positions (1 or -1)
    for (int idx = 0; idx < n; idx++)
    {
        if (a[idx] == 1)
            F.push_back(idx);
        if (a[idx] != 0)
            P.push_back(idx);
    }

    vi res = a;

    if (P.empty())
    {
        // no 1s or -1s at all -> already all zeros
        for (int idx = 0; idx < n; idx++)
        {
            cout << res[idx];
            if (idx + 1 < n)
                cout << ' ';
        }
        cout << '\n';
        return;
    }

    int bi = -1, bj = -1, blen = -1;
    auto consider = [&](int i, int j)
    {
        int len = j - i + 1;
        if (len > blen)
        {
            blen = len;
            bi = i;
            bj = j;
        }
    };

    if (F.empty())
    {
        consider(P.front(), P.back());
    }
    else
    {
        for (int k = 0; k + 1 < (int)F.size(); k++)
        {
            consider(F[k], F[k + 1]);
        }
        consider(P.front(), F.front());
        consider(F.back(), P.back());
    }

    res[bi] = 1;
    res[bj] = 1;
    for (int idx = bi + 1; idx < bj; idx++)
        res[idx] = 0;
    for (int idx = 0; idx < bi; idx++)
        if (a[idx] == -1)
            res[idx] = 0;
    for (int idx = bj + 1; idx < n; idx++)
        if (a[idx] == -1)
            res[idx] = 0;

    for (int idx = 0; idx < n; idx++)
    {
        cout << res[idx];
        if (idx + 1 < n)
            cout << ' ';
    }
    cout << '\n';
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