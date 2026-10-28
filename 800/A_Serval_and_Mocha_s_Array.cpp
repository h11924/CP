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

        vector<ll>a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }

        ll gg=0;
        bool ans=false;

        for(ll i=0;i<n;i++){
            for (ll j=i+1;j<n;j++){
                gg=__gcd(a[i],a[j]);
                if(gg<=2) ans=true;

            }
        }

        if(ans==true) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    
    return 0;
}


/*

Move-Item ".\A_Serval_and_Mocha_s_Array.cpp" ".\800\A_Serval_and_Mocha_s_Array.cpp"
git add "800/A_Serval_and_Mocha_s_Array.cpp"
git commit -m "A_Serval_and_Mocha_s_Array.cpp"
git pull --rebase origin master
git push origin master

*/