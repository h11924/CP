
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<long long, long long>;
using vi = vector<int>;
using vll = vector<long long>;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve() {
}

int main() {
    fast_io();

    int t = 1;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        ll n = s.size();
        s += s;

        ll cur = 0, k = 0;

        for (ll i = 0; i < 2 * n; i++) {
            if (s[i] == '1') {
                cur++;
                k = max(k, min(cur, n));
            }
            else {
                cur = 0;
            }
        }

        if (k == n) {
            cout << n * n << '\n';
        }
        else {
            ll ans = ((k + 1) / 2) * ((k + 2) / 2);
            cout << ans << '\n';
        }
    }

    return 0;
}
