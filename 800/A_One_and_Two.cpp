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
    int n;
    cin >> n;

    vector<int> a(n);
    int count2 = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 2) {
            count2++;
        }
    }

    // If the count of 2s is odd, we can never split into equal products
    if (count2 % 2 != 0) {
        cout << -1 << "\n";
        return;
    }

    // If there are no 2s at all, split at k = 1
    if (count2 == 0) {
        cout << 1 << "\n";
        return;
    }

    int target2 = count2 / 2;
    int current2 = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == 2) {
            current2++;
        }
        if (current2 == target2) {
            // Print 1-based index and exit loop
            cout << i + 1 << "\n";
            break;
        }
    }
}

int main() {
    fast_io();

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
