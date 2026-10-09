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
        cin >> n;

        vector<ll> a(n);
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<ll> b(n);
        for(ll i = 0; i < n; i++) {
            cin >> b[i];
        }

        //so there is only subarray so we can find the chnages here 
        ll l=0;
        ll r=0;

        for(ll i=0;i<n;i++){
            if(a[i]!=b[i]){
                l=i;
                //so we found the first one
                break;
            }
        }

        for(ll i=l;i<n;i++){
            if(a[i]!=b[i]){
                r=i;
            }
        }

        //now we have l and r
        //now we will check if we can further expand this 

        while(l>0 && b[l-1]<=b[l]){
            l--;
        }
        while(r<n-1 && b[r+1]>=b[r]){
            r++;
        }
        
        cout<<l+1<<" "<<r+1<<endl;

    }
    
    return 0;
}


/*

Move-Item ".\B_Sort_the_Subarray.cpp" ".\1100\B_Sort_the_Subarray.cpp"
git add "1100/B_Sort_the_Subarray.cpp"
git commit -m "B_Sort_the_Subarray.cpp"
git pull --rebase origin master
git push origin master

*/