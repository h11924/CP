#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
ll n;
cin >> n;
ll m = n * (n - 1) / 2;
vector<ll> b(m);
for(ll i = 0; i < m; i++) cin >> b[i];

sort(b.begin(), b.end());

vector<ll> a;
ll j = 0;

for(ll i = 0; i < n - 1; i++) {
a.push_back(b[j]);
j += n - 1 - i;
}

a.push_back(b.back());

for(ll x : a) cout << x << " ";
cout << '\n';
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin >> t;
while(t--) solve();

return 0;
}

/*

Move-Item ".\C_Assembly_via_Minimums.cpp" ".\1200\C_Assembly_via_Minimums.cpp"
git add "1200/C_Assembly_via_Minimums.cpp"
git commit -m "C_Assembly_via_Minimums.cpp"
git pull --rebase origin master
git push origin master

*/