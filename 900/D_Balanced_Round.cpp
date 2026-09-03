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
        cin >> n >> k;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        ll maxidiff=1;
        ll count=1;
        
        for(ll i=0;i<n-1;i++){
            if(a[i+1]-a[i]<=k){
                count++;
                maxidiff=max(maxidiff,count);
            }else{
                count=1;
            }
        }

        
         ll ans=n-maxidiff;
        cout<<ans<<"\n";

    }
    
    return 0;
}


/*

 Move-Item ".\D_Balanced_Round.cpp" ".\900\D_Balanced_Round.cpp"
git add "900/D_Balanced_Round.cpp"
git commit -m "D_Balanced_Round.cpp"
git push origin master
*/