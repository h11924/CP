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
    
    map<ll, int> freq;
    for (int i = 0; i < n; i++) {
        ll h;
        cin >> h;
        freq[h]++;
    }

    ll ans = 0;
    vector<ll> left_side, middle, right_side;

    for (auto &p : freq) {
        ll h = p.first;
        int cnt = p.second;
        
        ans += min(cnt, 2);
        
        // 1st copy goes to the ascending left slope
        left_side.push_back(h);
        
        // 2nd copy (if it exists) goes to the descending right slope
        if (cnt >= 2) {
            right_side.push_back(h);
        }
        
        // Any 3rd+ copies go into the middle (next to the peak)
        for (int k = 2; k < cnt; k++) {
            middle.push_back(h);
        }
    }

    // Reverse right_side so it goes from largest down to smallest
    reverse(right_side.begin(), right_side.end());

    cout << ans << "\n";
    for (ll x : left_side) cout << x << " ";
    for (ll x : middle) cout << x << " ";
    for (ll x : right_side) cout << x << " ";
    cout << "\n";
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

/*

Move-Item ".\C_Books_on_a_Shelf.cpp" ".\contest\C_Books_on_a_Shelf.cpp"
git add "contest/C_Books_on_a_Shelf.cpp"
git commit -m "C_Books_on_a_Shelf.cpp"
git pull --rebase origin master
git push origin master

*/