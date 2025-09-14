#include<bits/stdc++.h>
using namespace std;
#define ll long long

class Solution {
public:
    void solve(){
        int x, n;
        cin >> x >> n;
        if (n % 2 == 0) {
            cout << 0 << endl;
        } else {
            cout << x << endl;
        }
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
