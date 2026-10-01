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
        ll a,b,c;
        cin>>a>>b>>c;

         if(a == b || b == c || a == c) {
            cout << 0 << "\n";
            continue;
        }

        ll x = min(a, min(b, c));
        ll z = max(a, max(b, c));
        ll y = a + b + c - x - z;

        ll answer = min(y - x, z - y);

        cout << answer << "\n";
    }
    
    return 0;
}


/*

Move-Item ".\A_Riptide.cpp" ".\1100\A_Riptide.cpp"
git add "1100/A_Riptide.cpp"
git commit -m "A_Riptide.cpp"
git pull --rebase origin master
git push origin master

*/