#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve() {
        int n;
        cin >> n;
        vector<int> p(n);
        int pos1 = -1, pos2 = -1, posn = -1, pos_n_minus_1 = -1;

        for (int i = 0; i < n; ++i) {
            cin >> p[i];
            if (p[i] == 1) {
                pos1 = i;
            }
            if (p[i] == 2) {
                pos2 = i;
            }
            if (p[i] == n) {
                posn = i;
            }
            if (p[i] == n - 1) {
                pos_n_minus_1 = i;
            }
        }

        if (n <= 3) {
            cout << "YES\n";
            return;
        }

        if (abs(pos1 - pos2) == 1 || abs(posn - pos_n_minus_1) == 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        Solution sol;
        sol.solve();
    }
    return 0;
}