#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    ll l, r;
    cin >> l >> r;
    vector<ll> ans;
    for (int i = 1; i <= n; i++) {
        ll temp = ((l + i - 1) / i) * i;
        ans.push_back(temp);
        if (temp > r) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

/*

Move-Item ".\B_Difference_of_GCDs.cpp" ".\1100\B_Difference_of_GCDs.cpp"
git add "1100/B_Difference_of_GCDs.cpp"
git commit -m "B_Difference_of_GCDs.cpp"
git pull --rebase origin master
git push origin master

*/