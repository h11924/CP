/*#include <bits/stdc++.h>
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

        ll maxia=INT_MIN;
        ll maxib=INT_MIN;

        vector<ll>a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
            maxia=max(maxia,a[i]);
        }
        vector<ll>b(n);
        for(ll i=0;i<n;i++){
            cin>>b[i];
            maxib=max(maxib,b[i]);
        }

        ll maxi=0;
        if(maxia>maxib){
            maxi=maxia;
        }else{
            maxi=maxib;
        }

        ll sum=maxi;
        //now we travel in both and see which ever is big add that in sum
        for(ll i=0;i<n;i++){
            if(a[i]>=b[i] && a[i]!=maxi){
                sum+=a[i];
            }else if(b[i]>=a[i] && b[i]!=maxi){
                sum+=b[i];
            }else if(a[i]>=b[i] && a[i]==maxi){
                sum+=b[i];
            }else if(b[i]>=a[i] && b[i]==maxi){
                sum+=a[i];
            }
        }

        cout<<sum<<endl;

    }
    
    return 0;
}


/*

Move-Item ".\B_Absolute_Cinema.cpp" ".\contest\B_Absolute_Cinema.cpp"
git add "contest/B_Absolute_Cinema.cpp"
git commit -m "B_Absolute_Cinema.cpp"
git pull --rebase origin master
git push origin master

*/

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve() {
    ll n;
    cin >> n;

    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    for (ll i = 0; i < n; i++) cin >> b[i];

    ll sum_b = 0;
    ll max_a = 0;

    for (ll i = 0; i < n; i++) {
        ll min_val = min(a[i], b[i]);
        ll max_val = max(a[i], b[i]);

        // Place the smaller value in a, larger value in b
        max_a = max(max_a, min_val);
        sum_b += max_val;
    }

    cout << max_a + sum_b << "\n";
}

int main() {
    fast_io();
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}