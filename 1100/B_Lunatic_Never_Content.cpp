#include <bits/stdc++.h>
#include <numeric>
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

ll gcd(ll a, ll b) {
while (b != 0) {
ll r = a % b;
a = b;
b = r;
}
return a;
}


int main() {
    fast_io();
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        ll n;
        cin>>n;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin>>a[i];
        }

        long long ans = 0;

for (int i = 0; i < n / 2; i++) {
long long d = abs(a[i] - a[n - 1 - i]);
ans = gcd(ans, d);
}

cout << ans << '\n';
    }
    
    return 0;
}


/*

Move-Item ".\B_Lunatic_Never_Content.cpp" ".\1100\B_Lunatic_Never_Content.cpp"
git add "1100/B_Lunatic_Never_Content.cpp"
git commit -m "B_Lunatic_Never_Content.cpp"
git pull --rebase origin master
git push origin master

*/