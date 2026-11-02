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
        cin>>n;

        ll ans=LLONG_MAX;
        for(ll i=0;i<n;i++){
            ll a;
            cin>>a;
            ans=ans&a;
        }

        cout<<ans<<"\n";

    }
    
    return 0;
}


/*

Move-Item ".\A_Mocha_and_Math.cpp" ".\900\A_Mocha_and_Math.cpp"
git add "900/A_Mocha_and_Math.cpp"
git commit -m "A_Mocha_and_Math.cpp"
git pull --rebase origin master
git push origin master

*/