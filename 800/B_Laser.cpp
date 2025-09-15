#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    void solve(){
        int n, m;
        ll x, y;
        cin >> n >> m >> x >> y;
        for (int i = 0; i < n; ++i) {
            ll a;
            cin >> a;
        }
        for (int i = 0; i < m; ++i) {
            ll b;
            cin >> b;
        }
        cout << n + m << endl;
    }
};

int main(){
    // fast input output
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        Solution sol;
        sol.solve();
    }
    return 0;
}
