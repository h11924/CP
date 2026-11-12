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
        ll n;
        string s;
        cin >> n >> s;

        ll ans = 0;
        if (s[0] == 'B') ans = 1;

        for (ll i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) ans++;
        }

        cout << ans << "\n";
    }
    return 0;
}


/*

Move-Item ".\B_Stubborn_Pen.cpp" ".\contest\B_Stubborn_Pen.cpp"
git add "contest/B_Stubborn_Pen.cpp"
git commit -m "B_Stubborn_Pen.cpp"
git pull --rebase origin master
git push origin master

*/