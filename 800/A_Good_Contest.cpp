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

        

        ll mini=LLONG_MAX;

        for(int i=0;i<3;i++){
            ll a;
            cin>>a;
            mini=min(mini,a);
        }

        ll ans = n-mini;

        cout<<ans<<endl;
    }
    
    return 0;
}


/*

Move-Item ".\A_Good_Contest.cpp" ".\800\A_Good_Contest.cpp"
git add "800/A_Good_Contest.cpp"
git commit -m "A_Good_Contest.cpp"
git pull --rebase origin master
git push origin master

*/