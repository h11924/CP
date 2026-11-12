#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main() {
    fast_io();
    
    int t;
    cin >> t;
    
    while (t--) {
        ll a, b, c;
        cin >> a >> b >> c;

        vector<ll> v = {a, b, c};
        sort(v.begin(), v.end());

        if (v[0] + 1 == v[1] && v[1] + 1 == v[2]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    
    return 0;
}


/*

Move-Item ".\A_Three_Piles.cpp" ".\contest\A_Three_Piles.cpp"
git add "contest/A_Three_Piles.cpp"
git commit -m "A_Three_Piles.cpp"
git pull --rebase origin master
git push origin master

*/