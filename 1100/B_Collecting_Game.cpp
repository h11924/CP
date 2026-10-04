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
        ll n;
        cin>>n;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin>>a[i];
        }

        //a has all element 
        vector<ll> ans(n);
        //this is the answer vector

        vector<pair<ll,ll>>b;
        for(ll i = 0; i < n; i++){
            b.push_back({a[i],i});
        }

        sort(b.begin(),b.end());

        //now all sorted in b vector with proper array 
        //make prefix array 
        vector<ll> prefix(n);
        prefix[0] = b[0].first;
        for(ll i = 1; i < n; i++){
            prefix[i] = prefix[i-1] + b[i].first;
        }

        // we want to travel in b vector and comapre b[o].first <prefix than we need to stop so we add that b[i].second to ans vector

        /*for(ll i=0;i<n;i++){
            if(prefix[i]<b[i].first){
                ans[b[i].second] = i;
                //here i is indec at which we need to stop 
                break;
            }
        }*/
        
        for(ll i=n-1;i>=0;i--){
    ans[b[i].second]=i;

    if(i<n-1 && prefix[i]>=b[i+1].first){
        ans[b[i].second]=ans[b[i+1].second];
    }
}

        for(ll j=0;j<n;j++){
            cout<<ans[j]<<" ";
        }
        cout<<endl;


    }
    
    return 0;
}


/*

Move-Item ".\B_Collecting_Game.cpp" ".\1100\B_Collecting_Game.cpp"
git add "1100/B_Collecting_Game.cpp"
git commit -m "B_Collecting_Game.cpp"
git pull --rebase origin master
git push origin master

*/