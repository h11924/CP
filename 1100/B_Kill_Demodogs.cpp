
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const ll mod = 1000000007;

void solve() {
ll n;
cin >> n;

ll a = n % mod;
ll b = (4 * n - 1) % mod;
ll c = (n + 1) % mod;

ll ans = a * b % mod * c % mod;
ans = ans * 166666668 % mod;
ans = ans * 2022 % mod;

cout << ans << '\n';
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin >> t;

while (t--) solve();

return 0;
}


/*

Move-Item ".\B_Kill_Demodogs.cpp" ".\1100\B_Kill_Demodogs.cpp"
git add "1100/B_Kill_Demodogs.cpp"
git commit -m "B_Kill_Demodogs.cpp"
git pull --rebase origin master
git push origin master

*/