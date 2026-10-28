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
    
    ll n;
    cin>>n;

    ll count=0;
    
    while (n--) {
        ll c=0;
        for(ll i=0;i<3;i++){
            ll n;
            cin>>n;
            if(n==1) c++;
        }

        if(c>=2) count++;
        
    }

    cout<<count<<endl;
    
    return 0;
}


/*

Move-Item ".\A_Team.cpp" ".\800\A_Team.cpp"
git add "800/A_Team.cpp"
git commit -m "A_Team.cpp"
git pull --rebase origin master
git push origin master

*/