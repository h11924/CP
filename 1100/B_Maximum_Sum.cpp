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
        ll n,k;
        cin>>n>>k;

        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a.begin(),a.end());

        /*ll sum=0;
        
        for(ll i=0;i<(n-2*k);i++){
            sum+=a[i];
        }
        cout<<sum<<"\n";*/

        vector<ll> prefix(n+1,0);
        for(ll i=0;i<n;i++){
            prefix[i+1]=prefix[i]+a[i];
        }

        ll ans=0;
        for(ll i=0;i<=k;i++){
            ll l=2*i;
            ll r=n-(k-i);

            ll sum=prefix[r]-prefix[l];

            ans=max(ans,sum);
        }
        cout<<ans<<"\n";

    }
    
    return 0;
}


/*

Move-Item ".\B_Maximum_Sum.cpp" ".\1100\B_Maximum_Sum.cpp"
git add "1100/B_Maximum_Sum.cpp"
git commit -m "B_Maximum_Sum.cpp"
git pull --rebase origin master
git push origin master

*/