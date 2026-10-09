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

        ll k;
        cin>>k;
        vector<vector<ll>> a(n,vector<ll>(n));

        for(ll i=0;i<n;i++){
    for(ll j=0;j<n;j++){
        cin>>a[i][j];
    }
}

        ll cnt=0;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                if(a[i][j]!=a[n-1-i][n-1-j]){
                    cnt++;
                }
            }
        }

        if(cnt/2<=k && ((k-cnt/2)%2==0 || n%2==1))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    }
    
    return 0;
}


/*

Move-Item ".\B_Li_Hua_and_Pattern.cpp" ".\1100\B_Li_Hua_and_Pattern.cpp"
git add "1100/B_Li_Hua_and_Pattern.cpp"
git commit -m "B_Li_Hua_and_Pattern.cpp"
git pull --rebase origin master
git push origin master

*/