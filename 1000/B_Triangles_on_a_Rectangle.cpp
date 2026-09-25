#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll w, h;
    cin >> w >> h;

    ll max_area = 0;

    // Horizontal sides (y = 0 and y = h)
    for (int i = 0; i < 2; i++) {
        int k;
        cin >> k;
        vector<ll> x(k);
        for (int j = 0; j < k; j++) {
            cin >> x[j];
        }
        // Base length = x[k - 1] - x[0], Height = h
        // Area * 2 = Base * Height
        ll base = x[k - 1] - x[0];
        max_area = max(max_area, base * h);
    }

    // Vertical sides (x = 0 and x = w)
    for (int i = 0; i < 2; i++) {
        int k;
        cin >> k;
        vector<ll> y(k);
        for (int j = 0; j < k; j++) {
            cin >> y[j];
        }
        // Base length = y[k - 1] - y[0], Height = w
        // Area * 2 = Base * Height
        ll base = y[k - 1] - y[0];
        max_area = max(max_area, base * w);
    }

    cout << max_area << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

/**
 * 
Move-Item ".\B_Triangle_on_a_Rectangle.cpp" ".\1000\B_Triangle_on_a_Rectangle.cpp"
git add "1000/B_Triangle_on_a_Rectangle.cpp"
git commit -m "B_Triangle_on_a_Rectangle.cpp"
git pull --rebase origin master
git push origin master
 */