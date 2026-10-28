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

    int oddCount = 0;
    int evenT0 = 0, evenT1 = 0; // buckets by parity of t = (x-2)/2

    for (int x : a)
    {
        if (x % 2 == 1)
        {
            oddCount++;
        }
        else
        {
            int t = (x - 2) / 2;
            if (t % 2 == 0)
                evenT0++;
            else
                evenT1++;
        }
    }

    int ans = max(oddCount, max(evenT0, evenT1));
    cout << ans << "\n";
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