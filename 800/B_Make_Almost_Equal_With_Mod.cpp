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

        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll ans=1;
      
        for(ll k=2;k<=1e18;k=k*2){
            set<ll>st;
            ll gcd=1;
            for(ll i=0;i<n;i++){
                gcd=a[i]%k;
                st.insert(gcd);

            }
            if(st.size()==2){
                ans=k;
                break;
                
            }
        }

        cout<<ans<<endl;
    }
    
    return 0;
}


