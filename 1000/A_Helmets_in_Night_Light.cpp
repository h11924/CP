#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long p;
    cin >> n >> p;

    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    // Store as pair of {cost (b[i]), limit (a[i])}
    vector<pair<long long, long long>> v(n);
    for (int i = 0; i < n; i++) {
        v[i] = {b[i], a[i]};
    }

    // Sort by cost ascending so we always pick the cheapest resident first
    sort(v.begin(), v.end());

    long long min_cost = p; // Chief shares to at least 1 person first
    long long already_shared = 1;

    for (int i = 0; i < n; i++) {
        long long can_be_shared = v[i].second;
        long long sharing_cost = v[i].first;

        // If a resident's cost is >= chief's cost (p), stop using residents
        if (sharing_cost >= p) {
            break;
        }

        // If this resident can cover the remaining residents
        if (already_shared + can_be_shared >= n) {
            min_cost += (n - already_shared) * sharing_cost;
            already_shared = n;
            break;
        } else {
            min_cost += can_be_shared * sharing_cost;
            already_shared += can_be_shared;
        }
    }

    // Any remaining residents are informed directly by the Chief with cost 'p'
    if (already_shared < n) {
        min_cost += (n - already_shared) * p;
    }

    cout << min_cost << "\n";
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

Move-Item ".\A_Helments_in_Night_Light.cpp" ".\1000\A_Helments_in_Night_Light.cpp"
git add "1000/A_Helments_in_Night_Light.cpp"
git commit -m "A_Helments_in_Night_Light.cpp"
git pull --rebase origin master
git push origin master