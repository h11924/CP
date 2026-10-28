#include <iostream>
#include <set>
#include <utility>

using namespace std;

// Direction arrays to handle all 4 quadrant signs
int dx[4] = {-1, 1, -1, 1};
int dy[4] = {-1, -1, 1, 1};

void solve() {
    int a, b;
    cin >> a >> b;

    int xk, yk;
    cin >> xk >> yk;

    int xq, yq;
    cin >> xq >> yq;

    set<pair<int, int>> king_hits;
    set<pair<int, int>> queen_hits;

    // Generate all candidate knight positions that attack the King and Queen
    for (int i = 0; i < 4; i++) {
        // From King's perspective
        king_hits.insert({xk + dx[i] * a, yk + dy[i] * b});
        king_hits.insert({xk + dx[i] * b, yk + dy[i] * a});

        // From Queen's perspective
        queen_hits.insert({xq + dx[i] * a, yq + dy[i] * b});
        queen_hits.insert({xq + dx[i] * b, yq + dy[i] * a});
    }

    // Count the intersection of both sets
    int ans = 0;
    for (auto pos : king_hits) {
        if (queen_hits.count(pos)) {
            ans++;
        }
    }

    cout << ans << "\n";
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