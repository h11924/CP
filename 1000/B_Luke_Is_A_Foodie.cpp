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


int main() {
    fast_io();
    
    int t = 1;
    cin >> t;
    
    while (t--) {
        ll n,x;
        cin>>n>>x;

        vector<ll> aa(n);
        for(int i=0;i<n;i++){
            ll a;
            cin>>a;
            aa[i]=a;
        }

        vector<pair<ll,ll>> s(n);

        for(int i=0;i<n;i++){
             s[i].first=aa[i]-x;
             s[i].second=aa[i]+x;

            //this is for the first one 
            


        }
        ll l=s[0].first;
        ll r=s[0].second;

        int ans=0;

        for(int i=1;i<n;i++){

            l=max(l,s[i].first);
            r=min(r,s[i].second);

            if(l>r){
                ans++;
                l=s[i].first;
                r=s[i].second;

            }

            
            
        }cout<<ans<<endl;
    }
    
    return 0;
}


/*

Move-Item ".\B_Luke_Is_A_Foodie.cpp" ".\1000\B_Luke_Is_A_Foodie.cpp"
git add "1000/B_Luke_Is_A_Foodie.cpp"
git commit -m "B_Luke_Is_A_Foodie.cpp"
git pull --rebase origin master
git push origin master

*/