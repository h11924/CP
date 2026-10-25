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

        ll maxi=LLONG_MIN;
        ll mini=LLONG_MAX;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            maxi=max(maxi,a[i]);
            mini=min(mini,a[i]);
        }


        //find the max element
        //max the minimum element
        //find theire difference+1/2;

        ll diff=((maxi-mini)+1)/2;

        cout<<diff<<endl;


    }
    
    return 0;
}


/*

Move-Item ".\A_Slimes_on_a_Line.cpp" ".\contest\A_Slimes_on_a_Line.cpp"
git add "contest/A_Slimes_on_a_Line.cpp"
git commit -m "A_Slimes_on_a_Line.cpp"
git pull --rebase origin master
git push origin master

*/