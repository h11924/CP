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

        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ll a;
            cin>>a ;
            ans[i]=a;
        }

        sort(ans.rbegin(),ans.rend());

        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }

        cout<<endl;
    }
    
    return 0;
}


/*

Move-Item ".\B_Bogosort.cpp" ".\1000\B_Bogosort.cpp"
git add "1000/B_Bogosort.cpp"
git commit -m "B_Bogosort.cpp"
git pull --rebase origin master
git push origin master

*/