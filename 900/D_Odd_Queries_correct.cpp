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
        ll n,q;
        cin >> n >> q;

        vector<ll>a(n + 1);
        vector<ll>prefix(n + 1,0);

        for(int i=1;i<=n;i++){
            ll p;
            cin>>p;
            a[i]=p;
            prefix[i]=prefix[i-1]+a[i];
        }

        while(q--){

            ll l,r,k;
            cin>>l>>r>>k;

            ll seg1=0;
            ll seg2=0;

            // You were calculating sumfull and sumlr by looping
            // from 1 to n for every query.
            // That makes the complexity O(n*q) and can cause TLE.
            // Prefix sum lets us get both sums in O(1).

            ll sumfull=prefix[n];
            ll sumlr=prefix[r]-prefix[l-1];

            // Number of elements in [l,r] is r-l+1.
            // After replacing them with k, their total becomes:
            // (r-l+1)*k
            seg2=(r-l+1)*k;

            // Sum of elements outside [l,r]
            seg1=sumfull-sumlr;

            // Your parity logic is correct:
            // same parity -> even total -> NO
            // different parity -> odd total -> YES
            if(seg1%2==seg2%2){
                cout<<"NO"<<endl;
            }else{
                cout<<"YES"<<endl;
            }
        }
    }
    
    return 0;
}

