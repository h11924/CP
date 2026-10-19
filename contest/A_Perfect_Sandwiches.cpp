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
        ll a,b;
        cin>>a>>b;

        ll ans=min(b,a-b);

        if(a<=b) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    
    return 0;
}


/*

Move-Item ".\A_Perfect_Sandwiches.cpp" ".\contest\A_Perfect_Sandwiches.cpp"
git add "contest/A_Perfect_Sandwiches.cpp"
git commit -m "A_Perfect_Sandwiches.cpp"
git pull --rebase origin master
git push origin master

*/