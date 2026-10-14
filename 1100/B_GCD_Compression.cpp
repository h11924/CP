/*

Move-Item ".\B_GCD_Compression.cpp" ".\1100\B_GCD_Compression.cpp"
git add "1100/B_GCD_Compression.cpp"
git commit -m "B_GCD_Compression.cpp"
git pull --rebase origin master
git push origin master

*/

#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> odds, evens;
    for (int i = 1; i <= 2 * n; ++i) {
        int x;
        cin >> x;
        if (x % 2 != 0) {
            odds.push_back(i);
        } else {
            evens.push_back(i);
        }
    }

    vector<pair<int, int>> pairs;

    // Pair up odds
    for (size_t i = 0; i + 1 < odds.size(); i += 2) {
        pairs.push_back({odds[i], odds[i + 1]});
    }

    // Pair up evens
    for (size_t i = 0; i + 1 < evens.size(); i += 2) {
        pairs.push_back({evens[i], evens[i + 1]});
    }

    // Print exactly n - 1 pairs
    for (int i = 0; i < n - 1; ++i) {
        cout << pairs[i].first << " " << pairs[i].second << "\n";
    }
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